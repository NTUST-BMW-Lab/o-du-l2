/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CrossCarrierSchedulingSCell_SpCell_r17_H_
#define	_CrossCarrierSchedulingSCell_SpCell_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_15kHz_r17 {
	CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_15kHz_r17_supported	= 0
} e_CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_15kHz_r17;
typedef enum CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_30kHz_r17 {
	CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_30kHz_r17_supported	= 0
} e_CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_30kHz_r17;
typedef enum CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_60kHz_r17 {
	CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_60kHz_r17_supported	= 0
} e_CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17__scs15kHz_60kHz_r17;
typedef enum CrossCarrierSchedulingSCell_SpCell_r17__pdcch_MonitoringOccasion_r17 {
	CrossCarrierSchedulingSCell_SpCell_r17__pdcch_MonitoringOccasion_r17_val1	= 0,
	CrossCarrierSchedulingSCell_SpCell_r17__pdcch_MonitoringOccasion_r17_val2	= 1
} e_CrossCarrierSchedulingSCell_SpCell_r17__pdcch_MonitoringOccasion_r17;

/* CrossCarrierSchedulingSCell-SpCell-r17 */
typedef struct CrossCarrierSchedulingSCell_SpCell_r17 {
	struct CrossCarrierSchedulingSCell_SpCell_r17__supportedSCS_Combinations_r17 {
		long	*scs15kHz_15kHz_r17;	/* OPTIONAL */
		long	*scs15kHz_30kHz_r17;	/* OPTIONAL */
		long	*scs15kHz_60kHz_r17;	/* OPTIONAL */
		BIT_STRING_t	*scs30kHz_30kHz_r17;	/* OPTIONAL */
		BIT_STRING_t	*scs30kHz_60kHz_r17;	/* OPTIONAL */
		BIT_STRING_t	*scs60kHz_60kHz_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedSCS_Combinations_r17;
	long	 pdcch_MonitoringOccasion_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CrossCarrierSchedulingSCell_SpCell_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_scs15kHz_15kHz_r17_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs15kHz_30kHz_r17_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs15kHz_60kHz_r17_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcch_MonitoringOccasion_r17_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CrossCarrierSchedulingSCell_SpCell_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_CrossCarrierSchedulingSCell_SpCell_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_CrossCarrierSchedulingSCell_SpCell_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CrossCarrierSchedulingSCell_SpCell_r17_H_ */
#include <asn_internal.h>