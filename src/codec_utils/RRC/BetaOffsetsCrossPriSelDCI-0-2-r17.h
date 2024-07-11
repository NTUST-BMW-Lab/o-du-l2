/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BetaOffsetsCrossPriSelDCI_0_2_r17_H_
#define	_BetaOffsetsCrossPriSelDCI_0_2_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BetaOffsetsCrossPriSelDCI_0_2_r17_PR {
	BetaOffsetsCrossPriSelDCI_0_2_r17_PR_NOTHING,	/* No components present */
	BetaOffsetsCrossPriSelDCI_0_2_r17_PR_dynamicDCI_0_2_r17,
	BetaOffsetsCrossPriSelDCI_0_2_r17_PR_semiStaticDCI_0_2_r17
} BetaOffsetsCrossPriSelDCI_0_2_r17_PR;
typedef enum BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_PR {
	BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_PR_NOTHING,	/* No components present */
	BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_PR_oneBit_r17,
	BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_PR_twoBits_r17
} BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_PR;

/* Forward declarations */
struct BetaOffsetsCrossPri_r17;

/* BetaOffsetsCrossPriSelDCI-0-2-r17 */
typedef struct BetaOffsetsCrossPriSelDCI_0_2_r17 {
	BetaOffsetsCrossPriSelDCI_0_2_r17_PR present;
	union BetaOffsetsCrossPriSelDCI_0_2_r17_u {
		struct BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17 {
			BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_PR present;
			union BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17_u {
				struct BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17__oneBit_r17 {
					A_SEQUENCE_OF(struct BetaOffsetsCrossPri_r17) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *oneBit_r17;
				struct BetaOffsetsCrossPriSelDCI_0_2_r17__dynamicDCI_0_2_r17__twoBits_r17 {
					A_SEQUENCE_OF(struct BetaOffsetsCrossPri_r17) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *twoBits_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dynamicDCI_0_2_r17;
		struct BetaOffsetsCrossPri_r17	*semiStaticDCI_0_2_r17;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BetaOffsetsCrossPriSelDCI_0_2_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BetaOffsetsCrossPriSelDCI_0_2_r17;
extern asn_CHOICE_specifics_t asn_SPC_BetaOffsetsCrossPriSelDCI_0_2_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_BetaOffsetsCrossPriSelDCI_0_2_r17_1[2];
extern asn_per_constraints_t asn_PER_type_BetaOffsetsCrossPriSelDCI_0_2_r17_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BetaOffsetsCrossPri-r17.h"

#endif	/* _BetaOffsetsCrossPriSelDCI_0_2_r17_H_ */
#include <asn_internal.h>