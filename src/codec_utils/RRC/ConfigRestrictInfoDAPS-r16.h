/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_ConfigRestrictInfoDAPS_r16_H_
#define	_ConfigRestrictInfoDAPS_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "P-Max.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConfigRestrictInfoDAPS_r16__powerCoordination_r16__uplinkPowerSharingDAPS_Mode_r16 {
	ConfigRestrictInfoDAPS_r16__powerCoordination_r16__uplinkPowerSharingDAPS_Mode_r16_semi_static_mode1	= 0,
	ConfigRestrictInfoDAPS_r16__powerCoordination_r16__uplinkPowerSharingDAPS_Mode_r16_semi_static_mode2	= 1,
	ConfigRestrictInfoDAPS_r16__powerCoordination_r16__uplinkPowerSharingDAPS_Mode_r16_dynamic	= 2
} e_ConfigRestrictInfoDAPS_r16__powerCoordination_r16__uplinkPowerSharingDAPS_Mode_r16;

/* ConfigRestrictInfoDAPS-r16 */
typedef struct ConfigRestrictInfoDAPS_r16 {
	struct ConfigRestrictInfoDAPS_r16__powerCoordination_r16 {
		P_Max_t	 p_DAPS_Source_r16;
		P_Max_t	 p_DAPS_Target_r16;
		long	 uplinkPowerSharingDAPS_Mode_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *powerCoordination_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfigRestrictInfoDAPS_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkPowerSharingDAPS_Mode_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ConfigRestrictInfoDAPS_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_ConfigRestrictInfoDAPS_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ConfigRestrictInfoDAPS_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ConfigRestrictInfoDAPS_r16_H_ */
#include <asn_internal.h>