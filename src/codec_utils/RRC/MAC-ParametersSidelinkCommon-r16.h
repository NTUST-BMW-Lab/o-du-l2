/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MAC_ParametersSidelinkCommon_r16_H_
#define	_MAC_ParametersSidelinkCommon_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_ParametersSidelinkCommon_r16__lcp_RestrictionSidelink_r16 {
	MAC_ParametersSidelinkCommon_r16__lcp_RestrictionSidelink_r16_supported	= 0
} e_MAC_ParametersSidelinkCommon_r16__lcp_RestrictionSidelink_r16;
typedef enum MAC_ParametersSidelinkCommon_r16__multipleConfiguredGrantsSidelink_r16 {
	MAC_ParametersSidelinkCommon_r16__multipleConfiguredGrantsSidelink_r16_supported	= 0
} e_MAC_ParametersSidelinkCommon_r16__multipleConfiguredGrantsSidelink_r16;
typedef enum MAC_ParametersSidelinkCommon_r16__ext1__drx_OnSidelink_r17 {
	MAC_ParametersSidelinkCommon_r16__ext1__drx_OnSidelink_r17_supported	= 0
} e_MAC_ParametersSidelinkCommon_r16__ext1__drx_OnSidelink_r17;

/* MAC-ParametersSidelinkCommon-r16 */
typedef struct MAC_ParametersSidelinkCommon_r16 {
	long	*lcp_RestrictionSidelink_r16;	/* OPTIONAL */
	long	*multipleConfiguredGrantsSidelink_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MAC_ParametersSidelinkCommon_r16__ext1 {
		long	*drx_OnSidelink_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ParametersSidelinkCommon_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_lcp_RestrictionSidelink_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multipleConfiguredGrantsSidelink_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_OnSidelink_r17_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ParametersSidelinkCommon_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersSidelinkCommon_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_ParametersSidelinkCommon_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_ParametersSidelinkCommon_r16_H_ */
#include <asn_internal.h>