/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_FailureReportSCG_H_
#define	_FailureReportSCG_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include "PhysCellId.h"
#include "ARFCN-ValueNR.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureReportSCG__failureType {
	FailureReportSCG__failureType_t310_Expiry	= 0,
	FailureReportSCG__failureType_randomAccessProblem	= 1,
	FailureReportSCG__failureType_rlc_MaxNumRetx	= 2,
	FailureReportSCG__failureType_synchReconfigFailureSCG	= 3,
	FailureReportSCG__failureType_scg_ReconfigFailure	= 4,
	FailureReportSCG__failureType_srb3_IntegrityFailure	= 5,
	FailureReportSCG__failureType_other_r16	= 6,
	FailureReportSCG__failureType_spare1	= 7
} e_FailureReportSCG__failureType;
typedef enum FailureReportSCG__ext1__failureType_v1610 {
	FailureReportSCG__ext1__failureType_v1610_scg_lbtFailure_r16	= 0,
	FailureReportSCG__ext1__failureType_v1610_beamFailureRecoveryFailure_r16	= 1,
	FailureReportSCG__ext1__failureType_v1610_t312_Expiry_r16	= 2,
	FailureReportSCG__ext1__failureType_v1610_bh_RLF_r16	= 3,
	FailureReportSCG__ext1__failureType_v1610_beamFailure_r17	= 4,
	FailureReportSCG__ext1__failureType_v1610_spare3	= 5,
	FailureReportSCG__ext1__failureType_v1610_spare2	= 6,
	FailureReportSCG__ext1__failureType_v1610_spare1	= 7
} e_FailureReportSCG__ext1__failureType_v1610;

/* Forward declarations */
struct MeasResultFreqList;
struct LocationInfo_r16;
struct PerRAInfoList_r16;

/* FailureReportSCG */
typedef struct FailureReportSCG {
	long	 failureType;
	struct MeasResultFreqList	*measResultFreqList;	/* OPTIONAL */
	OCTET_STRING_t	*measResultSCG_Failure;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct FailureReportSCG__ext1 {
		struct LocationInfo_r16	*locationInfo_r16;	/* OPTIONAL */
		long	*failureType_v1610;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct FailureReportSCG__ext2 {
		struct FailureReportSCG__ext2__previousPSCellId_r17 {
			PhysCellId_t	 physCellId_r17;
			ARFCN_ValueNR_t	 carrierFreq_r17;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *previousPSCellId_r17;
		struct FailureReportSCG__ext2__failedPSCellId_r17 {
			PhysCellId_t	 physCellId_r17;
			ARFCN_ValueNR_t	 carrierFreq_r17;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPSCellId_r17;
		long	*timeSCGFailure_r17;	/* OPTIONAL */
		struct PerRAInfoList_r16	*perRAInfoList_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureReportSCG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_v1610_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailureReportSCG;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureReportSCG_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureReportSCG_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultFreqList.h"
#include "LocationInfo-r16.h"
#include "PerRAInfoList-r16.h"

#endif	/* _FailureReportSCG_H_ */
#include <asn_internal.h>