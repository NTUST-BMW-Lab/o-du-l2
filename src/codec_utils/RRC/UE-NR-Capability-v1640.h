/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_UE_NR_Capability_v1640_H_
#define	_UE_NR_Capability_v1640_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_NR_Capability_v1640__redirectAtResumeByNAS_r16 {
	UE_NR_Capability_v1640__redirectAtResumeByNAS_r16_supported	= 0
} e_UE_NR_Capability_v1640__redirectAtResumeByNAS_r16;

/* Forward declarations */
struct Phy_ParametersSharedSpectrumChAccess_r16;
struct UE_NR_Capability_v1650;

/* UE-NR-Capability-v1640 */
typedef struct UE_NR_Capability_v1640 {
	long	*redirectAtResumeByNAS_r16;	/* OPTIONAL */
	struct Phy_ParametersSharedSpectrumChAccess_r16	*phy_ParametersSharedSpectrumChAccess_r16;	/* OPTIONAL */
	struct UE_NR_Capability_v1650	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_Capability_v1640_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_redirectAtResumeByNAS_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1640;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1640_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1640_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Phy-ParametersSharedSpectrumChAccess-r16.h"
#include "UE-NR-Capability-v1650.h"

#endif	/* _UE_NR_Capability_v1640_H_ */
#include <asn_internal.h>