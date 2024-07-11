/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_PosSchedulingInfo_r16_H_
#define	_PosSchedulingInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "PosSIB-MappingInfo-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosSchedulingInfo_r16__offsetToSI_Used_r16 {
	PosSchedulingInfo_r16__offsetToSI_Used_r16_true	= 0
} e_PosSchedulingInfo_r16__offsetToSI_Used_r16;
typedef enum PosSchedulingInfo_r16__posSI_Periodicity_r16 {
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf8	= 0,
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf16	= 1,
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf32	= 2,
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf64	= 3,
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf128	= 4,
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf256	= 5,
	PosSchedulingInfo_r16__posSI_Periodicity_r16_rf512	= 6
} e_PosSchedulingInfo_r16__posSI_Periodicity_r16;
typedef enum PosSchedulingInfo_r16__posSI_BroadcastStatus_r16 {
	PosSchedulingInfo_r16__posSI_BroadcastStatus_r16_broadcasting	= 0,
	PosSchedulingInfo_r16__posSI_BroadcastStatus_r16_notBroadcasting	= 1
} e_PosSchedulingInfo_r16__posSI_BroadcastStatus_r16;

/* PosSchedulingInfo-r16 */
typedef struct PosSchedulingInfo_r16 {
	long	*offsetToSI_Used_r16;	/* OPTIONAL */
	long	 posSI_Periodicity_r16;
	long	 posSI_BroadcastStatus_r16;
	PosSIB_MappingInfo_r16_t	 posSIB_MappingInfo_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSchedulingInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_offsetToSI_Used_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_posSI_Periodicity_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_posSI_BroadcastStatus_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PosSchedulingInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSchedulingInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSchedulingInfo_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PosSchedulingInfo_r16_H_ */
#include <asn_internal.h>