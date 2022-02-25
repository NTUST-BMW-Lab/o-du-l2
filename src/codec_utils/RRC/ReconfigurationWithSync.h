/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ReconfigurationWithSync_H_
#define	_ReconfigurationWithSync_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RNTI-Value.h"
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReconfigurationWithSync__t304 {
	ReconfigurationWithSync__t304_ms50	= 0,
	ReconfigurationWithSync__t304_ms100	= 1,
	ReconfigurationWithSync__t304_ms150	= 2,
	ReconfigurationWithSync__t304_ms200	= 3,
	ReconfigurationWithSync__t304_ms500	= 4,
	ReconfigurationWithSync__t304_ms1000	= 5,
	ReconfigurationWithSync__t304_ms2000	= 6,
	ReconfigurationWithSync__t304_ms10000	= 7
} e_ReconfigurationWithSync__t304;
typedef enum ReconfigurationWithSync__rach_ConfigDedicated_PR {
	ReconfigurationWithSync__rach_ConfigDedicated_PR_NOTHING,	/* No components present */
	ReconfigurationWithSync__rach_ConfigDedicated_PR_uplink,
	ReconfigurationWithSync__rach_ConfigDedicated_PR_supplementaryUplink
} ReconfigurationWithSync__rach_ConfigDedicated_PR;

/* Forward declarations */
struct ServingCellConfigCommon;
struct RACH_ConfigDedicated;
struct SSB_MTC;

/* ReconfigurationWithSync */
typedef struct ReconfigurationWithSync {
	struct ServingCellConfigCommon	*spCellConfigCommon;	/* OPTIONAL */
	RNTI_Value_t	 newUE_Identity;
	long	 t304;
	struct ReconfigurationWithSync__rach_ConfigDedicated {
		ReconfigurationWithSync__rach_ConfigDedicated_PR present;
		union ReconfigurationWithSync__rach_ConfigDedicated_u {
			struct RACH_ConfigDedicated	*uplink;
			struct RACH_ConfigDedicated	*supplementaryUplink;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rach_ConfigDedicated;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ReconfigurationWithSync__ext1 {
		struct SSB_MTC	*smtc;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReconfigurationWithSync_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t304_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReconfigurationWithSync;
extern asn_SEQUENCE_specifics_t asn_SPC_ReconfigurationWithSync_specs_1;
extern asn_TYPE_member_t asn_MBR_ReconfigurationWithSync_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ReconfigurationWithSync_H_ */
#include <asn_internal.h>
