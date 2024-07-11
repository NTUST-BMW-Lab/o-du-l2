/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SIB1_v1700_IEs_H_
#define	_SIB1_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include "UAC-BarringInfoSetList-v1700.h"
#include <constr_SEQUENCE.h>
#include "FeaturePriority-r17.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB1_v1700_IEs__hsdn_Cell_r17 {
	SIB1_v1700_IEs__hsdn_Cell_r17_true	= 0
} e_SIB1_v1700_IEs__hsdn_Cell_r17;
typedef enum SIB1_v1700_IEs__eDRX_AllowedIdle_r17 {
	SIB1_v1700_IEs__eDRX_AllowedIdle_r17_true	= 0
} e_SIB1_v1700_IEs__eDRX_AllowedIdle_r17;
typedef enum SIB1_v1700_IEs__eDRX_AllowedInactive_r17 {
	SIB1_v1700_IEs__eDRX_AllowedInactive_r17_true	= 0
} e_SIB1_v1700_IEs__eDRX_AllowedInactive_r17;
typedef enum SIB1_v1700_IEs__intraFreqReselectionRedCap_r17 {
	SIB1_v1700_IEs__intraFreqReselectionRedCap_r17_allowed	= 0,
	SIB1_v1700_IEs__intraFreqReselectionRedCap_r17_notAllowed	= 1
} e_SIB1_v1700_IEs__intraFreqReselectionRedCap_r17;
typedef enum SIB1_v1700_IEs__cellBarredNTN_r17 {
	SIB1_v1700_IEs__cellBarredNTN_r17_barred	= 0,
	SIB1_v1700_IEs__cellBarredNTN_r17_notBarred	= 1
} e_SIB1_v1700_IEs__cellBarredNTN_r17;

/* Forward declarations */
struct SDT_ConfigCommonSIB_r17;
struct RedCap_ConfigCommonSIB_r17;
struct SI_SchedulingInfo_v1700;

/* SIB1-v1700-IEs */
typedef struct SIB1_v1700_IEs {
	long	*hsdn_Cell_r17;	/* OPTIONAL */
	struct SIB1_v1700_IEs__uac_BarringInfo_v1700 {
		UAC_BarringInfoSetList_v1700_t	 uac_BarringInfoSetList_v1700;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uac_BarringInfo_v1700;
	struct SDT_ConfigCommonSIB_r17	*sdt_ConfigCommon_r17;	/* OPTIONAL */
	struct RedCap_ConfigCommonSIB_r17	*redCap_ConfigCommon_r17;	/* OPTIONAL */
	struct SIB1_v1700_IEs__featurePriorities_r17 {
		FeaturePriority_r17_t	*redCapPriority_r17;	/* OPTIONAL */
		FeaturePriority_r17_t	*slicingPriority_r17;	/* OPTIONAL */
		FeaturePriority_r17_t	*msg3_Repetitions_Priority_r17;	/* OPTIONAL */
		FeaturePriority_r17_t	*sdt_Priority_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featurePriorities_r17;
	struct SI_SchedulingInfo_v1700	*si_SchedulingInfo_v1700;	/* OPTIONAL */
	BIT_STRING_t	*hyperSFN_r17;	/* OPTIONAL */
	long	*eDRX_AllowedIdle_r17;	/* OPTIONAL */
	long	*eDRX_AllowedInactive_r17;	/* OPTIONAL */
	long	*intraFreqReselectionRedCap_r17;	/* OPTIONAL */
	long	*cellBarredNTN_r17;	/* OPTIONAL */
	struct SIB1_v1700_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB1_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hsdn_Cell_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eDRX_AllowedIdle_r17_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eDRX_AllowedInactive_r17_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqReselectionRedCap_r17_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cellBarredNTN_r17_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SIB1_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB1_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB1_v1700_IEs_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SDT-ConfigCommonSIB-r17.h"
#include "RedCap-ConfigCommonSIB-r17.h"
#include "SI-SchedulingInfo-v1700.h"

#endif	/* _SIB1_v1700_IEs_H_ */
#include <asn_internal.h>