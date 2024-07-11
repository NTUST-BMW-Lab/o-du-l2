/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RSRP_ChangeThreshold_r17_H_
#define	_RSRP_ChangeThreshold_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RSRP_ChangeThreshold_r17 {
	RSRP_ChangeThreshold_r17_dB4	= 0,
	RSRP_ChangeThreshold_r17_dB6	= 1,
	RSRP_ChangeThreshold_r17_dB8	= 2,
	RSRP_ChangeThreshold_r17_dB10	= 3,
	RSRP_ChangeThreshold_r17_dB14	= 4,
	RSRP_ChangeThreshold_r17_dB18	= 5,
	RSRP_ChangeThreshold_r17_dB22	= 6,
	RSRP_ChangeThreshold_r17_dB26	= 7,
	RSRP_ChangeThreshold_r17_dB30	= 8,
	RSRP_ChangeThreshold_r17_dB34	= 9,
	RSRP_ChangeThreshold_r17_spare6	= 10,
	RSRP_ChangeThreshold_r17_spare5	= 11,
	RSRP_ChangeThreshold_r17_spare4	= 12,
	RSRP_ChangeThreshold_r17_spare3	= 13,
	RSRP_ChangeThreshold_r17_spare2	= 14,
	RSRP_ChangeThreshold_r17_spare1	= 15
} e_RSRP_ChangeThreshold_r17;

/* RSRP-ChangeThreshold-r17 */
typedef long	 RSRP_ChangeThreshold_r17_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RSRP_ChangeThreshold_r17_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RSRP_ChangeThreshold_r17;
extern const asn_INTEGER_specifics_t asn_SPC_RSRP_ChangeThreshold_r17_specs_1;
asn_struct_free_f RSRP_ChangeThreshold_r17_free;
asn_struct_print_f RSRP_ChangeThreshold_r17_print;
asn_constr_check_f RSRP_ChangeThreshold_r17_constraint;
xer_type_decoder_f RSRP_ChangeThreshold_r17_decode_xer;
xer_type_encoder_f RSRP_ChangeThreshold_r17_encode_xer;
per_type_decoder_f RSRP_ChangeThreshold_r17_decode_uper;
per_type_encoder_f RSRP_ChangeThreshold_r17_encode_uper;
per_type_decoder_f RSRP_ChangeThreshold_r17_decode_aper;
per_type_encoder_f RSRP_ChangeThreshold_r17_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RSRP_ChangeThreshold_r17_H_ */
#include <asn_internal.h>