/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SFTD_FrequencyList_NR_H_
#define	_SFTD_FrequencyList_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueNR.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SFTD-FrequencyList-NR */
typedef struct SFTD_FrequencyList_NR {
	A_SEQUENCE_OF(ARFCN_ValueNR_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SFTD_FrequencyList_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SFTD_FrequencyList_NR;
extern asn_SET_OF_specifics_t asn_SPC_SFTD_FrequencyList_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_SFTD_FrequencyList_NR_1[1];
extern asn_per_constraints_t asn_PER_type_SFTD_FrequencyList_NR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SFTD_FrequencyList_NR_H_ */
#include <asn_internal.h>