/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MAC_Parameters_v1700_H_
#define	_MAC_Parameters_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAC_ParametersFR2_2_r17;

/* MAC-Parameters-v1700 */
typedef struct MAC_Parameters_v1700 {
	struct MAC_ParametersFR2_2_r17	*mac_ParametersFR2_2_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_Parameters_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_Parameters_v1700_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAC-ParametersFR2-2-r17.h"

#endif	/* _MAC_Parameters_v1700_H_ */
#include <asn_internal.h>