/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RRCReconfigurationCompleteSidelink_r16_IEs_H_
#define	_RRCReconfigurationCompleteSidelink_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCReconfigurationCompleteSidelink_v1710_IEs;

/* RRCReconfigurationCompleteSidelink-r16-IEs */
typedef struct RRCReconfigurationCompleteSidelink_r16_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCReconfigurationCompleteSidelink_v1710_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfigurationCompleteSidelink_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfigurationCompleteSidelink_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfigurationCompleteSidelink_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfigurationCompleteSidelink_r16_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCReconfigurationCompleteSidelink-v1710-IEs.h"

#endif	/* _RRCReconfigurationCompleteSidelink_r16_IEs_H_ */
#include <asn_internal.h>