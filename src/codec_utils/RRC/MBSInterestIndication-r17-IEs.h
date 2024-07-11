/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MBSInterestIndication_r17_IEs_H_
#define	_MBSInterestIndication_r17_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSInterestIndication_r17_IEs__mbs_Priority_r17 {
	MBSInterestIndication_r17_IEs__mbs_Priority_r17_true	= 0
} e_MBSInterestIndication_r17_IEs__mbs_Priority_r17;

/* Forward declarations */
struct CarrierFreqListMBS_r17;
struct MBS_ServiceList_r17;

/* MBSInterestIndication-r17-IEs */
typedef struct MBSInterestIndication_r17_IEs {
	struct CarrierFreqListMBS_r17	*mbs_FreqList_r17;	/* OPTIONAL */
	long	*mbs_Priority_r17;	/* OPTIONAL */
	struct MBS_ServiceList_r17	*mbs_ServiceList_r17;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct MBSInterestIndication_r17_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSInterestIndication_r17_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mbs_Priority_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBSInterestIndication_r17_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MBSInterestIndication_r17_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSInterestIndication_r17_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqListMBS-r17.h"
#include "MBS-ServiceList-r17.h"

#endif	/* _MBSInterestIndication_r17_IEs_H_ */
#include <asn_internal.h>