/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CRS_InterfMitigation_r17_H_
#define	_CRS_InterfMitigation_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CRS_InterfMitigation_r17__crs_IM_DSS_15kHzSCS_r17 {
	CRS_InterfMitigation_r17__crs_IM_DSS_15kHzSCS_r17_supported	= 0
} e_CRS_InterfMitigation_r17__crs_IM_DSS_15kHzSCS_r17;
typedef enum CRS_InterfMitigation_r17__crs_IM_nonDSS_15kHzSCS_r17 {
	CRS_InterfMitigation_r17__crs_IM_nonDSS_15kHzSCS_r17_supported	= 0
} e_CRS_InterfMitigation_r17__crs_IM_nonDSS_15kHzSCS_r17;
typedef enum CRS_InterfMitigation_r17__crs_IM_nonDSS_NWA_15kHzSCS_r17 {
	CRS_InterfMitigation_r17__crs_IM_nonDSS_NWA_15kHzSCS_r17_supported	= 0
} e_CRS_InterfMitigation_r17__crs_IM_nonDSS_NWA_15kHzSCS_r17;
typedef enum CRS_InterfMitigation_r17__crs_IM_nonDSS_30kHzSCS_r17 {
	CRS_InterfMitigation_r17__crs_IM_nonDSS_30kHzSCS_r17_supported	= 0
} e_CRS_InterfMitigation_r17__crs_IM_nonDSS_30kHzSCS_r17;
typedef enum CRS_InterfMitigation_r17__crs_IM_nonDSS_NWA_30kHzSCS_r17 {
	CRS_InterfMitigation_r17__crs_IM_nonDSS_NWA_30kHzSCS_r17_supported	= 0
} e_CRS_InterfMitigation_r17__crs_IM_nonDSS_NWA_30kHzSCS_r17;

/* CRS-InterfMitigation-r17 */
typedef struct CRS_InterfMitigation_r17 {
	long	*crs_IM_DSS_15kHzSCS_r17;	/* OPTIONAL */
	long	*crs_IM_nonDSS_15kHzSCS_r17;	/* OPTIONAL */
	long	*crs_IM_nonDSS_NWA_15kHzSCS_r17;	/* OPTIONAL */
	long	*crs_IM_nonDSS_30kHzSCS_r17;	/* OPTIONAL */
	long	*crs_IM_nonDSS_NWA_30kHzSCS_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRS_InterfMitigation_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IM_DSS_15kHzSCS_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IM_nonDSS_15kHzSCS_r17_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IM_nonDSS_NWA_15kHzSCS_r17_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IM_nonDSS_30kHzSCS_r17_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IM_nonDSS_NWA_30kHzSCS_r17_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CRS_InterfMitigation_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_CRS_InterfMitigation_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_CRS_InterfMitigation_r17_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _CRS_InterfMitigation_r17_H_ */
#include <asn_internal.h>