/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CandidateCellInfo_r17_H_
#define	_CandidateCellInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CandidateCell_r17;

/* CandidateCellInfo-r17 */
typedef struct CandidateCellInfo_r17 {
	ARFCN_ValueNR_t	 ssbFrequency_r17;
	struct CandidateCellInfo_r17__candidateList_r17 {
		A_SEQUENCE_OF(struct CandidateCell_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} candidateList_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CandidateCellInfo_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CandidateCellInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_CandidateCellInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_CandidateCellInfo_r17_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CandidateCell-r17.h"

#endif	/* _CandidateCellInfo_r17_H_ */
#include <asn_internal.h>