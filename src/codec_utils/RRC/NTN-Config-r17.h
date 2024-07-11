/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_NTN_Config_r17_H_
#define	_NTN_Config_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NTN_Config_r17__ntn_UlSyncValidityDuration_r17 {
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s5	= 0,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s10	= 1,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s15	= 2,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s20	= 3,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s25	= 4,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s30	= 5,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s35	= 6,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s40	= 7,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s45	= 8,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s50	= 9,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s55	= 10,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s60	= 11,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s120	= 12,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s180	= 13,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s240	= 14,
	NTN_Config_r17__ntn_UlSyncValidityDuration_r17_s900	= 15
} e_NTN_Config_r17__ntn_UlSyncValidityDuration_r17;
typedef enum NTN_Config_r17__ntn_PolarizationDL_r17 {
	NTN_Config_r17__ntn_PolarizationDL_r17_rhcp	= 0,
	NTN_Config_r17__ntn_PolarizationDL_r17_lhcp	= 1,
	NTN_Config_r17__ntn_PolarizationDL_r17_linear	= 2
} e_NTN_Config_r17__ntn_PolarizationDL_r17;
typedef enum NTN_Config_r17__ntn_PolarizationUL_r17 {
	NTN_Config_r17__ntn_PolarizationUL_r17_rhcp	= 0,
	NTN_Config_r17__ntn_PolarizationUL_r17_lhcp	= 1,
	NTN_Config_r17__ntn_PolarizationUL_r17_linear	= 2
} e_NTN_Config_r17__ntn_PolarizationUL_r17;
typedef enum NTN_Config_r17__ta_Report_r17 {
	NTN_Config_r17__ta_Report_r17_enabled	= 0
} e_NTN_Config_r17__ta_Report_r17;

/* Forward declarations */
struct EpochTime_r17;
struct TA_Info_r17;
struct EphemerisInfo_r17;

/* NTN-Config-r17 */
typedef struct NTN_Config_r17 {
	struct EpochTime_r17	*epochTime_r17;	/* OPTIONAL */
	long	*ntn_UlSyncValidityDuration_r17;	/* OPTIONAL */
	long	*cellSpecificKoffset_r17;	/* OPTIONAL */
	long	*kmac_r17;	/* OPTIONAL */
	struct TA_Info_r17	*ta_Info_r17;	/* OPTIONAL */
	long	*ntn_PolarizationDL_r17;	/* OPTIONAL */
	long	*ntn_PolarizationUL_r17;	/* OPTIONAL */
	struct EphemerisInfo_r17	*ephemerisInfo_r17;	/* OPTIONAL */
	long	*ta_Report_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NTN_Config_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_UlSyncValidityDuration_r17_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_PolarizationDL_r17_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_PolarizationUL_r17_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ta_Report_r17_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NTN_Config_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NTN_Config_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NTN_Config_r17_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EpochTime-r17.h"
#include "TA-Info-r17.h"
#include "EphemerisInfo-r17.h"

#endif	/* _NTN_Config_r17_H_ */
#include <asn_internal.h>