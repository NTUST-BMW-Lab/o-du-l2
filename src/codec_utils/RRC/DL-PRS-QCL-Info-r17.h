/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_DL_PRS_QCL_Info_r17_H_
#define	_DL_PRS_QCL_Info_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include "NR-DL-PRS-ResourceID-r17.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_PRS_QCL_Info_r17_PR {
	DL_PRS_QCL_Info_r17_PR_NOTHING,	/* No components present */
	DL_PRS_QCL_Info_r17_PR_ssb_r17,
	DL_PRS_QCL_Info_r17_PR_dl_PRS_r17
	/* Extensions may appear below */
	
} DL_PRS_QCL_Info_r17_PR;
typedef enum DL_PRS_QCL_Info_r17__ssb_r17__rs_Type_r17 {
	DL_PRS_QCL_Info_r17__ssb_r17__rs_Type_r17_typeC	= 0,
	DL_PRS_QCL_Info_r17__ssb_r17__rs_Type_r17_typeD	= 1,
	DL_PRS_QCL_Info_r17__ssb_r17__rs_Type_r17_typeC_plus_typeD	= 2
} e_DL_PRS_QCL_Info_r17__ssb_r17__rs_Type_r17;

/* DL-PRS-QCL-Info-r17 */
typedef struct DL_PRS_QCL_Info_r17 {
	DL_PRS_QCL_Info_r17_PR present;
	union DL_PRS_QCL_Info_r17_u {
		struct DL_PRS_QCL_Info_r17__ssb_r17 {
			long	 ssb_Index_r17;
			long	 rs_Type_r17;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ssb_r17;
		struct DL_PRS_QCL_Info_r17__dl_PRS_r17 {
			NR_DL_PRS_ResourceID_r17_t	 qcl_DL_PRS_ResourceID_r17;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dl_PRS_r17;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PRS_QCL_Info_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rs_Type_r17_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_PRS_QCL_Info_r17;
extern asn_CHOICE_specifics_t asn_SPC_DL_PRS_QCL_Info_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_PRS_QCL_Info_r17_1[2];
extern asn_per_constraints_t asn_PER_type_DL_PRS_QCL_Info_r17_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PRS_QCL_Info_r17_H_ */
#include <asn_internal.h>