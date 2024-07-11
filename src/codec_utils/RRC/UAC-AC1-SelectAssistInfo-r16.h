/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UAC_AC1_SelectAssistInfo_r16_H_
#define	_UAC_AC1_SelectAssistInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UAC_AC1_SelectAssistInfo_r16 {
	UAC_AC1_SelectAssistInfo_r16_a	= 0,
	UAC_AC1_SelectAssistInfo_r16_b	= 1,
	UAC_AC1_SelectAssistInfo_r16_c	= 2,
	UAC_AC1_SelectAssistInfo_r16_notConfigured	= 3
} e_UAC_AC1_SelectAssistInfo_r16;

/* UAC-AC1-SelectAssistInfo-r16 */
typedef long	 UAC_AC1_SelectAssistInfo_r16_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UAC_AC1_SelectAssistInfo_r16_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UAC_AC1_SelectAssistInfo_r16;
extern const asn_INTEGER_specifics_t asn_SPC_UAC_AC1_SelectAssistInfo_r16_specs_1;
asn_struct_free_f UAC_AC1_SelectAssistInfo_r16_free;
asn_struct_print_f UAC_AC1_SelectAssistInfo_r16_print;
asn_constr_check_f UAC_AC1_SelectAssistInfo_r16_constraint;
xer_type_decoder_f UAC_AC1_SelectAssistInfo_r16_decode_xer;
xer_type_encoder_f UAC_AC1_SelectAssistInfo_r16_encode_xer;
per_type_decoder_f UAC_AC1_SelectAssistInfo_r16_decode_uper;
per_type_encoder_f UAC_AC1_SelectAssistInfo_r16_encode_uper;
per_type_decoder_f UAC_AC1_SelectAssistInfo_r16_decode_aper;
per_type_encoder_f UAC_AC1_SelectAssistInfo_r16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_AC1_SelectAssistInfo_r16_H_ */
#include <asn_internal.h>