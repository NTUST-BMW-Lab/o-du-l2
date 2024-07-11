/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RRCReconfiguration_v1560_IEs_H_
#define	_RRCReconfiguration_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "SK-Counter.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_MRDC_SecondaryCellGroupConfig;
struct RRCReconfiguration_v1610_IEs;

/* RRCReconfiguration-v1560-IEs */
typedef struct RRCReconfiguration_v1560_IEs {
	struct SetupRelease_MRDC_SecondaryCellGroupConfig	*mrdc_SecondaryCellGroupConfig;	/* OPTIONAL */
	OCTET_STRING_t	*radioBearerConfig2;	/* OPTIONAL */
	SK_Counter_t	*sk_Counter;	/* OPTIONAL */
	struct RRCReconfiguration_v1610_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfiguration_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfiguration_v1560_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"
#include "RRCReconfiguration-v1610-IEs.h"

#endif	/* _RRCReconfiguration_v1560_IEs_H_ */
#include <asn_internal.h>