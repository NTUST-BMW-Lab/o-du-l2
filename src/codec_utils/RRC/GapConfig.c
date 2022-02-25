/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "GapConfig.h"

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
static int
memb_gapOffset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_mgl_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mgl_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mgrp_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mgrp_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mgta_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mgta_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_gapOffset_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..159) */,
	-1};
static asn_per_constraints_t asn_PER_memb_gapOffset_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mgl_value2enum_3[] = {
	{ 0,	7,	"ms1dot5" },
	{ 1,	3,	"ms3" },
	{ 2,	7,	"ms3dot5" },
	{ 3,	3,	"ms4" },
	{ 4,	7,	"ms5dot5" },
	{ 5,	3,	"ms6" }
};
static const unsigned int asn_MAP_mgl_enum2value_3[] = {
	0,	/* ms1dot5(0) */
	1,	/* ms3(1) */
	2,	/* ms3dot5(2) */
	3,	/* ms4(3) */
	4,	/* ms5dot5(4) */
	5	/* ms6(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_mgl_specs_3 = {
	asn_MAP_mgl_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mgl_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mgl_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mgl_3 = {
	"mgl",
	"mgl",
	&asn_OP_NativeEnumerated,
	asn_DEF_mgl_tags_3,
	sizeof(asn_DEF_mgl_tags_3)
		/sizeof(asn_DEF_mgl_tags_3[0]) - 1, /* 1 */
	asn_DEF_mgl_tags_3,	/* Same as above */
	sizeof(asn_DEF_mgl_tags_3)
		/sizeof(asn_DEF_mgl_tags_3[0]), /* 2 */
	{ &asn_OER_type_mgl_constr_3, &asn_PER_type_mgl_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mgl_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mgrp_value2enum_10[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms80" },
	{ 3,	5,	"ms160" }
};
static const unsigned int asn_MAP_mgrp_enum2value_10[] = {
	3,	/* ms160(3) */
	0,	/* ms20(0) */
	1,	/* ms40(1) */
	2	/* ms80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_mgrp_specs_10 = {
	asn_MAP_mgrp_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_mgrp_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mgrp_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mgrp_10 = {
	"mgrp",
	"mgrp",
	&asn_OP_NativeEnumerated,
	asn_DEF_mgrp_tags_10,
	sizeof(asn_DEF_mgrp_tags_10)
		/sizeof(asn_DEF_mgrp_tags_10[0]) - 1, /* 1 */
	asn_DEF_mgrp_tags_10,	/* Same as above */
	sizeof(asn_DEF_mgrp_tags_10)
		/sizeof(asn_DEF_mgrp_tags_10[0]), /* 2 */
	{ &asn_OER_type_mgrp_constr_10, &asn_PER_type_mgrp_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mgrp_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mgta_value2enum_15[] = {
	{ 0,	3,	"ms0" },
	{ 1,	8,	"ms0dot25" },
	{ 2,	7,	"ms0dot5" }
};
static const unsigned int asn_MAP_mgta_enum2value_15[] = {
	0,	/* ms0(0) */
	1,	/* ms0dot25(1) */
	2	/* ms0dot5(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_mgta_specs_15 = {
	asn_MAP_mgta_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_mgta_enum2value_15,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mgta_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mgta_15 = {
	"mgta",
	"mgta",
	&asn_OP_NativeEnumerated,
	asn_DEF_mgta_tags_15,
	sizeof(asn_DEF_mgta_tags_15)
		/sizeof(asn_DEF_mgta_tags_15[0]) - 1, /* 1 */
	asn_DEF_mgta_tags_15,	/* Same as above */
	sizeof(asn_DEF_mgta_tags_15)
		/sizeof(asn_DEF_mgta_tags_15[0]), /* 2 */
	{ &asn_OER_type_mgta_constr_15, &asn_PER_type_mgta_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mgta_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GapConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GapConfig, gapOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_gapOffset_constr_2, &asn_PER_memb_gapOffset_constr_2,  memb_gapOffset_constraint_1 },
		0, 0, /* No default value */
		"gapOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GapConfig, mgl),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mgl_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GapConfig, mgrp),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mgrp_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgrp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GapConfig, mgta),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mgta_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgta"
		},
};
static const ber_tlv_tag_t asn_DEF_GapConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GapConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mgl */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mgrp */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mgta */
};
asn_SEQUENCE_specifics_t asn_SPC_GapConfig_specs_1 = {
	sizeof(struct GapConfig),
	offsetof(struct GapConfig, _asn_ctx),
	asn_MAP_GapConfig_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GapConfig = {
	"GapConfig",
	"GapConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_GapConfig_tags_1,
	sizeof(asn_DEF_GapConfig_tags_1)
		/sizeof(asn_DEF_GapConfig_tags_1[0]), /* 1 */
	asn_DEF_GapConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_GapConfig_tags_1)
		/sizeof(asn_DEF_GapConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GapConfig_1,
	4,	/* Elements count */
	&asn_SPC_GapConfig_specs_1	/* Additional specs */
};

