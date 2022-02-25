/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_MultiBandInfo_H_
#define	_EUTRA_MultiBandInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_NS_PmaxList;

/* EUTRA-MultiBandInfo */
typedef struct EUTRA_MultiBandInfo {
	FreqBandIndicatorEUTRA_t	 eutra_FreqBandIndicator;
	struct EUTRA_NS_PmaxList	*eutra_NS_PmaxList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_MultiBandInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_MultiBandInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_MultiBandInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_MultiBandInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_MultiBandInfo_H_ */
#include <asn_internal.h>
