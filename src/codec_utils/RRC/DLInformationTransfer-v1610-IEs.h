/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_DLInformationTransfer_v1610_IEs_H_
#define	_DLInformationTransfer_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferenceTimeInfo_r16;
struct DLInformationTransfer_v1700_IEs;

/* DLInformationTransfer-v1610-IEs */
typedef struct DLInformationTransfer_v1610_IEs {
	struct ReferenceTimeInfo_r16	*referenceTimeInfo_r16;	/* OPTIONAL */
	struct DLInformationTransfer_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLInformationTransfer_v1610_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_DLInformationTransfer_v1610_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferenceTimeInfo-r16.h"
#include "DLInformationTransfer-v1700-IEs.h"

#endif	/* _DLInformationTransfer_v1610_IEs_H_ */
#include <asn_internal.h>