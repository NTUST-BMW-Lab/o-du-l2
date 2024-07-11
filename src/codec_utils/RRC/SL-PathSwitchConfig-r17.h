/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_PathSwitchConfig_r17_H_
#define	_SL_PathSwitchConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-SourceIdentity-r17.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PathSwitchConfig_r17__t420_r17 {
	SL_PathSwitchConfig_r17__t420_r17_ms50	= 0,
	SL_PathSwitchConfig_r17__t420_r17_ms100	= 1,
	SL_PathSwitchConfig_r17__t420_r17_ms150	= 2,
	SL_PathSwitchConfig_r17__t420_r17_ms200	= 3,
	SL_PathSwitchConfig_r17__t420_r17_ms500	= 4,
	SL_PathSwitchConfig_r17__t420_r17_ms1000	= 5,
	SL_PathSwitchConfig_r17__t420_r17_ms2000	= 6,
	SL_PathSwitchConfig_r17__t420_r17_ms10000	= 7
} e_SL_PathSwitchConfig_r17__t420_r17;

/* SL-PathSwitchConfig-r17 */
typedef struct SL_PathSwitchConfig_r17 {
	SL_SourceIdentity_r17_t	 targetRelayUE_Identity_r17;
	long	 t420_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PathSwitchConfig_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t420_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PathSwitchConfig_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PathSwitchConfig_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PathSwitchConfig_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PathSwitchConfig_r17_H_ */
#include <asn_internal.h>