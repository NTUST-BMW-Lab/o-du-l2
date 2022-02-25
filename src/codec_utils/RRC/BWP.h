/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_BWP_H_
#define	_BWP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SubcarrierSpacing.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BWP__cyclicPrefix {
	BWP__cyclicPrefix_extended	= 0
} e_BWP__cyclicPrefix;

/* BWP */
typedef struct BWP {
	long	 locationAndBandwidth;
	SubcarrierSpacing_t	 subcarrierSpacing;
	long	*cyclicPrefix;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BWP_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicPrefix_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BWP;
extern asn_SEQUENCE_specifics_t asn_SPC_BWP_specs_1;
extern asn_TYPE_member_t asn_MBR_BWP_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BWP_H_ */
#include <asn_internal.h>
