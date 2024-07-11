/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SupportedBandwidth-v1700.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fr1_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fr2_r17_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SupportedBandwidth_v1700_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_fr1_r17_value2enum_2[] = {
	{ 0,	4,	"mhz5" },
	{ 1,	5,	"mhz10" },
	{ 2,	5,	"mhz15" },
	{ 3,	5,	"mhz20" },
	{ 4,	5,	"mhz25" },
	{ 5,	5,	"mhz30" },
	{ 6,	5,	"mhz35" },
	{ 7,	5,	"mhz40" },
	{ 8,	5,	"mhz45" },
	{ 9,	5,	"mhz50" },
	{ 10,	5,	"mhz60" },
	{ 11,	5,	"mhz70" },
	{ 12,	5,	"mhz80" },
	{ 13,	5,	"mhz90" },
	{ 14,	6,	"mhz100" }
};
static const unsigned int asn_MAP_fr1_r17_enum2value_2[] = {
	1,	/* mhz10(1) */
	14,	/* mhz100(14) */
	2,	/* mhz15(2) */
	3,	/* mhz20(3) */
	4,	/* mhz25(4) */
	5,	/* mhz30(5) */
	6,	/* mhz35(6) */
	7,	/* mhz40(7) */
	8,	/* mhz45(8) */
	0,	/* mhz5(0) */
	9,	/* mhz50(9) */
	10,	/* mhz60(10) */
	11,	/* mhz70(11) */
	12,	/* mhz80(12) */
	13	/* mhz90(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr1_r17_specs_2 = {
	asn_MAP_fr1_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_fr1_r17_enum2value_2,	/* N => "tag"; sorted by N */
	15,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fr1_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fr1_r17_2 = {
	"fr1-r17",
	"fr1-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_fr1_r17_tags_2,
	sizeof(asn_DEF_fr1_r17_tags_2)
		/sizeof(asn_DEF_fr1_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_fr1_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_fr1_r17_tags_2)
		/sizeof(asn_DEF_fr1_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fr1_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fr1_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr2_r17_value2enum_18[] = {
	{ 0,	5,	"mhz50" },
	{ 1,	6,	"mhz100" },
	{ 2,	6,	"mhz200" },
	{ 3,	6,	"mhz400" },
	{ 4,	6,	"mhz800" },
	{ 5,	7,	"mhz1600" },
	{ 6,	7,	"mhz2000" }
};
static const unsigned int asn_MAP_fr2_r17_enum2value_18[] = {
	1,	/* mhz100(1) */
	5,	/* mhz1600(5) */
	2,	/* mhz200(2) */
	6,	/* mhz2000(6) */
	3,	/* mhz400(3) */
	0,	/* mhz50(0) */
	4	/* mhz800(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr2_r17_specs_18 = {
	asn_MAP_fr2_r17_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_fr2_r17_enum2value_18,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fr2_r17_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fr2_r17_18 = {
	"fr2-r17",
	"fr2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_fr2_r17_tags_18,
	sizeof(asn_DEF_fr2_r17_tags_18)
		/sizeof(asn_DEF_fr2_r17_tags_18[0]) - 1, /* 1 */
	asn_DEF_fr2_r17_tags_18,	/* Same as above */
	sizeof(asn_DEF_fr2_r17_tags_18)
		/sizeof(asn_DEF_fr2_r17_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fr2_r17_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fr2_r17_specs_18	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SupportedBandwidth_v1700_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedBandwidth_v1700, choice.fr1_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fr1_r17_2,
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
		"fr1-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedBandwidth_v1700, choice.fr2_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fr2_r17_18,
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
		"fr2-r17"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SupportedBandwidth_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fr1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fr2-r17 */
};
asn_CHOICE_specifics_t asn_SPC_SupportedBandwidth_v1700_specs_1 = {
	sizeof(struct SupportedBandwidth_v1700),
	offsetof(struct SupportedBandwidth_v1700, _asn_ctx),
	offsetof(struct SupportedBandwidth_v1700, present),
	sizeof(((struct SupportedBandwidth_v1700 *)0)->present),
	asn_MAP_SupportedBandwidth_v1700_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandwidth_v1700 = {
	"SupportedBandwidth-v1700",
	"SupportedBandwidth-v1700",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SupportedBandwidth_v1700_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_SupportedBandwidth_v1700_1,
	2,	/* Elements count */
	&asn_SPC_SupportedBandwidth_v1700_specs_1	/* Additional specs */
};
