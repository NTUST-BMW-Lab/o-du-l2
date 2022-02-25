/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_CSI_SSB_ResourceSet_H_
#define	_CSI_SSB_ResourceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-SSB-ResourceSetId.h"
#include "SSB-Index.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-SSB-ResourceSet */
typedef struct CSI_SSB_ResourceSet {
	CSI_SSB_ResourceSetId_t	 csi_SSB_ResourceSetId;
	struct CSI_SSB_ResourceSet__csi_SSB_ResourceList {
		A_SEQUENCE_OF(SSB_Index_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} csi_SSB_ResourceList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_SSB_ResourceSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_SSB_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_SSB_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_SSB_ResourceSet_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_SSB_ResourceSet_H_ */
#include <asn_internal.h>
