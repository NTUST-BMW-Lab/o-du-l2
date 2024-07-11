/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "FeatureCombinationPreambles-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_numberOfRA_PreamblesGroupA_r17_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 64L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startPreambleForThisPartition_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 63L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numberOfPreamblesPerSSB_ForThisPartition_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 64L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ssb_SharedRO_MaskIndex_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 15L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_deltaPreamble_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1L && value <= 6L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ra_SizeGroupA_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_messagePowerOffsetGroupB_r17_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_numberOfRA_PreamblesGroupA_r17_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_startPreambleForThisPartition_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_numberOfPreamblesPerSSB_ForThisPartition_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ssb_SharedRO_MaskIndex_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_deltaPreamble_r17_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_ra_SizeGroupA_r17_value2enum_7[] = {
	{ 0,	3,	"b56" },
	{ 1,	4,	"b144" },
	{ 2,	4,	"b208" },
	{ 3,	4,	"b256" },
	{ 4,	4,	"b282" },
	{ 5,	4,	"b480" },
	{ 6,	4,	"b640" },
	{ 7,	4,	"b800" },
	{ 8,	5,	"b1000" },
	{ 9,	3,	"b72" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_ra_SizeGroupA_r17_enum2value_7[] = {
	8,	/* b1000(8) */
	1,	/* b144(1) */
	2,	/* b208(2) */
	3,	/* b256(3) */
	4,	/* b282(4) */
	5,	/* b480(5) */
	0,	/* b56(0) */
	6,	/* b640(6) */
	9,	/* b72(9) */
	7,	/* b800(7) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_ra_SizeGroupA_r17_specs_7 = {
	asn_MAP_ra_SizeGroupA_r17_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ra_SizeGroupA_r17_enum2value_7,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ra_SizeGroupA_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ra_SizeGroupA_r17_7 = {
	"ra-SizeGroupA-r17",
	"ra-SizeGroupA-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_ra_SizeGroupA_r17_tags_7,
	sizeof(asn_DEF_ra_SizeGroupA_r17_tags_7)
		/sizeof(asn_DEF_ra_SizeGroupA_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_ra_SizeGroupA_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_ra_SizeGroupA_r17_tags_7)
		/sizeof(asn_DEF_ra_SizeGroupA_r17_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ra_SizeGroupA_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ra_SizeGroupA_r17_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_messagePowerOffsetGroupB_r17_value2enum_24[] = {
	{ 0,	13,	"minusinfinity" },
	{ 1,	3,	"dB0" },
	{ 2,	3,	"dB5" },
	{ 3,	3,	"dB8" },
	{ 4,	4,	"dB10" },
	{ 5,	4,	"dB12" },
	{ 6,	4,	"dB15" },
	{ 7,	4,	"dB18" }
};
static const unsigned int asn_MAP_messagePowerOffsetGroupB_r17_enum2value_24[] = {
	1,	/* dB0(1) */
	4,	/* dB10(4) */
	5,	/* dB12(5) */
	6,	/* dB15(6) */
	7,	/* dB18(7) */
	2,	/* dB5(2) */
	3,	/* dB8(3) */
	0	/* minusinfinity(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_messagePowerOffsetGroupB_r17_specs_24 = {
	asn_MAP_messagePowerOffsetGroupB_r17_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_messagePowerOffsetGroupB_r17_enum2value_24,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_messagePowerOffsetGroupB_r17_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messagePowerOffsetGroupB_r17_24 = {
	"messagePowerOffsetGroupB-r17",
	"messagePowerOffsetGroupB-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_messagePowerOffsetGroupB_r17_tags_24,
	sizeof(asn_DEF_messagePowerOffsetGroupB_r17_tags_24)
		/sizeof(asn_DEF_messagePowerOffsetGroupB_r17_tags_24[0]) - 1, /* 1 */
	asn_DEF_messagePowerOffsetGroupB_r17_tags_24,	/* Same as above */
	sizeof(asn_DEF_messagePowerOffsetGroupB_r17_tags_24)
		/sizeof(asn_DEF_messagePowerOffsetGroupB_r17_tags_24[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_messagePowerOffsetGroupB_r17_constr_24,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_messagePowerOffsetGroupB_r17_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_groupBconfigured_r17_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureCombinationPreambles_r17__groupBconfigured_r17, ra_SizeGroupA_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ra_SizeGroupA_r17_7,
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
		"ra-SizeGroupA-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureCombinationPreambles_r17__groupBconfigured_r17, messagePowerOffsetGroupB_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_messagePowerOffsetGroupB_r17_24,
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
		"messagePowerOffsetGroupB-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureCombinationPreambles_r17__groupBconfigured_r17, numberOfRA_PreamblesGroupA_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_numberOfRA_PreamblesGroupA_r17_constr_33,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_numberOfRA_PreamblesGroupA_r17_constraint_6
		},
		0, 0, /* No default value */
		"numberOfRA-PreamblesGroupA-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_groupBconfigured_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_groupBconfigured_r17_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ra-SizeGroupA-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* messagePowerOffsetGroupB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* numberOfRA-PreamblesGroupA-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_groupBconfigured_r17_specs_6 = {
	sizeof(struct FeatureCombinationPreambles_r17__groupBconfigured_r17),
	offsetof(struct FeatureCombinationPreambles_r17__groupBconfigured_r17, _asn_ctx),
	asn_MAP_groupBconfigured_r17_tag2el_6,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupBconfigured_r17_6 = {
	"groupBconfigured-r17",
	"groupBconfigured-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_groupBconfigured_r17_tags_6,
	sizeof(asn_DEF_groupBconfigured_r17_tags_6)
		/sizeof(asn_DEF_groupBconfigured_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_groupBconfigured_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_groupBconfigured_r17_tags_6)
		/sizeof(asn_DEF_groupBconfigured_r17_tags_6[0]), /* 2 */
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
	asn_MBR_groupBconfigured_r17_6,
	3,	/* Elements count */
	&asn_SPC_groupBconfigured_r17_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureCombinationPreambles_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureCombinationPreambles_r17, featureCombination_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeatureCombination_r17,
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
		"featureCombination-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureCombinationPreambles_r17, startPreambleForThisPartition_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_startPreambleForThisPartition_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_startPreambleForThisPartition_r17_constraint_1
		},
		0, 0, /* No default value */
		"startPreambleForThisPartition-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureCombinationPreambles_r17, numberOfPreamblesPerSSB_ForThisPartition_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_numberOfPreamblesPerSSB_ForThisPartition_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_numberOfPreamblesPerSSB_ForThisPartition_r17_constraint_1
		},
		0, 0, /* No default value */
		"numberOfPreamblesPerSSB-ForThisPartition-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct FeatureCombinationPreambles_r17, ssb_SharedRO_MaskIndex_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ssb_SharedRO_MaskIndex_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ssb_SharedRO_MaskIndex_r17_constraint_1
		},
		0, 0, /* No default value */
		"ssb-SharedRO-MaskIndex-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct FeatureCombinationPreambles_r17, groupBconfigured_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_groupBconfigured_r17_6,
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
		"groupBconfigured-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct FeatureCombinationPreambles_r17, separateMsgA_PUSCH_Config_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgA_PUSCH_Config_r16,
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
		"separateMsgA-PUSCH-Config-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureCombinationPreambles_r17, msgA_RSRP_Threshold_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
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
		"msgA-RSRP-Threshold-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureCombinationPreambles_r17, rsrp_ThresholdSSB_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
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
		"rsrp-ThresholdSSB-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureCombinationPreambles_r17, deltaPreamble_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_deltaPreamble_r17_constr_37,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_deltaPreamble_r17_constraint_1
		},
		0, 0, /* No default value */
		"deltaPreamble-r17"
		},
};
static const int asn_MAP_FeatureCombinationPreambles_r17_oms_1[] = { 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_FeatureCombinationPreambles_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureCombinationPreambles_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* featureCombination-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* startPreambleForThisPartition-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* numberOfPreamblesPerSSB-ForThisPartition-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-SharedRO-MaskIndex-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* groupBconfigured-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* separateMsgA-PUSCH-Config-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* msgA-RSRP-Threshold-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rsrp-ThresholdSSB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* deltaPreamble-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureCombinationPreambles_r17_specs_1 = {
	sizeof(struct FeatureCombinationPreambles_r17),
	offsetof(struct FeatureCombinationPreambles_r17, _asn_ctx),
	asn_MAP_FeatureCombinationPreambles_r17_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_FeatureCombinationPreambles_r17_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureCombinationPreambles_r17 = {
	"FeatureCombinationPreambles-r17",
	"FeatureCombinationPreambles-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureCombinationPreambles_r17_tags_1,
	sizeof(asn_DEF_FeatureCombinationPreambles_r17_tags_1)
		/sizeof(asn_DEF_FeatureCombinationPreambles_r17_tags_1[0]), /* 1 */
	asn_DEF_FeatureCombinationPreambles_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureCombinationPreambles_r17_tags_1)
		/sizeof(asn_DEF_FeatureCombinationPreambles_r17_tags_1[0]), /* 1 */
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
	asn_MBR_FeatureCombinationPreambles_r17_1,
	9,	/* Elements count */
	&asn_SPC_FeatureCombinationPreambles_r17_specs_1	/* Additional specs */
};
