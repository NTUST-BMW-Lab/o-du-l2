/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SSB_ToMeasure_H_
#define	_SSB_ToMeasure_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SSB_ToMeasure_PR {
	SSB_ToMeasure_PR_NOTHING,	/* No components present */
	SSB_ToMeasure_PR_shortBitmap,
	SSB_ToMeasure_PR_mediumBitmap,
	SSB_ToMeasure_PR_longBitmap
} SSB_ToMeasure_PR;

/* SSB-ToMeasure */
typedef struct SSB_ToMeasure {
	SSB_ToMeasure_PR present;
	union SSB_ToMeasure_u {
		BIT_STRING_t	 shortBitmap;
		BIT_STRING_t	 mediumBitmap;
		BIT_STRING_t	 longBitmap;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSB_ToMeasure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSB_ToMeasure;
extern asn_CHOICE_specifics_t asn_SPC_SSB_ToMeasure_specs_1;
extern asn_TYPE_member_t asn_MBR_SSB_ToMeasure_1[3];
extern asn_per_constraints_t asn_PER_type_SSB_ToMeasure_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SSB_ToMeasure_H_ */
#include <asn_internal.h>
