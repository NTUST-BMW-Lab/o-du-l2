/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MUSIM_GapAssistanceConfig_r17_H_
#define	_MUSIM_GapAssistanceConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17 {
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s0	= 0,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s0dot1	= 1,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s0dot2	= 2,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s0dot3	= 3,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s0dot4	= 4,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s0dot5	= 5,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s1	= 6,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s2	= 7,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s3	= 8,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s4	= 9,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s5	= 10,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s6	= 11,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s7	= 12,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s8	= 13,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s9	= 14,
	MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17_s10	= 15
} e_MUSIM_GapAssistanceConfig_r17__musim_GapProhibitTimer_r17;

/* MUSIM-GapAssistanceConfig-r17 */
typedef struct MUSIM_GapAssistanceConfig_r17 {
	long	 musim_GapProhibitTimer_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MUSIM_GapAssistanceConfig_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_musim_GapProhibitTimer_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MUSIM_GapAssistanceConfig_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_MUSIM_GapAssistanceConfig_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_MUSIM_GapAssistanceConfig_r17_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MUSIM_GapAssistanceConfig_r17_H_ */
#include <asn_internal.h>