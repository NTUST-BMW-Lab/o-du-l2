/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SIB20_r17_H_
#define	_SIB20_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MCCH-Config-r17.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CFR_ConfigMCCH_MTCH_r17;

/* SIB20-r17 */
typedef struct SIB20_r17 {
	MCCH_Config_r17_t	 mcch_Config_r17;
	struct CFR_ConfigMCCH_MTCH_r17	*cfr_ConfigMCCH_MTCH_r17;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB20_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB20_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB20_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB20_r17_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CFR-ConfigMCCH-MTCH-r17.h"

#endif	/* _SIB20_r17_H_ */
#include <asn_internal.h>