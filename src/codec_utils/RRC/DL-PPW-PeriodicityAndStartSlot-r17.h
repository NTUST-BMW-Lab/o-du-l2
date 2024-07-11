/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_DL_PPW_PeriodicityAndStartSlot_r17_H_
#define	_DL_PPW_PeriodicityAndStartSlot_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_PPW_PeriodicityAndStartSlot_r17_PR {
	DL_PPW_PeriodicityAndStartSlot_r17_PR_NOTHING,	/* No components present */
	DL_PPW_PeriodicityAndStartSlot_r17_PR_scs15,
	DL_PPW_PeriodicityAndStartSlot_r17_PR_scs30,
	DL_PPW_PeriodicityAndStartSlot_r17_PR_scs60,
	DL_PPW_PeriodicityAndStartSlot_r17_PR_scs120
	/* Extensions may appear below */
	
} DL_PPW_PeriodicityAndStartSlot_r17_PR;
typedef enum DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR {
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_NOTHING,	/* No components present */
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n4,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n5,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n8,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n10,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n16,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n20,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n32,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n40,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n64,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n80,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n160,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n320,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n640,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n1280,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n2560,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n5120,
	DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n10240
	/* Extensions may appear below */
	
} DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR;
typedef enum DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR {
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_NOTHING,	/* No components present */
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n8,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n10,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n16,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n20,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n32,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n40,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n64,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n80,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n128,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n160,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n320,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n640,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n1280,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n2560,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n5120,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n10240,
	DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n20480
	/* Extensions may appear below */
	
} DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR;
typedef enum DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR {
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_NOTHING,	/* No components present */
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n16,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n20,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n32,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n40,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n64,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n80,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n128,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n160,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n256,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n320,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n640,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n1280,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n2560,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n5120,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n10240,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n20480,
	DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n40960
	/* Extensions may appear below */
	
} DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR;
typedef enum DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR {
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_NOTHING,	/* No components present */
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n32,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n40,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n64,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n80,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n128,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n160,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n256,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n320,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n512,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n640,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n1280,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n2560,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n5120,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n10240,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n20480,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n40960,
	DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n81920
	/* Extensions may appear below */
	
} DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR;

/* DL-PPW-PeriodicityAndStartSlot-r17 */
typedef struct DL_PPW_PeriodicityAndStartSlot_r17 {
	DL_PPW_PeriodicityAndStartSlot_r17_PR present;
	union DL_PPW_PeriodicityAndStartSlot_r17_u {
		struct DL_PPW_PeriodicityAndStartSlot_r17__scs15 {
			DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR present;
			union DL_PPW_PeriodicityAndStartSlot_r17__scs15_u {
				long	 n4;
				long	 n5;
				long	 n8;
				long	 n10;
				long	 n16;
				long	 n20;
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n160;
				long	 n320;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs15;
		struct DL_PPW_PeriodicityAndStartSlot_r17__scs30 {
			DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR present;
			union DL_PPW_PeriodicityAndStartSlot_r17__scs30_u {
				long	 n8;
				long	 n10;
				long	 n16;
				long	 n20;
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n128;
				long	 n160;
				long	 n320;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				long	 n20480;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs30;
		struct DL_PPW_PeriodicityAndStartSlot_r17__scs60 {
			DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR present;
			union DL_PPW_PeriodicityAndStartSlot_r17__scs60_u {
				long	 n16;
				long	 n20;
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n128;
				long	 n160;
				long	 n256;
				long	 n320;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				long	 n20480;
				long	 n40960;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs60;
		struct DL_PPW_PeriodicityAndStartSlot_r17__scs120 {
			DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR present;
			union DL_PPW_PeriodicityAndStartSlot_r17__scs120_u {
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n128;
				long	 n160;
				long	 n256;
				long	 n320;
				long	 n512;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				long	 n20480;
				long	 n40960;
				long	 n81920;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs120;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PPW_PeriodicityAndStartSlot_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_PPW_PeriodicityAndStartSlot_r17;
extern asn_CHOICE_specifics_t asn_SPC_DL_PPW_PeriodicityAndStartSlot_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_PPW_PeriodicityAndStartSlot_r17_1[4];
extern asn_per_constraints_t asn_PER_type_DL_PPW_PeriodicityAndStartSlot_r17_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PPW_PeriodicityAndStartSlot_r17_H_ */
#include <asn_internal.h>