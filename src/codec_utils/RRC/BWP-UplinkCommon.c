/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "BWP-UplinkCommon.h"

#include "RACH-ConfigCommon.h"
#include "PUSCH-ConfigCommon.h"
#include "PUCCH-ConfigCommon.h"
static asn_oer_constraints_t asn_OER_type_rach_ConfigCommon_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rach_ConfigCommon_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pusch_ConfigCommon_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pusch_ConfigCommon_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pucch_ConfigCommon_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pucch_ConfigCommon_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rach_ConfigCommon_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_UplinkCommon__rach_ConfigCommon, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_UplinkCommon__rach_ConfigCommon, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rach_ConfigCommon_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_rach_ConfigCommon_specs_3 = {
	sizeof(struct BWP_UplinkCommon__rach_ConfigCommon),
	offsetof(struct BWP_UplinkCommon__rach_ConfigCommon, _asn_ctx),
	offsetof(struct BWP_UplinkCommon__rach_ConfigCommon, present),
	sizeof(((struct BWP_UplinkCommon__rach_ConfigCommon *)0)->present),
	asn_MAP_rach_ConfigCommon_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rach_ConfigCommon_3 = {
	"rach-ConfigCommon",
	"rach-ConfigCommon",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_rach_ConfigCommon_constr_3, &asn_PER_type_rach_ConfigCommon_constr_3, CHOICE_constraint },
	asn_MBR_rach_ConfigCommon_3,
	2,	/* Elements count */
	&asn_SPC_rach_ConfigCommon_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pusch_ConfigCommon_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_UplinkCommon__pusch_ConfigCommon, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_UplinkCommon__pusch_ConfigCommon, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pusch_ConfigCommon_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pusch_ConfigCommon_specs_6 = {
	sizeof(struct BWP_UplinkCommon__pusch_ConfigCommon),
	offsetof(struct BWP_UplinkCommon__pusch_ConfigCommon, _asn_ctx),
	offsetof(struct BWP_UplinkCommon__pusch_ConfigCommon, present),
	sizeof(((struct BWP_UplinkCommon__pusch_ConfigCommon *)0)->present),
	asn_MAP_pusch_ConfigCommon_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pusch_ConfigCommon_6 = {
	"pusch-ConfigCommon",
	"pusch-ConfigCommon",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_pusch_ConfigCommon_constr_6, &asn_PER_type_pusch_ConfigCommon_constr_6, CHOICE_constraint },
	asn_MBR_pusch_ConfigCommon_6,
	2,	/* Elements count */
	&asn_SPC_pusch_ConfigCommon_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pucch_ConfigCommon_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_UplinkCommon__pucch_ConfigCommon, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct BWP_UplinkCommon__pucch_ConfigCommon, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pucch_ConfigCommon_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pucch_ConfigCommon_specs_9 = {
	sizeof(struct BWP_UplinkCommon__pucch_ConfigCommon),
	offsetof(struct BWP_UplinkCommon__pucch_ConfigCommon, _asn_ctx),
	offsetof(struct BWP_UplinkCommon__pucch_ConfigCommon, present),
	sizeof(((struct BWP_UplinkCommon__pucch_ConfigCommon *)0)->present),
	asn_MAP_pucch_ConfigCommon_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_ConfigCommon_9 = {
	"pucch-ConfigCommon",
	"pucch-ConfigCommon",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_pucch_ConfigCommon_constr_9, &asn_PER_type_pucch_ConfigCommon_constr_9, CHOICE_constraint },
	asn_MBR_pucch_ConfigCommon_9,
	2,	/* Elements count */
	&asn_SPC_pucch_ConfigCommon_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BWP_UplinkCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP_UplinkCommon, genericParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BWP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"genericParameters"
		},
	{ ATF_POINTER, 3, offsetof(struct BWP_UplinkCommon, rach_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rach_ConfigCommon_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommon"
		},
	{ ATF_POINTER, 2, offsetof(struct BWP_UplinkCommon, pusch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pusch_ConfigCommon_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon"
		},
	{ ATF_POINTER, 1, offsetof(struct BWP_UplinkCommon, pucch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pucch_ConfigCommon_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon"
		},
};
static const int asn_MAP_BWP_UplinkCommon_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BWP_UplinkCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BWP_UplinkCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* genericParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rach-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pusch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pucch-ConfigCommon */
};
asn_SEQUENCE_specifics_t asn_SPC_BWP_UplinkCommon_specs_1 = {
	sizeof(struct BWP_UplinkCommon),
	offsetof(struct BWP_UplinkCommon, _asn_ctx),
	asn_MAP_BWP_UplinkCommon_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BWP_UplinkCommon_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BWP_UplinkCommon = {
	"BWP-UplinkCommon",
	"BWP-UplinkCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_BWP_UplinkCommon_tags_1,
	sizeof(asn_DEF_BWP_UplinkCommon_tags_1)
		/sizeof(asn_DEF_BWP_UplinkCommon_tags_1[0]), /* 1 */
	asn_DEF_BWP_UplinkCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_BWP_UplinkCommon_tags_1)
		/sizeof(asn_DEF_BWP_UplinkCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BWP_UplinkCommon_1,
	4,	/* Elements count */
	&asn_SPC_BWP_UplinkCommon_specs_1	/* Additional specs */
};

