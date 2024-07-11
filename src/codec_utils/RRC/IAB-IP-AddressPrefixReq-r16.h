/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_IAB_IP_AddressPrefixReq_r16_H_
#define	_IAB_IP_AddressPrefixReq_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IAB_IP_AddressPrefixReq_r16__all_Traffic_PrefixReq_r16 {
	IAB_IP_AddressPrefixReq_r16__all_Traffic_PrefixReq_r16_true	= 0
} e_IAB_IP_AddressPrefixReq_r16__all_Traffic_PrefixReq_r16;
typedef enum IAB_IP_AddressPrefixReq_r16__f1_C_Traffic_PrefixReq_r16 {
	IAB_IP_AddressPrefixReq_r16__f1_C_Traffic_PrefixReq_r16_true	= 0
} e_IAB_IP_AddressPrefixReq_r16__f1_C_Traffic_PrefixReq_r16;
typedef enum IAB_IP_AddressPrefixReq_r16__f1_U_Traffic_PrefixReq_r16 {
	IAB_IP_AddressPrefixReq_r16__f1_U_Traffic_PrefixReq_r16_true	= 0
} e_IAB_IP_AddressPrefixReq_r16__f1_U_Traffic_PrefixReq_r16;
typedef enum IAB_IP_AddressPrefixReq_r16__non_F1_Traffic_PrefixReq_r16 {
	IAB_IP_AddressPrefixReq_r16__non_F1_Traffic_PrefixReq_r16_true	= 0
} e_IAB_IP_AddressPrefixReq_r16__non_F1_Traffic_PrefixReq_r16;

/* IAB-IP-AddressPrefixReq-r16 */
typedef struct IAB_IP_AddressPrefixReq_r16 {
	long	*all_Traffic_PrefixReq_r16;	/* OPTIONAL */
	long	*f1_C_Traffic_PrefixReq_r16;	/* OPTIONAL */
	long	*f1_U_Traffic_PrefixReq_r16;	/* OPTIONAL */
	long	*non_F1_Traffic_PrefixReq_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IAB_IP_AddressPrefixReq_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_all_Traffic_PrefixReq_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_f1_C_Traffic_PrefixReq_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_f1_U_Traffic_PrefixReq_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_non_F1_Traffic_PrefixReq_r16_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IAB_IP_AddressPrefixReq_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_IAB_IP_AddressPrefixReq_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_IAB_IP_AddressPrefixReq_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _IAB_IP_AddressPrefixReq_r16_H_ */
#include <asn_internal.h>