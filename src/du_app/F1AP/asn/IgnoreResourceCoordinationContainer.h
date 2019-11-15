/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_IgnoreResourceCoordinationContainer_H_
#define	_IgnoreResourceCoordinationContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IgnoreResourceCoordinationContainer {
	IgnoreResourceCoordinationContainer_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_IgnoreResourceCoordinationContainer;

/* IgnoreResourceCoordinationContainer */
typedef long	 IgnoreResourceCoordinationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IgnoreResourceCoordinationContainer;
asn_struct_free_f IgnoreResourceCoordinationContainer_free;
asn_struct_print_f IgnoreResourceCoordinationContainer_print;
asn_constr_check_f IgnoreResourceCoordinationContainer_constraint;
ber_type_decoder_f IgnoreResourceCoordinationContainer_decode_ber;
der_type_encoder_f IgnoreResourceCoordinationContainer_encode_der;
xer_type_decoder_f IgnoreResourceCoordinationContainer_decode_xer;
xer_type_encoder_f IgnoreResourceCoordinationContainer_encode_xer;
oer_type_decoder_f IgnoreResourceCoordinationContainer_decode_oer;
oer_type_encoder_f IgnoreResourceCoordinationContainer_encode_oer;
per_type_decoder_f IgnoreResourceCoordinationContainer_decode_uper;
per_type_encoder_f IgnoreResourceCoordinationContainer_encode_uper;
per_type_decoder_f IgnoreResourceCoordinationContainer_decode_aper;
per_type_encoder_f IgnoreResourceCoordinationContainer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _IgnoreResourceCoordinationContainer_H_ */
#include <asn_internal.h>