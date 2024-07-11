/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RLC_Config_v1700_H_
#define	_RLC_Config_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-AM-RLC-v1700.h"
#include "DL-UM-RLC-v1700.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLC-Config-v1700 */
typedef struct RLC_Config_v1700 {
	DL_AM_RLC_v1700_t	 dl_AM_RLC_v1700;
	DL_UM_RLC_v1700_t	 dl_UM_RLC_v1700;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_Config_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_v1700_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1700_H_ */
#include <asn_internal.h>