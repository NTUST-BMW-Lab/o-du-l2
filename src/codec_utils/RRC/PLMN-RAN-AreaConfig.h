/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PLMN_RAN_AreaConfig_H_
#define	_PLMN_RAN_AreaConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentitY;
struct RAN_AreaConfig;

/* PLMN-RAN-AreaConfig */
typedef struct PLMN_RAN_AreaConfig {
	struct PLMN_IdentitY	*plmn_Identity;	/* OPTIONAL */
	struct PLMN_RAN_AreaConfig__ran_Area {
		A_SEQUENCE_OF(struct RAN_AreaConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ran_Area;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_RAN_AreaConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_RAN_AreaConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_RAN_AreaConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_RAN_AreaConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_RAN_AreaConfig_H_ */
#include <asn_internal.h>
