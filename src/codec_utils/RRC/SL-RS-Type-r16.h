/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_RS_Type_r16_H_
#define	_SL_RS_Type_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_RS_Type_r16 {
	SL_RS_Type_r16_dmrs	= 0,
	SL_RS_Type_r16_spare3	= 1,
	SL_RS_Type_r16_spare2	= 2,
	SL_RS_Type_r16_spare1	= 3
} e_SL_RS_Type_r16;

/* SL-RS-Type-r16 */
typedef long	 SL_RS_Type_r16_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SL_RS_Type_r16_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SL_RS_Type_r16;
extern const asn_INTEGER_specifics_t asn_SPC_SL_RS_Type_r16_specs_1;
asn_struct_free_f SL_RS_Type_r16_free;
asn_struct_print_f SL_RS_Type_r16_print;
asn_constr_check_f SL_RS_Type_r16_constraint;
xer_type_decoder_f SL_RS_Type_r16_decode_xer;
xer_type_encoder_f SL_RS_Type_r16_encode_xer;
per_type_decoder_f SL_RS_Type_r16_decode_uper;
per_type_encoder_f SL_RS_Type_r16_encode_uper;
per_type_decoder_f SL_RS_Type_r16_decode_aper;
per_type_encoder_f SL_RS_Type_r16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_RS_Type_r16_H_ */
#include <asn_internal.h>