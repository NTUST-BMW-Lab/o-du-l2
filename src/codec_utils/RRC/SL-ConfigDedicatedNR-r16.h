/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_ConfigDedicatedNR_r16_H_
#define	_SL_ConfigDedicatedNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "SLRB-Uu-ConfigIndex-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "SL-DestinationIndex-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_ConfigDedicatedNR_r16__t400_r16 {
	SL_ConfigDedicatedNR_r16__t400_r16_ms100	= 0,
	SL_ConfigDedicatedNR_r16__t400_r16_ms200	= 1,
	SL_ConfigDedicatedNR_r16__t400_r16_ms300	= 2,
	SL_ConfigDedicatedNR_r16__t400_r16_ms400	= 3,
	SL_ConfigDedicatedNR_r16__t400_r16_ms600	= 4,
	SL_ConfigDedicatedNR_r16__t400_r16_ms1000	= 5,
	SL_ConfigDedicatedNR_r16__t400_r16_ms1500	= 6,
	SL_ConfigDedicatedNR_r16__t400_r16_ms2000	= 7
} e_SL_ConfigDedicatedNR_r16__t400_r16;

/* Forward declarations */
struct SL_PHY_MAC_RLC_Config_r16;
struct SL_RadioBearerConfig_r16;
struct SL_MeasConfigInfo_r16;
struct SetupRelease_SL_PHY_MAC_RLC_Config_v1700;
struct SetupRelease_SL_DiscConfig_r17;

/* SL-ConfigDedicatedNR-r16 */
typedef struct SL_ConfigDedicatedNR_r16 {
	struct SL_PHY_MAC_RLC_Config_r16	*sl_PHY_MAC_RLC_Config_r16;	/* OPTIONAL */
	struct SL_ConfigDedicatedNR_r16__sl_RadioBearerToReleaseList_r16 {
		A_SEQUENCE_OF(SLRB_Uu_ConfigIndex_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_RadioBearerToReleaseList_r16;
	struct SL_ConfigDedicatedNR_r16__sl_RadioBearerToAddModList_r16 {
		A_SEQUENCE_OF(struct SL_RadioBearerConfig_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_RadioBearerToAddModList_r16;
	struct SL_ConfigDedicatedNR_r16__sl_MeasConfigInfoToReleaseList_r16 {
		A_SEQUENCE_OF(SL_DestinationIndex_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_MeasConfigInfoToReleaseList_r16;
	struct SL_ConfigDedicatedNR_r16__sl_MeasConfigInfoToAddModList_r16 {
		A_SEQUENCE_OF(struct SL_MeasConfigInfo_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_MeasConfigInfoToAddModList_r16;
	long	*t400_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_ConfigDedicatedNR_r16__ext1 {
		struct SetupRelease_SL_PHY_MAC_RLC_Config_v1700	*sl_PHY_MAC_RLC_Config_v1700;	/* OPTIONAL */
		struct SetupRelease_SL_DiscConfig_r17	*sl_DiscConfig_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_ConfigDedicatedNR_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t400_r16_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_ConfigDedicatedNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_ConfigDedicatedNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_ConfigDedicatedNR_r16_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-PHY-MAC-RLC-Config-r16.h"
#include "SL-RadioBearerConfig-r16.h"
#include "SL-MeasConfigInfo-r16.h"
#include "SetupRelease.h"

#endif	/* _SL_ConfigDedicatedNR_r16_H_ */
#include <asn_internal.h>