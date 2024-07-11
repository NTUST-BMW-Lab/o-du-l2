/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SL-Failure-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sl_Failure_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_sl_Failure_r16_value2enum_3[] = {
	{ 0,	3,	"rlf" },
	{ 1,	13,	"configFailure" },
	{ 2,	15,	"drxReject-v1710" },
	{ 3,	6,	"spare5" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_sl_Failure_r16_enum2value_3[] = {
	1,	/* configFailure(1) */
	2,	/* drxReject-v1710(2) */
	0,	/* rlf(0) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3	/* spare5(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_Failure_r16_specs_3 = {
	asn_MAP_sl_Failure_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_Failure_r16_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_Failure_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_Failure_r16_3 = {
	"sl-Failure-r16",
	"sl-Failure-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_Failure_r16_tags_3,
	sizeof(asn_DEF_sl_Failure_r16_tags_3)
		/sizeof(asn_DEF_sl_Failure_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_sl_Failure_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_sl_Failure_r16_tags_3)
		/sizeof(asn_DEF_sl_Failure_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_Failure_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_Failure_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_Failure_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_Failure_r16, sl_DestinationIdentity_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DestinationIdentity_r16,
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
		"sl-DestinationIdentity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_Failure_r16, sl_Failure_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_Failure_r16_3,
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
		"sl-Failure-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_Failure_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_Failure_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-DestinationIdentity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sl-Failure-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_Failure_r16_specs_1 = {
	sizeof(struct SL_Failure_r16),
	offsetof(struct SL_Failure_r16, _asn_ctx),
	asn_MAP_SL_Failure_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_Failure_r16 = {
	"SL-Failure-r16",
	"SL-Failure-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_Failure_r16_tags_1,
	sizeof(asn_DEF_SL_Failure_r16_tags_1)
		/sizeof(asn_DEF_SL_Failure_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_Failure_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_Failure_r16_tags_1)
		/sizeof(asn_DEF_SL_Failure_r16_tags_1[0]), /* 1 */
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
	asn_MBR_SL_Failure_r16_1,
	2,	/* Elements count */
	&asn_SPC_SL_Failure_r16_specs_1	/* Additional specs */
};
