/*******************************************************************************
################################################################################
#   Copyright (c) [2017-2019] [Radisys]                                        #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################
*******************************************************************************/

/************************************************************************
 
     Name:     LTE-MAC layer
  
     Type:     C source file
  
     Desc:     C source code for Layer Manager Interface Module 
  
     File:     rg_sch_lmm.c 
  
**********************************************************************/

/** @file rg_sch_lmm.c
@brief This file contains the Layer Management interface module implementation for scheduler.
       The functions for the configuration, control, status and statistics 
       request primitives are defined here.
*/

static const char* RLOG_MODULE_NAME="MAC";
static int RLOG_MODULE_ID=4096;
static int RLOG_FILE_ID=167;

/* header include files (.h) */
#include "common_def.h"
#include "rg_env.h"        /* MAC Environment Defines */
#include "rgr.h"           /* RGR Interface defines */
#include "tfu.h"           /* RGU Interface defines */
#include "lrg.h"           /* LRG Interface defines */
#include "rgm.h"           /* RGM Interface defines */
#include "rg_sch.h"        /* Scheduler defines */
#include "rg_sch_inf.h"        /* Scheduler defines */
#include "rg_sch_err.h"        /* MAC error defines */
#ifdef LTE_L2_MEAS
#include "rg_sch_cmn.h"    /* typedefs for Scheduler */
#endif
#include "rl_interface.h"
#include "rl_common.h"

/* header/extern include files (.x) */
#include "rgr.x"           /* RGR Interface includes */
#include "rgm.x"           /* RGM Interface includes */
#include "tfu.x"           /* RGU Interface includes */
#include "lrg.x"           /* LRG Interface includes */
#include "rg_sch_inf.x"    /* Scheduler defines */
#include "rg_sch.x"        /* Scheduler includes */
#ifdef LTE_L2_MEAS
#include "rg_sch_cmn.x"    /* typedefs for Scheduler */
#endif 
#ifndef LTE_L2_MEAS
PUBLIC Void rgSCHCmnInit ARGS((Void));
#endif 
/* forward references */
extern int schActvInit(Ent entity, Inst instId, Region region, Reason reason);
#ifdef UNUSE_FUN
PRIVATE U16 rgSCHLmmSapCfg ARGS((
   Inst           inst,
   RgCfg          *cfg,
   U8             sapIdx,
   Elmnt          sapType
));
#endif
PRIVATE Void rgSCHLmmShutdown ARGS((
   Inst inst
));


PUBLIC void printSchCellInfo(void)
{
   U8 idx=0;
   U8 inst=0;
   for (idx = 0; idx < rgSchCb[inst].numSaps; idx++)
   {
      /* Unbind all the TFU SAP */
      /* Free the memory held by the cell associated
       * with this SAP */
      if (rgSchCb[inst].tfuSap[idx].cell != NULLP)
      {
         RLOG1(L_INFO,"CELL %d\n", idx);
         RLOG1(L_INFO,"NUM UEs :%d\n",rgSchCb[inst].tfuSap[idx].cell->ueLst.nmbEnt);
      }
   }
}

/**
 * @brief SAP Configuration Handler. 
 *
 * @details
 *
 *     Function : rgSCHLmmSapCfg
 *     
 *     This function in called by HandleSchGenCfgReq(). It handles the
 *     interface SAP configuration of the scheduler instance. It 
 *     initializes the sapState to LRG_UNBND. Returns
 *     reason for success/failure of this function.
 *     
 *  @param[in]  RgCfg *cfg, the Configuaration information 
 *  @return  U16
 *      -# LCM_REASON_GENCFG_NOT_DONE
 *      -# LCM_REASON_INVALID_SAP
 *      -# LCM_REASON_NOT_APPL
 **/
#ifdef UNUSE_FUN
#ifdef ANSI
PRIVATE U16 rgSCHLmmSapCfg
(
Inst  dInst,
RgCfg *cfg,            /* Configuaration information */
U8    sapIdx,          /* SAP index */
Elmnt sapType             /* SAP Type */
)
#else
PRIVATE U16 rgSCHLmmSapCfg(dInst, cfg, sapIdx, sapType)
Inst  dInst;
RgCfg *cfg;            /* Configuaration information */
U8    sapIdx;          /* SAP index */
Elmnt sapType;            /* SAP Type */
#endif
{
   U16                  ret = LCM_REASON_NOT_APPL;
   RgSchLowSapCfgInfo   *lowSapCfg = NULLP;
   RgSchUpSapCfgInfo    *upSapCfg = NULLP;
   Inst  inst = (dInst - SCH_INST_START);

   TRC2(rgSCHLmmSapCfg)

   /* Check if Gen Config has been done */

   switch(sapType)
   {   
      case STRGRSAP:
#ifndef CL_MAC_LWLC
         if ((cfg->s.schInstCfg.rgrSap[sapIdx].selector != ODU_SELECTOR_TC) &&
             (cfg->s.schInstCfg.rgrSap[sapIdx].selector != ODU_SELECTOR_LC))
         {
            ret = LCM_REASON_INVALID_PAR_VAL;
            RLOG_ARG0(L_ERROR,DBG_INSTID,inst, "rgSCHLmmSapCfg(): unsupported"
               " Selector value for RGR.");
            break;
         }
#endif
         if(rgSchCb[inst].rgrSap[sapIdx].sapSta.sapState == LRG_NOT_CFG)
         { 
            rgSchCb[inst].rgrSap[sapIdx].sapSta.sapState = LRG_UNBND;
         }
         upSapCfg = &rgSchCb[inst].rgrSap[sapIdx].sapCfg;

         upSapCfg->sapPst.dstEnt = cfg->s.schInstCfg.rgrSap[sapIdx].ent;
         upSapCfg->sapPst.dstInst = cfg->s.schInstCfg.rgrSap[sapIdx].inst;
         upSapCfg->sapPst.dstProcId = cfg->s.schInstCfg.rgrSap[sapIdx].procId;
         upSapCfg->sapPst.srcEnt = rgSchCb[inst].rgSchInit.ent;
         upSapCfg->sapPst.srcInst = rgSchCb[inst].rgSchInit.inst +
         SCH_INST_START;
         upSapCfg->sapPst.srcProcId = rgSchCb[inst].rgSchInit.procId;
         upSapCfg->sapPst.region = cfg->s.schInstCfg.rgrSap[sapIdx].mem.region;
         upSapCfg->sapPst.pool = cfg->s.schInstCfg.rgrSap[sapIdx].mem.pool;
         upSapCfg->sapPst.selector = cfg->s.schInstCfg.rgrSap[sapIdx].selector;
         upSapCfg->sapPst.route = cfg->s.schInstCfg.rgrSap[sapIdx].route;
         upSapCfg->sapPst.intfVer = 0; 
         upSapCfg->sapPst.event = 0; 
         upSapCfg->sapPst.prior = cfg->s.schInstCfg.rgrSap[sapIdx].prior;
         upSapCfg->suId = cfg->s.schInstCfg.rgrSap[sapIdx].suId;
         upSapCfg->spId = cfg->s.schInstCfg.rgrSap[sapIdx].spId;
         break;
      case STTFUSAP:
#ifndef CL_MAC_LWLC
         if ((cfg->s.schInstCfg.tfuSap[sapIdx].selector != ODU_SELECTOR_TC) &&
             (cfg->s.schInstCfg.tfuSap[sapIdx].selector != ODU_SELECTOR_LC))
         {
            ret = LCM_REASON_INVALID_PAR_VAL;
            RLOG_ARG0(L_ERROR,DBG_INSTID,inst, "rgSCHLmmSapCfg(): unsupported"
                     " Selector value for TFU.");
            break;
         }
#endif
         if (rgSchCb[inst].tfuSap[sapIdx].sapSta.sapState == LRG_NOT_CFG) 
         { 
            rgSchCb[inst].tfuSap[sapIdx].sapSta.sapState = LRG_UNBND;
         }
         /* Initialize the  sap timer */
         cmInitTimers(&(rgSchCb[inst].tfuSap[sapIdx].tmrBlk), 1);
         lowSapCfg = &rgSchCb[inst].tfuSap[sapIdx].sapCfg;

         lowSapCfg->sapPst.dstEnt = cfg->s.schInstCfg.tfuSap[sapIdx].ent;
         lowSapCfg->sapPst.dstInst = cfg->s.schInstCfg.tfuSap[sapIdx].inst;
         lowSapCfg->sapPst.dstProcId = cfg->s.schInstCfg.tfuSap[sapIdx].procId;
         lowSapCfg->sapPst.srcEnt = rgSchCb[inst].rgSchInit.ent;
         lowSapCfg->sapPst.srcInst = rgSchCb[inst].rgSchInit.inst +
         SCH_INST_START;
         lowSapCfg->sapPst.srcProcId = rgSchCb[inst].rgSchInit.procId;
         lowSapCfg->sapPst.region = cfg->s.schInstCfg.tfuSap[sapIdx].mem.region;
         lowSapCfg->sapPst.pool = cfg->s.schInstCfg.tfuSap[sapIdx].mem.pool;
         lowSapCfg->sapPst.selector = cfg->s.schInstCfg.tfuSap[sapIdx].selector;
         lowSapCfg->sapPst.route = cfg->s.schInstCfg.tfuSap[sapIdx].route;
         lowSapCfg->sapPst.intfVer = 0; 
          lowSapCfg->sapPst.event = 0; 
         lowSapCfg->sapPst.prior = cfg->s.schInstCfg.tfuSap[sapIdx].prior;
         lowSapCfg->suId = cfg->s.schInstCfg.tfuSap[sapIdx].suId;
         lowSapCfg->spId = cfg->s.schInstCfg.tfuSap[sapIdx].spId;
         cmMemcpy((U8 *)&lowSapCfg->bndTmr, 
                  (U8 *)&cfg->s.schInstCfg.tfuSap[sapIdx].bndTmr,
                  sizeof(TmrCfg));
         break;
      case STRGMSAP:
#ifndef RGM_LWLC
         if ((cfg->s.schInstCfg.rgmSap[sapIdx].selector != RGM_SEL_LWLC) &&
             (cfg->s.schInstCfg.rgmSap[sapIdx].selector != RGM_SEL_LC) &&
             (cfg->s.schInstCfg.rgmSap[sapIdx].selector != RGM_SEL_TC))
         {
            ret = LCM_REASON_INVALID_PAR_VAL;
            RLOG_ARG0(L_ERROR,DBG_INSTID,inst, "rgSCHLmmSapCfg(): unsupported"
                     " Selector value for RGM.");
            break;
         }
#endif
         if (rgSchCb[inst].rgmSap[sapIdx].sapSta.sapState == LRG_NOT_CFG) 
         { 
            rgSchCb[inst].rgmSap[sapIdx].sapSta.sapState = LRG_UNBND;
         }
         upSapCfg = &rgSchCb[inst].rgmSap[sapIdx].sapCfg;
         upSapCfg->sapPst.dstEnt = cfg->s.schInstCfg.rgmSap[sapIdx].ent;
         upSapCfg->sapPst.dstInst = cfg->s.schInstCfg.rgmSap[sapIdx].inst;
         upSapCfg->sapPst.dstProcId = cfg->s.schInstCfg.rgmSap[sapIdx].procId;
         upSapCfg->sapPst.srcEnt = rgSchCb[inst].rgSchInit.ent;
         upSapCfg->sapPst.srcInst = rgSchCb[inst].rgSchInit.inst +
         SCH_INST_START;
         upSapCfg->sapPst.srcProcId = rgSchCb[inst].rgSchInit.procId;
         upSapCfg->sapPst.region = cfg->s.schInstCfg.rgmSap[sapIdx].mem.region;
         upSapCfg->sapPst.pool = cfg->s.schInstCfg.rgmSap[sapIdx].mem.pool;
         upSapCfg->sapPst.selector = cfg->s.schInstCfg.rgmSap[sapIdx].selector;
         upSapCfg->sapPst.route = cfg->s.schInstCfg.rgmSap[sapIdx].route;
         upSapCfg->sapPst.intfVer = 0; 
         upSapCfg->sapPst.event = 0; 
         upSapCfg->sapPst.prior = cfg->s.schInstCfg.rgmSap[sapIdx].prior;
         upSapCfg->suId = cfg->s.schInstCfg.rgmSap[sapIdx].suId;
         upSapCfg->spId = cfg->s.schInstCfg.rgmSap[sapIdx].spId;

         break;
      default:
         /* would never reach here */
         break;
   }
   RETVALUE(ret);
}
#endif

/***********************************************************
 *
 *     Func : rgSCHLmmShutdown
 *        
 *
 *     Desc : Handles the scheduler instance shutdown request. Calls 
 *     rgSCHCfgFreeCellCb(RgSchCellCb*) to handle each cellCb deallocation.
 *            
 *
 *     Ret  : Void
 *
 *     Notes: 
 *
 *     File : rg_sch_lmm.c 
 *
 **********************************************************/
#ifdef ANSI
PRIVATE Void rgSCHLmmShutdown
(
Inst inst
)
#else
PRIVATE Void rgSCHLmmShutdown(inst)
Inst inst;
#endif
{
   Inst          dInst = inst + SCH_INST_START;
   U8            idx;
#ifdef LTE_L2_MEAS
   CmLList       *lnk = NULLP;
   RgSchCb       *instCb =  &rgSchCb[inst];
   RgSchCellCb   *cell = NULLP;
   RgSchL2MeasCb *measCb;
   U8            ulAllocIdx;
   RgSchCmnUlCell *cellUl;
   RgSchClcBoRpt  *bo = NULL;
#endif

   TRC2(rgSCHLmmShutdown)

#ifdef LTE_L2_MEAS
   for (idx = 0; idx < instCb->numSaps; idx++)
   {
     /* got the cell break the loop */
     cell = instCb->rgrSap[idx].cell;
     if(cell != NULLP)
     {
        /* Free the memory held up by  ulAllocInfo */
        cellUl = RG_SCH_CMN_GET_UL_CELL(cell);
#ifdef LTE_TDD
        for(ulAllocIdx = 0; ulAllocIdx < RGSCH_SF_ALLOC_SIZE; ulAllocIdx++)
#else
        for(ulAllocIdx = 0; ulAllocIdx < RGSCH_NUM_SUB_FRAMES; ulAllocIdx++)
#endif
        {
           if(cell->sfAllocArr[ulAllocIdx].ulUeInfo.ulAllocInfo != NULLP)
           {
             /* ccpu00117052 - MOD - Passing double pointer
             for proper NULLP assignment*/
             rgSCHUtlFreeSBuf(cell->instIdx, 
                    (Data **)(&(cell->sfAllocArr[ulAllocIdx].ulUeInfo.\
                                ulAllocInfo)),
                    cellUl->maxAllocPerUlSf * sizeof(RgInfUeUlAlloc));
           }
        }
        /* Free the memory allocated to measCb */
        lnk = cell->l2mList.first;
        while(lnk != NULLP)
        {
           measCb = (RgSchL2MeasCb *)lnk->node;
           cmLListDelFrm(&cell->l2mList, lnk);
           lnk = lnk->next;
             /* ccpu00117052 - MOD - Passing double pointer
             for proper NULLP assignment*/
           rgSCHUtlFreeSBuf(cell->instIdx, (Data **)&measCb,\
                          sizeof(RgSchL2MeasCb));
        }

        /* Free mem if any present for boLst for common channels */
        for(idx = 0; idx < RGSCH_MAX_CMN_LC_CB; idx++)
        {
           lnk = (CmLList *)cell->cmnLcCb[idx].boLst.first;
           while (lnk)
           {
              bo = (RgSchClcBoRpt *)(lnk->node);
              lnk = lnk->next;
              cmLListDelFrm(&cell->cmnLcCb[idx].boLst, &bo->boLstEnt);
              rgSCHUtlFreeSBuf(cell->instIdx, (Data **)&bo, sizeof(RgSchClcBoRpt));
           }
        }
     }
   }
#endif

#ifdef LTE_ADV
   rgSCHLaaDeInitEnbCb(&rgSchCb[inst]);
#endif
   for (idx = 0; idx < rgSchCb[inst].numSaps; idx++)
   {
      /* Unbind all the TFU SAP */
      if(rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_WAIT_BNDCFM)
      {
         rgSCHUtlTfuUBndReq(inst, rgSchCb[inst].tfuSap[idx].sapCfg, LRG_UNBND);
         if (rgSchCb[inst].tfuSap[idx].sapCfg.bndTmr.enb == TRUE)
         {
            rgSCHLmmStopTmr(inst, RGSCH_BNDREQ_TMR, (PTR)&rgSchCb[inst].tfuSap[idx]); 
         }
         rgSchCb[inst].tfuSap[idx].sapSta.sapState = LRG_UNBND;
      }
      if(rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_BND)
      {
         rgSCHUtlTfuUBndReq(inst, rgSchCb[inst].tfuSap[idx].sapCfg, LRG_UNBND);
         rgSchCb[inst].tfuSap[idx].sapSta.sapState = LRG_UNBND;
      }
      /* Free the memory held by the cell associated with this SAP */
      if (rgSchCb[inst].tfuSap[idx].cell != NULLP)
         rgSCHCfgFreeCellCb(rgSchCb[inst].tfuSap[idx].cell);
      rgSchCb[inst].tfuSap[idx].cell = NULLP;
   }
   /* Free the memory held by the scheduler instance */
   /* Deallocate RGR saps */
   SPutSBuf(rgSchCb[inst].rgSchInit.region,
                rgSchCb[inst].rgSchInit.pool,
                (Data *)rgSchCb[inst].rgrSap,
                (sizeof(RgSchUpSapCb) * rgSchCb[inst].numSaps));
   rgSchCb[inst].rgrSap = NULLP;
   /* Deallocate RGM saps */
   SPutSBuf(rgSchCb[inst].rgSchInit.region,
                rgSchCb[inst].rgSchInit.pool,
                (Data *)rgSchCb[inst].rgmSap,
                (sizeof(RgSchUpSapCb) * rgSchCb[inst].numSaps));
   rgSchCb[inst].rgmSap = NULLP;

   /* Deallocate TFU saps */
   SPutSBuf(rgSchCb[inst].rgSchInit.region,
                rgSchCb[inst].rgSchInit.pool,
                (Data *)rgSchCb[inst].tfuSap,
                (sizeof(RgSchLowSapCb) * rgSchCb[inst].numSaps));
   rgSchCb[inst].tfuSap = NULLP;

   /* Deallocate bndCfmResponses */
   SPutSBuf(rgSchCb[inst].rgSchInit.region,
                rgSchCb[inst].rgSchInit.pool,
                (Data *)rgSchCb[inst].genCfg.bndCfmResp,
                (sizeof(RgSchLmResponse) * rgSchCb[inst].numSaps));
   rgSchCb[inst].genCfg.bndCfmResp = NULLP;
   /* De-register the Timer Service */
   (Void) SDeregTmrMt(rgSchCb[inst].rgSchInit.ent, dInst,
                     (S16)rgSchCb[inst].genCfg.tmrRes, schActvTmr); 

   /* call back the task initialization function to intialize
    * the global rgSchCb[inst] Struct */
   schActvInit(rgSchCb[inst].rgSchInit.ent, dInst, rgSchCb[inst].rgSchInit.region, 
              rgSchCb[inst].rgSchInit.reason);
   
   /* Set Config done in TskInit */
   rgSchCb[inst].rgSchInit.cfgDone = FALSE;

   RETVOID;
}


/***********************************************************
 *
 *     Func : rgSCHLmmGenCntrl 
 *        
 *
 *     Desc : Processes the LM control request for STGEN elmnt.
 *            
 *
 *     Ret  : Void
 *
 *     Notes: 
 *
 *     File : rg_sch_lmm.c 
 *
 **********************************************************/
#ifdef ANSI
PUBLIC Void rgSCHLmmGenCntrl 
(
RgMngmt       *cntrl,
RgMngmt       *cfm,
Pst           *cfmPst
)
#else
PUBLIC Void rgSCHLmmGenCntrl(cntrl, cfm, cfmPst)
RgMngmt       *cntrl;
RgMngmt       *cfm;
Pst           *cfmPst;
#endif
{
   Inst      inst = (cfmPst->srcInst - SCH_INST_START); /* Scheduler instance ID */
   TRC2(rgSCHLmmGenCntrl)

   cfm->cfm.status = LCM_PRIM_OK;
   cfm->cfm.reason = LCM_REASON_NOT_APPL;
   

   switch(cntrl->t.cntrl.action)
   {
      case AENA:
         /* Action is Enable */
         switch(cntrl->t.cntrl.subAction)
         {
            case SAUSTA:   
            /* Enable Unsolicited Status (alarms) */
               rgSchCb[inst].rgSchInit.usta = TRUE;
               /*Store the response and TransId for sending the Alarms */
               cmMemcpy((U8 *)&rgSchCb[inst].genCfg.ustaResp.response, 
               (U8 *)&cntrl->hdr.response, sizeof(Resp));
               rgSchCb[inst].genCfg.ustaResp.transId = cntrl->hdr.transId;
               break;
            case SADBG:
            /* Enable Debug Printing */
#ifdef DEBUGP
               rgSchCb[inst].rgSchInit.dbgMask |= cntrl->t.cntrl.s.rgDbgCntrl.dbgMask;
#endif
               break;
#ifdef PHY_ERROR_LOGING
            case SAELMNT:
               {
                  rgSchUlAllocCntr.mcs = cntrl->t.cntrl.s.rgSchUlAllocCntrl.mcs;
                  rgSchUlAllocCntr.numOfRb = cntrl->t.cntrl.s.rgSchUlAllocCntrl.numOfRb;
                  rgSchUlAllocCntr.rbStart = cntrl->t.cntrl.s.rgSchUlAllocCntrl.rbStart;
                  rgSchUlAllocCntr.testStart = cntrl->t.cntrl.s.rgSchUlAllocCntrl.testStart;
                  rgSchUlAllocCntr.enaLog = cntrl->t.cntrl.s.rgSchUlAllocCntrl.enaLog;
                  rgSchUlAllocCntr.logTime = cntrl->t.cntrl.s.rgSchUlAllocCntrl.logTime;
                  rgSchUlAllocCntr.crcOk = 0;
                  rgSchUlAllocCntr.crcErr = 0;
                  rgSchUlAllocCntr.numUlPackets = 0;
                  rgSchUlAllocCntr.numPrach = 0;
                  rgSchUlAllocCntr.taZero = 0;
#ifdef MAC_SCH_STATS
                  /* Reset
                   * L2
                   * statistics
                   * */
                  cmMemset((U8 *)&hqRetxStats, 0, sizeof(RgSchHqRetxStats));
                  cmMemset((U8 *)&hqFailStats, 0, sizeof(RgSchNackAckStats));
#endif
                  break;
               }
#endif
            default:
               cfm->cfm.status = LCM_PRIM_NOK;
               cfm->cfm.reason = LCM_REASON_INVALID_PAR_VAL;
               RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmGenCntrl(): "
                  "invalid subaction=%d", cntrl->t.cntrl.subAction);
               break;
         }
         break;
      case ADISIMM:
         /* Action is Diable immidiately */
         switch(cntrl->t.cntrl.subAction)
         {
            case SAUSTA:
            /* Disable Unsolicited Status (alarms) */
               rgSchCb[inst].rgSchInit.usta = FALSE;
               break;
            case SADBG:
            /* Disable Debug Printing */
#ifdef DEBUGP
               rgSchCb[inst].rgSchInit.dbgMask &=\
                          ~cntrl->t.cntrl.s.rgDbgCntrl.dbgMask;
#endif
               break;

            default:
               cfm->cfm.status = LCM_PRIM_NOK;
               cfm->cfm.reason = LCM_REASON_INVALID_PAR_VAL;
               RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmGenCntrl():"
                 " invalid subaction=%d", cntrl->t.cntrl.subAction);
               break;
         }
         break;
      case ASHUTDOWN:
         /* Free all the memory dynamically allocated by MAC */
         rgSCHLmmShutdown(inst);
         break;
      default:
         cfm->cfm.status = LCM_PRIM_NOK;
         cfm->cfm.reason = LCM_REASON_INVALID_PAR_VAL;
         RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmGenCntrl(): invalid"
          " action=%d", cntrl->t.cntrl.action);
         break;
   }
   RgMiLrgSchCntrlCfm(cfmPst, cfm);
   RETVOID;
}


/***********************************************************
 *
 *     Func : rgSCHLmmSapCntrl 
 *        
 *
 *     Desc : Processes the LM control request for STxxxSAP elmnt.
 *            
 *
 *     Ret  : Void
 *
 *     Notes: 
 *
 *     File : rg_sch_lmm.c 
 *
 **********************************************************/
#ifdef ANSI
PUBLIC Void rgSCHLmmSapCntrl 
(
RgMngmt       *cntrl,
RgMngmt       *cfm,
Pst           *cfmPst
)
#else
PUBLIC Void rgSCHLmmSapCntrl(cntrl, cfm, cfmPst)
RgMngmt       *cntrl;
RgMngmt       *cfm;
Pst           *cfmPst;
#endif
{
   U8       idx;

   /* TODO Pass InstId instead of using InstId from cfmPst */
   Inst      inst = (cfmPst->srcInst - SCH_INST_START); /* Scheduler instance Id */
   TRC2(rgSCHLmmSapCntrl)

   /* Only TFU SAP can be controlled by LM */
   switch(cntrl->hdr.elmId.elmnt)
   {
      case STTFUSAP:
         idx = (U8)cntrl->t.cntrl.s.rgSapCntrl.suId;
         if (idx > LRG_MAX_SAPS_PER_INST)
         {
            cfm->cfm.status = LCM_PRIM_NOK;
            cfm->cfm.reason = LCM_REASON_INVALID_SAP;
         }
         switch(cntrl->t.cntrl.action)
         {
            case ABND:
               /* Bind Enable Request */
               if ((rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_NOT_CFG) ||
                   (rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_BND))
               {
                  cfm->cfm.status = LCM_PRIM_NOK;
                  cfm->cfm.reason = LCM_REASON_INVALID_SAP;
               }
               else
               {
                  if (rgSchCb[inst].tfuSap[idx].sapCfg.bndTmr.enb == TRUE)
                  {
                     rgSCHLmmStartTmr(inst, RGSCH_BNDREQ_TMR,
                                  rgSchCb[inst].tfuSap[idx].sapCfg.bndTmr.val, 
                                  (PTR)&rgSchCb[inst].tfuSap[idx]);
                  }
                  /* Change SAP state */
                  rgSchCb[inst].tfuSap[idx].sapSta.sapState = LRG_WAIT_BNDCFM;
                  rgSchCb[inst].tfuSap[idx].numBndRetries++;
                  /* Store the response and TransId for sending 
                   * the Control confirm */
                  cmMemcpy((U8 *)&rgSchCb[inst].genCfg.bndCfmResp[idx].response,
                           (U8 *)&cntrl->hdr.response, sizeof(Resp));
                  rgSchCb[inst].genCfg.bndCfmResp[idx].transId = 
                                                cntrl->hdr.transId;
                  
                  cfm->cfm.status = LCM_PRIM_OK_NDONE;
                  cfm->cfm.reason = LCM_REASON_NOT_APPL;

                  /* Sending Control Confirm before sending Bind
                   * Request to TFU  */
                  RgMiLrgSchCntrlCfm(cfmPst, cfm);
                  
                  rgSCHUtlTfuBndReq(inst, rgSchCb[inst].tfuSap[idx].sapCfg.suId, 
                                 rgSchCb[inst].tfuSap[idx].sapCfg.spId);
                 RETVOID; 
               }
               break;
            case AUBND:
            /* Unbind request */

               /* Check if the SAP is configured */
               if( (rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_NOT_CFG) ||
                     (rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_UNBND))
               {
                  cfm->cfm.status = LCM_PRIM_NOK;
                  cfm->cfm.reason = LCM_REASON_INVALID_MSGTYPE;
               }
               else
               {
                  rgSCHUtlTfuUBndReq(inst, rgSchCb[inst].tfuSap[idx].sapCfg,
                                  TFU_UBNDREQ_MNGMT);
                  if (rgSchCb[inst].tfuSap[idx].sapCfg.bndTmr.enb == TRUE)
                  {
                     rgSCHLmmStopTmr(inst, RGSCH_BNDREQ_TMR, 
                                       (PTR)&rgSchCb[inst].tfuSap[idx]);
                  }
                  /* Change SAP state */
                  rgSchCb[inst].tfuSap[idx].sapSta.sapState = LRG_UNBND;
                  cfm->cfm.status = LCM_PRIM_OK;
                  cfm->cfm.reason = LCM_REASON_NOT_APPL;
               }
               break;
            case ADEL:
               /* Delete SAP, does initialization of SAP */
               if ((rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_WAIT_BNDCFM) ||
                   (rgSchCb[inst].tfuSap[idx].sapSta.sapState == LRG_BND))
               {
                  rgSCHUtlTfuUBndReq(inst, rgSchCb[inst].tfuSap[idx].sapCfg,
                                  TFU_UBNDREQ_MNGMT);
                  if (rgSchCb[inst].tfuSap[idx].sapCfg.bndTmr.enb == TRUE)
                  {
                     rgSCHLmmStopTmr(inst, RGSCH_BNDREQ_TMR,
                                     (PTR)&rgSchCb[inst].tfuSap[idx]);
                  }
               }
               cmMemset((U8 *)&rgSchCb[inst].tfuSap[idx], 0, sizeof(RgSchLowSapCb));
               rgSchCb[inst].tfuSap[idx].sapSta.sapState = LRG_NOT_CFG;
               cfm->cfm.status = LCM_PRIM_OK;
               cfm->cfm.reason = LCM_REASON_NOT_APPL;
               break;
            default:
               cfm->cfm.status = LCM_PRIM_NOK;
               cfm->cfm.reason = LCM_REASON_INVALID_PAR_VAL;
               RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmSapCntrl(): "
                  "invalid action=%d", cntrl->t.cntrl.action);
               break;
         }
         break;
      case STRGRSAP:
         idx = (U8)cntrl->t.cntrl.s.rgSapCntrl.spId;
         if (idx > LRG_MAX_SAPS_PER_INST)
         {
            cfm->cfm.status = LCM_PRIM_NOK;
            cfm->cfm.reason = LCM_REASON_INVALID_SAP;
         }
         switch(cntrl->t.cntrl.action)
         {
            case ADEL:
               cmMemset((U8 *)&rgSchCb[inst].rgrSap[idx], 0, sizeof(RgSchUpSapCb));
               rgSchCb[inst].rgrSap[idx].sapSta.sapState = LRG_NOT_CFG;
               cfm->cfm.status = LCM_PRIM_OK;
               cfm->cfm.reason = LCM_REASON_NOT_APPL;
               break;
            default:
               cfm->cfm.status = LCM_PRIM_NOK;
               cfm->cfm.reason = LCM_REASON_INVALID_PAR_VAL;
               RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmSapCntrl(): "
                     "invalid action=%d", cntrl->t.cntrl.action);
               break;
         }
         break;
      case STRGMSAP:
         idx = (U8)cntrl->t.cntrl.s.rgSapCntrl.spId;
         if (idx > LRG_MAX_SAPS_PER_INST)
         {
            cfm->cfm.status = LCM_PRIM_NOK;
            cfm->cfm.reason = LCM_REASON_INVALID_SAP;
         }
         switch(cntrl->t.cntrl.action)
         {
            case ADEL:
               cmMemset((U8 *)&rgSchCb[inst].rgmSap[idx], 0, sizeof(RgSchUpSapCb));
               rgSchCb[inst].rgmSap[idx].sapSta.sapState = LRG_NOT_CFG;
               cfm->cfm.status = LCM_PRIM_OK;
               cfm->cfm.reason = LCM_REASON_NOT_APPL;
               break;
            default:
               cfm->cfm.status = LCM_PRIM_NOK;
               cfm->cfm.reason = LCM_REASON_INVALID_PAR_VAL;
               RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmSapCntrl(): "
                     "invalid action=%d", cntrl->t.cntrl.action);
               break;
         }
         break;

       default:
         /* Would never come here. */
         RETVOID;
   }
   RgMiLrgSchCntrlCfm(cfmPst, cfm);
   RETVOID;
}


/***********************************************************
 *
 *     Func : SchFillCfmPst 
 *        
 *
 *     Desc : Fills the Confirmation Post Structure cfmPst using the reqPst 
 *            and the cfm->hdr.response.
 *            
 *
 *     Ret  : Void
 *
 *     Notes: 
 *
 *     File : rg_sch_lmm.c 
 *
 **********************************************************/
#ifdef ANSI
PUBLIC Void SchFillCfmPst
(
Pst           *reqPst,
Pst           *cfmPst,
RgMngmt       *cfm
)
#else
PUBLIC Void SchFillCfmPst(reqPst, cfmPst, cfm)
Pst           *reqPst;
Pst           *cfmPst;
RgMngmt       *cfm;
#endif
{
   Inst inst;

   TRC2(SchFillCfmPst)

   inst = (reqPst->dstInst - SCH_INST_START);

   cfmPst->srcEnt    = ENTRG;
   cfmPst->srcInst   = (Inst) 1;
   cfmPst->srcProcId = rgSchCb[inst].rgSchInit.procId;
   cfmPst->dstEnt    = ENTRG;
   cfmPst->dstInst   = (Inst) 0;
   cfmPst->dstProcId = reqPst->srcProcId;

   cfmPst->selector  = cfm->hdr.response.selector;
   cfmPst->region    = cfm->hdr.response.mem.region;
   cfmPst->pool      = cfm->hdr.response.mem.pool;

   RETVOID;
}


/**
 * @brief Timer start handler. 
 *
 * @details
 *
 *     Function : rgSCHLmmStartTmr
 *     
 *     This function based on the input parameters starts the timer for 
 *     "tmrVal" duration. As of now scheduler instance uses the timer 
 *     functionality for BndReq only. Hence there is no conditional
 *     code based on "tmrEvnt".
 *     
 *  @param[in]  S16   tmrEvnt, the Timer Event    
 *  @param[in]  U32   tmrVal,  the Wait Time
 *  @param[in]  PTR   cb,  Entry for which Timer expired
 *  @return  S16
 *      -# ROK
 **/
#ifdef ANSI
PUBLIC S16 rgSCHLmmStartTmr
(
Inst               inst,
S16                tmrEvnt,            /* Timer Event */
U32                tmrVal,             /* Wait Time */
PTR                cb                  /* Entry for which Timer Expired */
)
#else
PUBLIC S16 rgSCHLmmStartTmr(inst, tmrEvnt, tmrVal, cb)
Inst               inst;             /* scheduler instance ID */
S16                tmrEvnt;            /* Timer Event */
U32                tmrVal;             /* Wait Time */
PTR                cb;                 /* Entry for which Timer Expired */
#endif
{
   CmTmrArg    arg;
/*   Inst        dInst = inst + SCH_INST_START; */

   TRC2(rgSCHLmmStartTmr)

   UNUSED(tmrEvnt);

   /* Initialize the arg structure */
   cmMemset((U8 *)&arg, 0, sizeof(CmTmrArg));

   arg.tqCp = &rgSchCb[inst].tmrTqCp;
   arg.tq = rgSchCb[inst].tmrTq;
   arg.timers = &((RgSchLowSapCb *)cb)->tmrBlk;
   arg.cb = cb;
   arg.tNum = 0;
   arg.max = RGSCH_MAX_TIMER;
   arg.evnt = RGSCH_BNDREQ_TMR;
   arg.wait = tmrVal;      
   cmPlcCbTq(&arg);

   RETVALUE(ROK);
}


/**
 * @brief Timer stop handler. 
 *
 * @details
 *
 *     Function : rgSCHLmmStopTmr
 *     
 *     This function based on the input parameters stops the timer for 
 *     "tmrEvnt". As of now Scheduler instance uses the timer functionality for
 *     BndReq only. Hence there is no conditional code based on "tmrEvnt".
 *     Once the bind happens and this timer is stopped, the timer functionality
 *     is deregistered with SSI. As there is no further use of timer processing.
 *     
 *  @param[in]  S16   tmrEvnt, the Timer Event    
 *  @param[in]  PTR   cb,  Entry for which Timer expired
 *  @return  S16
 *      -# ROK
 *      -# RFAILED
 **/
#ifdef ANSI
PUBLIC S16 rgSCHLmmStopTmr
(
Inst               inst,             /* Scheduler instance */
S16                tmrEvnt,            /* Timer Event */
PTR                cb                  /* Entry for which Timer Expired */
)
#else
PUBLIC S16 rgSCHLmmStopTmr(inst, tmrEvnt, cb)
Inst               inst;             /* Scheduler instance */
S16                tmrEvnt;            /* Timer Event */
PTR                cb;                 /* Entry for which Timer Expired */
#endif
{
   CmTmrArg   arg;
   U8         i;
   S16        ret; 

   TRC2(rgSCHLmmStopTmr)

   ret = RFAILED;

   for(i=0;i<RGSCH_MAX_TIMER;i++)
   {
      /* Search for the Timer Blocks */
      if(((RgSchLowSapCb *)cb)->tmrBlk.tmrEvnt == tmrEvnt)
      {
         /* Initialize the arg structure */
         cmMemset((U8 *)&arg, 0, sizeof(CmTmrArg));

         arg.tqCp = &rgSchCb[inst].tmrTqCp;
         arg.tq = rgSchCb[inst].tmrTq;
         arg.timers = &(((RgSchLowSapCb *)cb)->tmrBlk);
         arg.cb = cb;
         arg.max = RGSCH_MAX_TIMER;
         arg.evnt = tmrEvnt;

         arg.tNum = i;   
         cmRmvCbTq(&arg);
         ret = ROK;
         break;
      }

   }


   RETVALUE(ret);
}


/**
 * @brief Timer Expiry handler. 
 *
 * @details
 *
 *     Function : rgSCHLmmTmrExpiry
 *     
 *     This is a callback function used as an input parameter to cmPrcTmr()
 *     to check expiry of any timer. In this function, we are only concerned
 *     about tmrEvnt=Bind timer.
 *     
 *  @param[in]  PTR   cb,  Entry for which Timer expired
 *  @param[in]  S16   tmrEvnt, the Timer Event    
 *  @return  S16
 *      -# ROK
 **/
#ifdef ANSI
PUBLIC S16 rgSCHLmmTmrExpiry
(
PTR cb,               /* Pointer to timer control block */
S16 tmrEvnt           /* Timer Event */
)
#else
PUBLIC S16 rgSCHLmmTmrExpiry(cb,tmrEvnt)
PTR cb;               /* Pointer to timer control block */
S16 tmrEvnt;          /* Timer Event */
#endif
{
   S16           ret = ROK;
   RgSchLowSapCb *tfuSap = (RgSchLowSapCb *)cb;
#ifdef DEBUGP
   Inst          inst = tfuSap->cell->instIdx;
#endif
   TRC2(rgSCHLmmTmrExpiry)

   
   switch(tmrEvnt)
   {
      case RGSCH_BNDREQ_TMR:
         tfuSap->numBndRetries++;
         if(tfuSap->numBndRetries > RGSCH_MAX_BNDRETRY)
         {
            rgSCHLmmStaInd((U8)(tfuSap->sapCfg.sapPst.srcInst - SCH_INST_START),
                           (U16)LCM_CATEGORY_INTERFACE, (U16)LCM_EVENT_BND_FAIL,
                           (U16)LCM_CAUSE_TMR_EXPIRED, (RgUstaDgn *)NULLP);
         }
         else
         {
            /* Restart the bind timer */
            if (tfuSap->sapCfg.bndTmr.enb == TRUE)
            {
               ret = rgSCHLmmStartTmr((U8)(tfuSap->sapCfg.sapPst.srcInst - SCH_INST_START),
                                  RGSCH_BNDREQ_TMR, 
                                 (U32)tfuSap->sapCfg.bndTmr.val, cb);
            }

            /* Send bind request */
            rgSCHUtlTfuBndReq((U8)(tfuSap->sapCfg.sapPst.srcInst - SCH_INST_START), 
            tfuSap->sapCfg.suId, tfuSap->sapCfg.spId);
         }
         break;
      default:
         RLOG_ARG1(L_ERROR,DBG_INSTID,inst, "rgSCHLmmTmrExpiry(): Invalid"
                 " tmrEvnt=%d", tmrEvnt);
         ret = RFAILED;
         break;
   }
   RETVALUE(ret);
}


/**
 * @brief Layer Manager Control Confirm generation handler
 *        for Bind Confirm reception at TFU interface.
 *        RgLiTfuBndCfm() forwards the confirmation to this 
 *        function. All SAP state related handling is restricted
 *        to LMM modules, hence the cfm forwarding.
 *
 * @details
 *
 *     Function : rgSCHLmmBndCfm 
 *     
 *     This API is used by the LIM module of MAC to forward
 *     the Bind Confirm it receives over the TFU interface.
 *     
 *  @param[in]   Pst *pst, Post Structure
 *  @param[in]   SuId suId, Service user ID
 *  @param[in]   U8 status, Status
 *  @return  S16
 *      -# ROK
 **/
#ifdef ANSI
PUBLIC S16 rgSCHLmmBndCfm
(
Pst *pst,               /* Post Structure */
SuId suId,              /* Service user ID */
U8 status               /* Status */
)
#else
PUBLIC S16 rgSCHLmmBndCfm(pst,suId,status)
Pst *pst;               /* Post Structure */
SuId suId;              /* Service user Id */
U8 status;              /* Status */
#endif
{
   S16       ret = ROK;
   RgMngmt   cntrlCfm;
   Pst       cfmPst;
   Inst      inst = (pst->dstInst - SCH_INST_START); /* scheduler instance */

   TRC2(rgSCHLmmBndCfm)


   /* check the SAP State */
   switch(rgSchCb[inst].tfuSap[suId].sapSta.sapState)
   {
      case LRG_WAIT_BNDCFM:
         break;
      case LRG_BND:
         /* SAP is already bound */
         RETVALUE(ROK);
      default:
         RETVALUE(RFAILED);
   }

   cfmPst = rgSchCb[inst].rgSchInit.lmPst;
   cfmPst.selector = rgSchCb[inst].genCfg.bndCfmResp[suId].response.selector;
   cfmPst.prior = rgSchCb[inst].genCfg.bndCfmResp[suId].response.prior;
   cfmPst.route = rgSchCb[inst].genCfg.bndCfmResp[suId].response.route;
   cfmPst.region = rgSchCb[inst].genCfg.bndCfmResp[suId].response.mem.region;
   cfmPst.pool = rgSchCb[inst].genCfg.bndCfmResp[suId].response.mem.pool;
   
   cmMemset((U8 *)&cntrlCfm, 0, sizeof(RgMngmt));

   switch(status)
   {
      case CM_BND_OK: /* status is OK */
         /* Change SAP state to Bound */
         rgSchCb[inst].tfuSap[suId].sapSta.sapState = LRG_BND;
         if (rgSchCb[inst].tfuSap[suId].sapCfg.bndTmr.enb == TRUE)
         {
            ret = rgSCHLmmStopTmr(inst, RGSCH_BNDREQ_TMR, (PTR)&rgSchCb[inst].tfuSap[suId]);
         }
         /* Send Control Confirm with status as OK to Layer Manager */
         cntrlCfm.cfm.status = LCM_PRIM_OK;
         cntrlCfm.cfm.reason = LCM_REASON_NOT_APPL;
        /* Sending Status Indication to Layer Manager */
         rgSCHLmmStaInd((U8)(rgSchCb[inst].tfuSap->sapCfg.sapPst.srcInst - SCH_INST_START),
               LCM_CATEGORY_INTERFACE, LCM_EVENT_BND_OK,
               LCM_CAUSE_LYR_SPECIFIC, (RgUstaDgn *)NULLP);
         break;

      default:
         /* Change SAP state to UnBound */
         rgSchCb[inst].tfuSap[suId].sapSta.sapState = LRG_UNBND;
         if (rgSchCb[inst].tfuSap[suId].sapCfg.bndTmr.enb == TRUE)
         {
            ret = rgSCHLmmStopTmr(inst, RGSCH_BNDREQ_TMR, (PTR)&rgSchCb[inst].tfuSap[suId]);
         }
         /* Send Control Confirm with status as NOK to Layer Manager */
         cntrlCfm.cfm.status = LCM_PRIM_NOK;
         cntrlCfm.cfm.reason = LCM_REASON_NEG_CFM;
         break;
   }
   rgSchCb[inst].tfuSap[suId].numBndRetries = 0;
   cntrlCfm.hdr.elmId.elmnt = STTFUSAP;
   cntrlCfm.hdr.transId = rgSchCb[inst].genCfg.bndCfmResp[suId].transId;

   ret = RgMiLrgSchCntrlCfm(&cfmPst, &cntrlCfm);

   RETVALUE(ret);
}

/**
 * @brief Layer Manager Unsolicited Status Indication generation. 
 *
 * @details
 *
 *     Function : rgSCHLmmStaInd 
 *     
 *     This API is used by the other modules of MAC to send a unsolicited
 *     status indication to the Layer Manager.
 *     
 *  @param[in]  U16 category, the Alarm category
 *  @param[in]  U16 event, the Alarm event
 *  @param[in]  U16 cause, the cause of the Alarm
 *  @param[in]  RgUstaDgn *dgn, Alarm Diagonostics
 *  @return  S16
 *      -# ROK
 **/
#ifdef ANSI
PUBLIC S16 rgSCHLmmStaInd
(
Inst inst,
U16  category,
U16  event,
U16  cause,
RgUstaDgn *dgn
)
#else
PUBLIC S16 rgSCHLmmStaInd(inst, category, event, cause, dgn) 
Inst inst;
U16 category;
U16 event;
U16 cause;
RgUstaDgn *dgn;
#endif
{
   RgMngmt    usta;

   TRC2(rgSCHLmmStaInd)

   if(rgSchCb[inst].rgSchInit.usta == FALSE)
   {
      RETVALUE(ROK);
   }

   cmMemset((U8 *)&usta, 0, sizeof(RgMngmt));

   SGetDateTime(&usta.t.usta.cmAlarm.dt);
   usta.t.usta.cmAlarm.category = category;
   usta.t.usta.cmAlarm.event = event;
   usta.t.usta.cmAlarm.cause = cause;
   if (dgn != NULLP)
   {
      cmMemcpy((U8 *)&usta.t.usta.dgn, (U8 *)dgn, sizeof(RgUstaDgn));
   }

   rgSchCb[inst].rgSchInit.lmPst.selector = 
                       rgSchCb[inst].genCfg.ustaResp.response.selector;
   rgSchCb[inst].rgSchInit.lmPst.prior = 
                       rgSchCb[inst].genCfg.ustaResp.response.prior;
   rgSchCb[inst].rgSchInit.lmPst.route = 
                       rgSchCb[inst].genCfg.ustaResp.response.route;
   rgSchCb[inst].rgSchInit.lmPst.region = 
                       rgSchCb[inst].genCfg.ustaResp.response.mem.region;
   rgSchCb[inst].rgSchInit.lmPst.pool = 
                       rgSchCb[inst].genCfg.ustaResp.response.mem.pool;
   usta.hdr.transId = rgSchCb[inst].genCfg.ustaResp.transId;

   RETVALUE(RgMiLrgSchStaInd(&rgSchCb[inst].rgSchInit.lmPst, &usta));
}


/**
 * @brief Scheduler instance timer call back function registered with SSI. 
 *
 * @details
 *
 *     Function :  schActvTmr
 *     
 *     This function is invoked by SSI for every timer activation
 *     period expiry. Note that SS_MT_TMR flag needs to be enabled for this
 *     as isntId is needed.As part of SRegTmr call for scheduler instance 
 *     SS_MT_TMR flag needs to be enabled and schActvTmr needs to be given as 
 *     callback function
 *     
 *  @return  S16
 *      -# ROK
 **/
#ifdef ANSI
PUBLIC S16 schActvTmr
(
Ent ent,
Inst inst
)
#else
PUBLIC S16 schActvTmr(ent, inst)
Ent ent;
Inst inst;
#endif
{
   Inst schInst = (inst  - SCH_INST_START);
   TRC2(schActvTmr)

   /* Check if any timer in the scheduler instance has expired */ 
   cmPrcTmr(&rgSchCb[schInst].tmrTqCp,
            rgSchCb[schInst].tmrTq, (PFV) rgSCHLmmTmrExpiry);
 
   RETVALUE(ROK);
 
} /* end of schActvTmr */


/**********************************************************************
 
         End of file
**********************************************************************/
