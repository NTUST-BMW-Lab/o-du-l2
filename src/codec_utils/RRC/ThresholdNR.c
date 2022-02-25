/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "ThresholdNR.h"

asn_TYPE_member_t asn_MBR_ThresholdNR_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ThresholdNR, thresholdRSRP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRP"
		},
	{ ATF_POINTER, 2, offsetof(struct ThresholdNR, thresholdRSRQ),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdRSRQ"
		},
	{ ATF_POINTER, 1, offsetof(struct ThresholdNR, thresholdSINR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SINR_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresholdSINR"
		},
};
static const int asn_MAP_ThresholdNR_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ThresholdNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ThresholdNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* thresholdRSRP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* thresholdRSRQ */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* thresholdSINR */
};
asn_SEQUENCE_specifics_t asn_SPC_ThresholdNR_specs_1 = {
	sizeof(struct ThresholdNR),
	offsetof(struct ThresholdNR, _asn_ctx),
	asn_MAP_ThresholdNR_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ThresholdNR_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ThresholdNR = {
	"ThresholdNR",
	"ThresholdNR",
	&asn_OP_SEQUENCE,
	asn_DEF_ThresholdNR_tags_1,
	sizeof(asn_DEF_ThresholdNR_tags_1)
		/sizeof(asn_DEF_ThresholdNR_tags_1[0]), /* 1 */
	asn_DEF_ThresholdNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_ThresholdNR_tags_1)
		/sizeof(asn_DEF_ThresholdNR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ThresholdNR_1,
	3,	/* Elements count */
	&asn_SPC_ThresholdNR_specs_1	/* Additional specs */
};

