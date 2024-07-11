/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BeamMeasConfigIdle_NR_r16_H_
#define	_BeamMeasConfigIdle_NR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BeamMeasConfigIdle_NR_r16__reportQuantityRS_Indexes_r16 {
	BeamMeasConfigIdle_NR_r16__reportQuantityRS_Indexes_r16_rsrp	= 0,
	BeamMeasConfigIdle_NR_r16__reportQuantityRS_Indexes_r16_rsrq	= 1,
	BeamMeasConfigIdle_NR_r16__reportQuantityRS_Indexes_r16_both	= 2
} e_BeamMeasConfigIdle_NR_r16__reportQuantityRS_Indexes_r16;

/* BeamMeasConfigIdle-NR-r16 */
typedef struct BeamMeasConfigIdle_NR_r16 {
	long	 reportQuantityRS_Indexes_r16;
	long	 maxNrofRS_IndexesToReport_r16;
	BOOLEAN_t	 includeBeamMeasurements_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BeamMeasConfigIdle_NR_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantityRS_Indexes_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BeamMeasConfigIdle_NR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_BeamMeasConfigIdle_NR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_BeamMeasConfigIdle_NR_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BeamMeasConfigIdle_NR_r16_H_ */
#include <asn_internal.h>