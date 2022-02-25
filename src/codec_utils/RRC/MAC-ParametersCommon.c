/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "MAC-ParametersCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_lcp_Restriction_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_lcp_Restriction_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pucch_SpatialRelInfoMAC_CE_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pucch_SpatialRelInfoMAC_CE_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_lch_ToSCellRestriction_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_lch_ToSCellRestriction_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_recommendedBitRate_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_recommendedBitRate_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_recommendedBitRateQuery_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_recommendedBitRateQuery_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_lcp_Restriction_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lcp_Restriction_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lcp_Restriction_specs_2 = {
	asn_MAP_lcp_Restriction_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_lcp_Restriction_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lcp_Restriction_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lcp_Restriction_2 = {
	"lcp-Restriction",
	"lcp-Restriction",
	&asn_OP_NativeEnumerated,
	asn_DEF_lcp_Restriction_tags_2,
	sizeof(asn_DEF_lcp_Restriction_tags_2)
		/sizeof(asn_DEF_lcp_Restriction_tags_2[0]) - 1, /* 1 */
	asn_DEF_lcp_Restriction_tags_2,	/* Same as above */
	sizeof(asn_DEF_lcp_Restriction_tags_2)
		/sizeof(asn_DEF_lcp_Restriction_tags_2[0]), /* 2 */
	{ &asn_OER_type_lcp_Restriction_constr_2, &asn_PER_type_lcp_Restriction_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lcp_Restriction_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pucch_SpatialRelInfoMAC_CE_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pucch_SpatialRelInfoMAC_CE_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pucch_SpatialRelInfoMAC_CE_specs_4 = {
	asn_MAP_pucch_SpatialRelInfoMAC_CE_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_pucch_SpatialRelInfoMAC_CE_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_SpatialRelInfoMAC_CE_4 = {
	"pucch-SpatialRelInfoMAC-CE",
	"pucch-SpatialRelInfoMAC-CE",
	&asn_OP_NativeEnumerated,
	asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4,
	sizeof(asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4)
		/sizeof(asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4[0]) - 1, /* 1 */
	asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4,	/* Same as above */
	sizeof(asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4)
		/sizeof(asn_DEF_pucch_SpatialRelInfoMAC_CE_tags_4[0]), /* 2 */
	{ &asn_OER_type_pucch_SpatialRelInfoMAC_CE_constr_4, &asn_PER_type_pucch_SpatialRelInfoMAC_CE_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pucch_SpatialRelInfoMAC_CE_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lch_ToSCellRestriction_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lch_ToSCellRestriction_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lch_ToSCellRestriction_specs_6 = {
	asn_MAP_lch_ToSCellRestriction_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_lch_ToSCellRestriction_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lch_ToSCellRestriction_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lch_ToSCellRestriction_6 = {
	"lch-ToSCellRestriction",
	"lch-ToSCellRestriction",
	&asn_OP_NativeEnumerated,
	asn_DEF_lch_ToSCellRestriction_tags_6,
	sizeof(asn_DEF_lch_ToSCellRestriction_tags_6)
		/sizeof(asn_DEF_lch_ToSCellRestriction_tags_6[0]) - 1, /* 1 */
	asn_DEF_lch_ToSCellRestriction_tags_6,	/* Same as above */
	sizeof(asn_DEF_lch_ToSCellRestriction_tags_6)
		/sizeof(asn_DEF_lch_ToSCellRestriction_tags_6[0]), /* 2 */
	{ &asn_OER_type_lch_ToSCellRestriction_constr_6, &asn_PER_type_lch_ToSCellRestriction_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lch_ToSCellRestriction_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_recommendedBitRate_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_recommendedBitRate_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_recommendedBitRate_specs_10 = {
	asn_MAP_recommendedBitRate_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_recommendedBitRate_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_recommendedBitRate_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_recommendedBitRate_10 = {
	"recommendedBitRate",
	"recommendedBitRate",
	&asn_OP_NativeEnumerated,
	asn_DEF_recommendedBitRate_tags_10,
	sizeof(asn_DEF_recommendedBitRate_tags_10)
		/sizeof(asn_DEF_recommendedBitRate_tags_10[0]) - 1, /* 1 */
	asn_DEF_recommendedBitRate_tags_10,	/* Same as above */
	sizeof(asn_DEF_recommendedBitRate_tags_10)
		/sizeof(asn_DEF_recommendedBitRate_tags_10[0]), /* 2 */
	{ &asn_OER_type_recommendedBitRate_constr_10, &asn_PER_type_recommendedBitRate_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_recommendedBitRate_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_recommendedBitRateQuery_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_recommendedBitRateQuery_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_recommendedBitRateQuery_specs_12 = {
	asn_MAP_recommendedBitRateQuery_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_recommendedBitRateQuery_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_recommendedBitRateQuery_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_recommendedBitRateQuery_12 = {
	"recommendedBitRateQuery",
	"recommendedBitRateQuery",
	&asn_OP_NativeEnumerated,
	asn_DEF_recommendedBitRateQuery_tags_12,
	sizeof(asn_DEF_recommendedBitRateQuery_tags_12)
		/sizeof(asn_DEF_recommendedBitRateQuery_tags_12[0]) - 1, /* 1 */
	asn_DEF_recommendedBitRateQuery_tags_12,	/* Same as above */
	sizeof(asn_DEF_recommendedBitRateQuery_tags_12)
		/sizeof(asn_DEF_recommendedBitRateQuery_tags_12[0]), /* 2 */
	{ &asn_OER_type_recommendedBitRateQuery_constr_12, &asn_PER_type_recommendedBitRateQuery_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_recommendedBitRateQuery_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_ParametersCommon__ext1, recommendedBitRate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_recommendedBitRate_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"recommendedBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_ParametersCommon__ext1, recommendedBitRateQuery),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_recommendedBitRateQuery_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"recommendedBitRateQuery"
		},
};
static const int asn_MAP_ext1_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* recommendedBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* recommendedBitRateQuery */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct MAC_ParametersCommon__ext1),
	offsetof(struct MAC_ParametersCommon__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_9,
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_9,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_ParametersCommon_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MAC_ParametersCommon, lcp_Restriction),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lcp_Restriction_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lcp-Restriction"
		},
	{ ATF_POINTER, 3, offsetof(struct MAC_ParametersCommon, pucch_SpatialRelInfoMAC_CE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pucch_SpatialRelInfoMAC_CE_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-SpatialRelInfoMAC-CE"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_ParametersCommon, lch_ToSCellRestriction),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lch_ToSCellRestriction_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lch-ToSCellRestriction"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_ParametersCommon, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MAC_ParametersCommon_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MAC_ParametersCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_ParametersCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lcp-Restriction */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pucch-SpatialRelInfoMAC-CE */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lch-ToSCellRestriction */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersCommon_specs_1 = {
	sizeof(struct MAC_ParametersCommon),
	offsetof(struct MAC_ParametersCommon, _asn_ctx),
	asn_MAP_MAC_ParametersCommon_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MAC_ParametersCommon_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_ParametersCommon = {
	"MAC-ParametersCommon",
	"MAC-ParametersCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_ParametersCommon_tags_1,
	sizeof(asn_DEF_MAC_ParametersCommon_tags_1)
		/sizeof(asn_DEF_MAC_ParametersCommon_tags_1[0]), /* 1 */
	asn_DEF_MAC_ParametersCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_ParametersCommon_tags_1)
		/sizeof(asn_DEF_MAC_ParametersCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_ParametersCommon_1,
	4,	/* Elements count */
	&asn_SPC_MAC_ParametersCommon_specs_1	/* Additional specs */
};

