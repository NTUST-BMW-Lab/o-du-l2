/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MAC-ParametersSidelinkCommon-r16.h"

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
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_lcp_RestrictionSidelink_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_multipleConfiguredGrantsSidelink_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_drx_OnSidelink_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_lcp_RestrictionSidelink_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lcp_RestrictionSidelink_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lcp_RestrictionSidelink_r16_specs_2 = {
	asn_MAP_lcp_RestrictionSidelink_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_lcp_RestrictionSidelink_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lcp_RestrictionSidelink_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lcp_RestrictionSidelink_r16_2 = {
	"lcp-RestrictionSidelink-r16",
	"lcp-RestrictionSidelink-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_lcp_RestrictionSidelink_r16_tags_2,
	sizeof(asn_DEF_lcp_RestrictionSidelink_r16_tags_2)
		/sizeof(asn_DEF_lcp_RestrictionSidelink_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_lcp_RestrictionSidelink_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_lcp_RestrictionSidelink_r16_tags_2)
		/sizeof(asn_DEF_lcp_RestrictionSidelink_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_lcp_RestrictionSidelink_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lcp_RestrictionSidelink_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multipleConfiguredGrantsSidelink_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multipleConfiguredGrantsSidelink_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multipleConfiguredGrantsSidelink_r16_specs_4 = {
	asn_MAP_multipleConfiguredGrantsSidelink_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_multipleConfiguredGrantsSidelink_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multipleConfiguredGrantsSidelink_r16_4 = {
	"multipleConfiguredGrantsSidelink-r16",
	"multipleConfiguredGrantsSidelink-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4,
	sizeof(asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4)
		/sizeof(asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4)
		/sizeof(asn_DEF_multipleConfiguredGrantsSidelink_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_multipleConfiguredGrantsSidelink_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multipleConfiguredGrantsSidelink_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_OnSidelink_r17_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_drx_OnSidelink_r17_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_OnSidelink_r17_specs_8 = {
	asn_MAP_drx_OnSidelink_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_OnSidelink_r17_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_OnSidelink_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_OnSidelink_r17_8 = {
	"drx-OnSidelink-r17",
	"drx-OnSidelink-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_OnSidelink_r17_tags_8,
	sizeof(asn_DEF_drx_OnSidelink_r17_tags_8)
		/sizeof(asn_DEF_drx_OnSidelink_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_drx_OnSidelink_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_drx_OnSidelink_r17_tags_8)
		/sizeof(asn_DEF_drx_OnSidelink_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_drx_OnSidelink_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_OnSidelink_r17_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct MAC_ParametersSidelinkCommon_r16__ext1, drx_OnSidelink_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_OnSidelink_r17_8,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"drx-OnSidelink-r17"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* drx-OnSidelink-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct MAC_ParametersSidelinkCommon_r16__ext1),
	offsetof(struct MAC_ParametersSidelinkCommon_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_7,
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_7,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_ParametersSidelinkCommon_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MAC_ParametersSidelinkCommon_r16, lcp_RestrictionSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lcp_RestrictionSidelink_r16_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"lcp-RestrictionSidelink-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_ParametersSidelinkCommon_r16, multipleConfiguredGrantsSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multipleConfiguredGrantsSidelink_r16_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"multipleConfiguredGrantsSidelink-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_ParametersSidelinkCommon_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_7,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MAC_ParametersSidelinkCommon_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_ParametersSidelinkCommon_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lcp-RestrictionSidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multipleConfiguredGrantsSidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersSidelinkCommon_r16_specs_1 = {
	sizeof(struct MAC_ParametersSidelinkCommon_r16),
	offsetof(struct MAC_ParametersSidelinkCommon_r16, _asn_ctx),
	asn_MAP_MAC_ParametersSidelinkCommon_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MAC_ParametersSidelinkCommon_r16_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_ParametersSidelinkCommon_r16 = {
	"MAC-ParametersSidelinkCommon-r16",
	"MAC-ParametersSidelinkCommon-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1,
	sizeof(asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1)
		/sizeof(asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1[0]), /* 1 */
	asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1)
		/sizeof(asn_DEF_MAC_ParametersSidelinkCommon_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MAC_ParametersSidelinkCommon_r16_1,
	3,	/* Elements count */
	&asn_SPC_MAC_ParametersSidelinkCommon_r16_specs_1	/* Additional specs */
};
