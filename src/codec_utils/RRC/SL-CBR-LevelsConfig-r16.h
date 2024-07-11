/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_CBR_LevelsConfig_r16_H_
#define	_SL_CBR_LevelsConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CBR-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-CBR-LevelsConfig-r16 */
typedef struct SL_CBR_LevelsConfig_r16 {
	A_SEQUENCE_OF(SL_CBR_r16_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CBR_LevelsConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CBR_LevelsConfig_r16;
extern asn_SET_OF_specifics_t asn_SPC_SL_CBR_LevelsConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CBR_LevelsConfig_r16_1[1];
extern asn_per_constraints_t asn_PER_type_SL_CBR_LevelsConfig_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CBR_LevelsConfig_r16_H_ */
#include <asn_internal.h>