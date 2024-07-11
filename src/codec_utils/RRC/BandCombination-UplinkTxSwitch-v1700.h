/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BandCombination_UplinkTxSwitch_v1700_H_
#define	_BandCombination_UplinkTxSwitch_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombination_v1700;
struct ULTxSwitchingBandPair_v1700;
struct UplinkTxSwitchingBandParameters_v1700;

/* BandCombination-UplinkTxSwitch-v1700 */
typedef struct BandCombination_UplinkTxSwitch_v1700 {
	struct BandCombination_v1700	*bandCombination_v1700;	/* OPTIONAL */
	struct BandCombination_UplinkTxSwitch_v1700__supportedBandPairListNR_v1700 {
		A_SEQUENCE_OF(struct ULTxSwitchingBandPair_v1700) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandPairListNR_v1700;
	struct BandCombination_UplinkTxSwitch_v1700__uplinkTxSwitchingBandParametersList_v1700 {
		A_SEQUENCE_OF(struct UplinkTxSwitchingBandParameters_v1700) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkTxSwitchingBandParametersList_v1700;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombination_UplinkTxSwitch_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombination_UplinkTxSwitch_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombination_UplinkTxSwitch_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombination_UplinkTxSwitch_v1700_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombination-v1700.h"
#include "ULTxSwitchingBandPair-v1700.h"
#include "UplinkTxSwitchingBandParameters-v1700.h"

#endif	/* _BandCombination_UplinkTxSwitch_v1700_H_ */
#include <asn_internal.h>