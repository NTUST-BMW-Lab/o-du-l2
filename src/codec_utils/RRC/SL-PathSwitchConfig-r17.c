/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SL-PathSwitchConfig-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_t420_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_t420_r17_value2enum_3[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" },
	{ 7,	7,	"ms10000" }
};
static const unsigned int asn_MAP_t420_r17_enum2value_3[] = {
	1,	/* ms100(1) */
	5,	/* ms1000(5) */
	7,	/* ms10000(7) */
	2,	/* ms150(2) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	0,	/* ms50(0) */
	4	/* ms500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_t420_r17_specs_3 = {
	asn_MAP_t420_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_t420_r17_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t420_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t420_r17_3 = {
	"t420-r17",
	"t420-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_t420_r17_tags_3,
	sizeof(asn_DEF_t420_r17_tags_3)
		/sizeof(asn_DEF_t420_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_t420_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_t420_r17_tags_3)
		/sizeof(asn_DEF_t420_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_t420_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t420_r17_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PathSwitchConfig_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PathSwitchConfig_r17, targetRelayUE_Identity_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_SourceIdentity_r17,
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
		"targetRelayUE-Identity-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PathSwitchConfig_r17, t420_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t420_r17_3,
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
		"t420-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_PathSwitchConfig_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PathSwitchConfig_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRelayUE-Identity-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t420-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PathSwitchConfig_r17_specs_1 = {
	sizeof(struct SL_PathSwitchConfig_r17),
	offsetof(struct SL_PathSwitchConfig_r17, _asn_ctx),
	asn_MAP_SL_PathSwitchConfig_r17_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PathSwitchConfig_r17 = {
	"SL-PathSwitchConfig-r17",
	"SL-PathSwitchConfig-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PathSwitchConfig_r17_tags_1,
	sizeof(asn_DEF_SL_PathSwitchConfig_r17_tags_1)
		/sizeof(asn_DEF_SL_PathSwitchConfig_r17_tags_1[0]), /* 1 */
	asn_DEF_SL_PathSwitchConfig_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PathSwitchConfig_r17_tags_1)
		/sizeof(asn_DEF_SL_PathSwitchConfig_r17_tags_1[0]), /* 1 */
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
	asn_MBR_SL_PathSwitchConfig_r17_1,
	2,	/* Elements count */
	&asn_SPC_SL_PathSwitchConfig_r17_specs_1	/* Additional specs */
};
