/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_ExtendedPagingCycle_r17_H_
#define	_ExtendedPagingCycle_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExtendedPagingCycle_r17 {
	ExtendedPagingCycle_r17_rf256	= 0,
	ExtendedPagingCycle_r17_rf512	= 1,
	ExtendedPagingCycle_r17_rf1024	= 2,
	ExtendedPagingCycle_r17_spare1	= 3
} e_ExtendedPagingCycle_r17;

/* ExtendedPagingCycle-r17 */
typedef long	 ExtendedPagingCycle_r17_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ExtendedPagingCycle_r17_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ExtendedPagingCycle_r17;
extern const asn_INTEGER_specifics_t asn_SPC_ExtendedPagingCycle_r17_specs_1;
asn_struct_free_f ExtendedPagingCycle_r17_free;
asn_struct_print_f ExtendedPagingCycle_r17_print;
asn_constr_check_f ExtendedPagingCycle_r17_constraint;
xer_type_decoder_f ExtendedPagingCycle_r17_decode_xer;
xer_type_encoder_f ExtendedPagingCycle_r17_encode_xer;
per_type_decoder_f ExtendedPagingCycle_r17_decode_uper;
per_type_encoder_f ExtendedPagingCycle_r17_encode_uper;
per_type_decoder_f ExtendedPagingCycle_r17_decode_aper;
per_type_encoder_f ExtendedPagingCycle_r17_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtendedPagingCycle_r17_H_ */
#include <asn_internal.h>