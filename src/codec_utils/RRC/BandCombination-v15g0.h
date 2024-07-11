/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BandCombination_v15g0_H_
#define	_BandCombination_v15g0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CA_ParametersNR_v15g0;
struct CA_ParametersNRDC_v15g0;
struct MRDC_Parameters_v15g0;

/* BandCombination-v15g0 */
typedef struct BandCombination_v15g0 {
	struct CA_ParametersNR_v15g0	*ca_ParametersNR_v15g0;	/* OPTIONAL */
	struct CA_ParametersNRDC_v15g0	*ca_ParametersNRDC_v15g0;	/* OPTIONAL */
	struct MRDC_Parameters_v15g0	*mrdc_Parameters_v15g0;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombination_v15g0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombination_v15g0;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v15g0_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombination_v15g0_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CA-ParametersNR-v15g0.h"
#include "CA-ParametersNRDC-v15g0.h"
#include "MRDC-Parameters-v15g0.h"

#endif	/* _BandCombination_v15g0_H_ */
#include <asn_internal.h>