/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_IntraBandCC_CombinationReqList_r17_H_
#define	_IntraBandCC_CombinationReqList_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraBandCC_Combination_r17;

/* IntraBandCC-CombinationReqList-r17 */
typedef struct IntraBandCC_CombinationReqList_r17 {
	struct IntraBandCC_CombinationReqList_r17__servCellIndexList_r17 {
		A_SEQUENCE_OF(ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} servCellIndexList_r17;
	struct IntraBandCC_CombinationReqList_r17__cc_CombinationList_r17 {
		A_SEQUENCE_OF(struct IntraBandCC_Combination_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cc_CombinationList_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraBandCC_CombinationReqList_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraBandCC_CombinationReqList_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraBandCC_CombinationReqList_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraBandCC_CombinationReqList_r17_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraBandCC-Combination-r17.h"

#endif	/* _IntraBandCC_CombinationReqList_r17_H_ */
#include <asn_internal.h>