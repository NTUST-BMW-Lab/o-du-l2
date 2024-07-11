/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CG_CandidateInfo_r17_H_
#define	_CG_CandidateInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CG-CandidateInfoId-r17.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CG-CandidateInfo-r17 */
typedef struct CG_CandidateInfo_r17 {
	CG_CandidateInfoId_r17_t	 cg_CandidateInfoId_r17;
	OCTET_STRING_t	 candidateCG_Config_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CG_CandidateInfo_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CG_CandidateInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_CG_CandidateInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_CG_CandidateInfo_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CG_CandidateInfo_r17_H_ */
#include <asn_internal.h>