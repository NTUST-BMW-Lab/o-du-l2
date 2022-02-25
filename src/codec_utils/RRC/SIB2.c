/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "SIB2.h"

#include "ThresholdNR.h"
#include "MultiFrequencyBandListNR-SIB.h"
#include "SSB-MTC.h"
#include "SS-RSSI-Measurement.h"
#include "SSB-ToMeasure.h"
#include "SpeedStateScaleFactors.h"
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
memb_nrofSS_BlocksToAverage_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_q_Hyst_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_q_Hyst_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sf_Medium_constr_26 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sf_Medium_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sf_High_constr_31 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sf_High_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nrofSS_BlocksToAverage_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (2..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nrofSS_BlocksToAverage_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  16 }	/* (2..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_q_Hyst_value2enum_6[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB1" },
	{ 2,	3,	"dB2" },
	{ 3,	3,	"dB3" },
	{ 4,	3,	"dB4" },
	{ 5,	3,	"dB5" },
	{ 6,	3,	"dB6" },
	{ 7,	3,	"dB8" },
	{ 8,	4,	"dB10" },
	{ 9,	4,	"dB12" },
	{ 10,	4,	"dB14" },
	{ 11,	4,	"dB16" },
	{ 12,	4,	"dB18" },
	{ 13,	4,	"dB20" },
	{ 14,	4,	"dB22" },
	{ 15,	4,	"dB24" }
};
static const unsigned int asn_MAP_q_Hyst_enum2value_6[] = {
	0,	/* dB0(0) */
	1,	/* dB1(1) */
	8,	/* dB10(8) */
	9,	/* dB12(9) */
	10,	/* dB14(10) */
	11,	/* dB16(11) */
	12,	/* dB18(12) */
	2,	/* dB2(2) */
	13,	/* dB20(13) */
	14,	/* dB22(14) */
	15,	/* dB24(15) */
	3,	/* dB3(3) */
	4,	/* dB4(4) */
	5,	/* dB5(5) */
	6,	/* dB6(6) */
	7	/* dB8(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_q_Hyst_specs_6 = {
	asn_MAP_q_Hyst_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_q_Hyst_enum2value_6,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_q_Hyst_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_q_Hyst_6 = {
	"q-Hyst",
	"q-Hyst",
	&asn_OP_NativeEnumerated,
	asn_DEF_q_Hyst_tags_6,
	sizeof(asn_DEF_q_Hyst_tags_6)
		/sizeof(asn_DEF_q_Hyst_tags_6[0]) - 1, /* 1 */
	asn_DEF_q_Hyst_tags_6,	/* Same as above */
	sizeof(asn_DEF_q_Hyst_tags_6)
		/sizeof(asn_DEF_q_Hyst_tags_6[0]), /* 2 */
	{ &asn_OER_type_q_Hyst_constr_6, &asn_PER_type_q_Hyst_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_q_Hyst_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sf_Medium_value2enum_26[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-4" },
	{ 2,	4,	"dB-2" },
	{ 3,	3,	"dB0" }
};
static const unsigned int asn_MAP_sf_Medium_enum2value_26[] = {
	2,	/* dB-2(2) */
	1,	/* dB-4(1) */
	0,	/* dB-6(0) */
	3	/* dB0(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sf_Medium_specs_26 = {
	asn_MAP_sf_Medium_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_sf_Medium_enum2value_26,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sf_Medium_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sf_Medium_26 = {
	"sf-Medium",
	"sf-Medium",
	&asn_OP_NativeEnumerated,
	asn_DEF_sf_Medium_tags_26,
	sizeof(asn_DEF_sf_Medium_tags_26)
		/sizeof(asn_DEF_sf_Medium_tags_26[0]) - 1, /* 1 */
	asn_DEF_sf_Medium_tags_26,	/* Same as above */
	sizeof(asn_DEF_sf_Medium_tags_26)
		/sizeof(asn_DEF_sf_Medium_tags_26[0]), /* 2 */
	{ &asn_OER_type_sf_Medium_constr_26, &asn_PER_type_sf_Medium_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sf_Medium_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sf_High_value2enum_31[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-4" },
	{ 2,	4,	"dB-2" },
	{ 3,	3,	"dB0" }
};
static const unsigned int asn_MAP_sf_High_enum2value_31[] = {
	2,	/* dB-2(2) */
	1,	/* dB-4(1) */
	0,	/* dB-6(0) */
	3	/* dB0(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_sf_High_specs_31 = {
	asn_MAP_sf_High_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_sf_High_enum2value_31,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sf_High_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sf_High_31 = {
	"sf-High",
	"sf-High",
	&asn_OP_NativeEnumerated,
	asn_DEF_sf_High_tags_31,
	sizeof(asn_DEF_sf_High_tags_31)
		/sizeof(asn_DEF_sf_High_tags_31[0]) - 1, /* 1 */
	asn_DEF_sf_High_tags_31,	/* Same as above */
	sizeof(asn_DEF_sf_High_tags_31)
		/sizeof(asn_DEF_sf_High_tags_31[0]), /* 2 */
	{ &asn_OER_type_sf_High_constr_31, &asn_PER_type_sf_High_constr_31, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sf_High_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_q_HystSF_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF, sf_Medium),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sf_Medium_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sf-Medium"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF, sf_High),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sf_High_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sf-High"
		},
};
static const ber_tlv_tag_t asn_DEF_q_HystSF_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_q_HystSF_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf-Medium */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sf-High */
};
static asn_SEQUENCE_specifics_t asn_SPC_q_HystSF_specs_25 = {
	sizeof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF),
	offsetof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF, _asn_ctx),
	asn_MAP_q_HystSF_tag2el_25,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_q_HystSF_25 = {
	"q-HystSF",
	"q-HystSF",
	&asn_OP_SEQUENCE,
	asn_DEF_q_HystSF_tags_25,
	sizeof(asn_DEF_q_HystSF_tags_25)
		/sizeof(asn_DEF_q_HystSF_tags_25[0]) - 1, /* 1 */
	asn_DEF_q_HystSF_tags_25,	/* Same as above */
	sizeof(asn_DEF_q_HystSF_tags_25)
		/sizeof(asn_DEF_q_HystSF_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_q_HystSF_25,
	2,	/* Elements count */
	&asn_SPC_q_HystSF_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_speedStateReselectionPars_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars, mobilityStateParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityStateParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityStateParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars, q_HystSF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_q_HystSF_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-HystSF"
		},
};
static const ber_tlv_tag_t asn_DEF_speedStateReselectionPars_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_speedStateReselectionPars_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityStateParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-HystSF */
};
static asn_SEQUENCE_specifics_t asn_SPC_speedStateReselectionPars_specs_23 = {
	sizeof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars),
	offsetof(struct SIB2__cellReselectionInfoCommon__speedStateReselectionPars, _asn_ctx),
	asn_MAP_speedStateReselectionPars_tag2el_23,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_speedStateReselectionPars_23 = {
	"speedStateReselectionPars",
	"speedStateReselectionPars",
	&asn_OP_SEQUENCE,
	asn_DEF_speedStateReselectionPars_tags_23,
	sizeof(asn_DEF_speedStateReselectionPars_tags_23)
		/sizeof(asn_DEF_speedStateReselectionPars_tags_23[0]) - 1, /* 1 */
	asn_DEF_speedStateReselectionPars_tags_23,	/* Same as above */
	sizeof(asn_DEF_speedStateReselectionPars_tags_23)
		/sizeof(asn_DEF_speedStateReselectionPars_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_speedStateReselectionPars_23,
	2,	/* Elements count */
	&asn_SPC_speedStateReselectionPars_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellReselectionInfoCommon_2[] = {
	{ ATF_POINTER, 3, offsetof(struct SIB2__cellReselectionInfoCommon, nrofSS_BlocksToAverage),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nrofSS_BlocksToAverage_constr_3, &asn_PER_memb_nrofSS_BlocksToAverage_constr_3,  memb_nrofSS_BlocksToAverage_constraint_2 },
		0, 0, /* No default value */
		"nrofSS-BlocksToAverage"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB2__cellReselectionInfoCommon, absThreshSS_BlocksConsolidation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absThreshSS-BlocksConsolidation"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__cellReselectionInfoCommon, rangeToBestCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RangeToBestCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rangeToBestCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionInfoCommon, q_Hyst),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_q_Hyst_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-Hyst"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__cellReselectionInfoCommon, speedStateReselectionPars),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_speedStateReselectionPars_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedStateReselectionPars"
		},
};
static const int asn_MAP_cellReselectionInfoCommon_oms_2[] = { 0, 1, 2, 4 };
static const ber_tlv_tag_t asn_DEF_cellReselectionInfoCommon_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellReselectionInfoCommon_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrofSS-BlocksToAverage */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* absThreshSS-BlocksConsolidation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rangeToBestCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* q-Hyst */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* speedStateReselectionPars */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellReselectionInfoCommon_specs_2 = {
	sizeof(struct SIB2__cellReselectionInfoCommon),
	offsetof(struct SIB2__cellReselectionInfoCommon, _asn_ctx),
	asn_MAP_cellReselectionInfoCommon_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_cellReselectionInfoCommon_oms_2,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReselectionInfoCommon_2 = {
	"cellReselectionInfoCommon",
	"cellReselectionInfoCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_cellReselectionInfoCommon_tags_2,
	sizeof(asn_DEF_cellReselectionInfoCommon_tags_2)
		/sizeof(asn_DEF_cellReselectionInfoCommon_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellReselectionInfoCommon_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellReselectionInfoCommon_tags_2)
		/sizeof(asn_DEF_cellReselectionInfoCommon_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellReselectionInfoCommon_2,
	5,	/* Elements count */
	&asn_SPC_cellReselectionInfoCommon_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellReselectionServingFreqInfo_37[] = {
	{ ATF_POINTER, 2, offsetof(struct SIB2__cellReselectionServingFreqInfo, s_NonIntraSearchP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearchP"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__cellReselectionServingFreqInfo, s_NonIntraSearchQ),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearchQ"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionServingFreqInfo, threshServingLowP),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshServingLowP"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__cellReselectionServingFreqInfo, threshServingLowQ),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshServingLowQ"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__cellReselectionServingFreqInfo, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__cellReselectionServingFreqInfo, cellReselectionSubPriority),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionSubPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionSubPriority"
		},
};
static const int asn_MAP_cellReselectionServingFreqInfo_oms_37[] = { 0, 1, 3, 5 };
static const ber_tlv_tag_t asn_DEF_cellReselectionServingFreqInfo_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellReselectionServingFreqInfo_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-NonIntraSearchP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-NonIntraSearchQ */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* threshServingLowP */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* threshServingLowQ */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cellReselectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* cellReselectionSubPriority */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellReselectionServingFreqInfo_specs_37 = {
	sizeof(struct SIB2__cellReselectionServingFreqInfo),
	offsetof(struct SIB2__cellReselectionServingFreqInfo, _asn_ctx),
	asn_MAP_cellReselectionServingFreqInfo_tag2el_37,
	6,	/* Count of tags in the map */
	asn_MAP_cellReselectionServingFreqInfo_oms_37,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReselectionServingFreqInfo_37 = {
	"cellReselectionServingFreqInfo",
	"cellReselectionServingFreqInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_cellReselectionServingFreqInfo_tags_37,
	sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_37)
		/sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_37[0]) - 1, /* 1 */
	asn_DEF_cellReselectionServingFreqInfo_tags_37,	/* Same as above */
	sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_37)
		/sizeof(asn_DEF_cellReselectionServingFreqInfo_tags_37[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellReselectionServingFreqInfo_37,
	6,	/* Elements count */
	&asn_SPC_cellReselectionServingFreqInfo_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_60[] = {
	{ ATF_POINTER, 1, offsetof(struct SIB2__intraFreqCellReselectionInfo__ext1, t_ReselectionNR_SF),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionNR-SF"
		},
};
static const int asn_MAP_ext1_oms_60[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_60[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_60[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* t-ReselectionNR-SF */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_60 = {
	sizeof(struct SIB2__intraFreqCellReselectionInfo__ext1),
	offsetof(struct SIB2__intraFreqCellReselectionInfo__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_60,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_60,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_60 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_60,
	sizeof(asn_DEF_ext1_tags_60)
		/sizeof(asn_DEF_ext1_tags_60[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_60,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_60)
		/sizeof(asn_DEF_ext1_tags_60[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_60,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_60	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_intraFreqCellReselectionInfo_45[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__intraFreqCellReselectionInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB2__intraFreqCellReselectionInfo, q_RxLevMinSUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMinSUL"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__intraFreqCellReselectionInfo, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__intraFreqCellReselectionInfo, s_IntraSearchP),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearchP"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__intraFreqCellReselectionInfo, s_IntraSearchQ),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearchQ"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__intraFreqCellReselectionInfo, t_ReselectionNR),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionNR"
		},
	{ ATF_POINTER, 6, offsetof(struct SIB2__intraFreqCellReselectionInfo, frequencyBandList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR_SIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyBandList"
		},
	{ ATF_POINTER, 5, offsetof(struct SIB2__intraFreqCellReselectionInfo, frequencyBandListSUL),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR_SIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyBandListSUL"
		},
	{ ATF_POINTER, 4, offsetof(struct SIB2__intraFreqCellReselectionInfo, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max"
		},
	{ ATF_POINTER, 3, offsetof(struct SIB2__intraFreqCellReselectionInfo, smtc),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_MTC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB2__intraFreqCellReselectionInfo, ss_RSSI_Measurement),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_RSSI_Measurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-RSSI-Measurement"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__intraFreqCellReselectionInfo, ssb_ToMeasure),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SSB_ToMeasure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ToMeasure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2__intraFreqCellReselectionInfo, deriveSSB_IndexFromCell),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deriveSSB-IndexFromCell"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB2__intraFreqCellReselectionInfo, ext1),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext1_60,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_intraFreqCellReselectionInfo_oms_45[] = { 1, 2, 4, 6, 7, 8, 9, 10, 11, 13 };
static const ber_tlv_tag_t asn_DEF_intraFreqCellReselectionInfo_tags_45[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_intraFreqCellReselectionInfo_tag2el_45[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMinSUL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-QualMin */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* s-IntraSearchP */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* s-IntraSearchQ */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* t-ReselectionNR */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* frequencyBandList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* frequencyBandListSUL */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* smtc */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ss-RSSI-Measurement */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ssb-ToMeasure */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* deriveSSB-IndexFromCell */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ext1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_intraFreqCellReselectionInfo_specs_45 = {
	sizeof(struct SIB2__intraFreqCellReselectionInfo),
	offsetof(struct SIB2__intraFreqCellReselectionInfo, _asn_ctx),
	asn_MAP_intraFreqCellReselectionInfo_tag2el_45,
	14,	/* Count of tags in the map */
	asn_MAP_intraFreqCellReselectionInfo_oms_45,	/* Optional members */
	9, 1,	/* Root/Additions */
	13,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqCellReselectionInfo_45 = {
	"intraFreqCellReselectionInfo",
	"intraFreqCellReselectionInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_intraFreqCellReselectionInfo_tags_45,
	sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_45)
		/sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_45[0]) - 1, /* 1 */
	asn_DEF_intraFreqCellReselectionInfo_tags_45,	/* Same as above */
	sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_45)
		/sizeof(asn_DEF_intraFreqCellReselectionInfo_tags_45[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_intraFreqCellReselectionInfo_45,
	14,	/* Elements count */
	&asn_SPC_intraFreqCellReselectionInfo_specs_45	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SIB2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2, cellReselectionInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellReselectionInfoCommon_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfoCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2, cellReselectionServingFreqInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellReselectionServingFreqInfo_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionServingFreqInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB2, intraFreqCellReselectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_intraFreqCellReselectionInfo_45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellReselectionInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_SIB2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SIB2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellReselectionInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionServingFreqInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* intraFreqCellReselectionInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_SIB2_specs_1 = {
	sizeof(struct SIB2),
	offsetof(struct SIB2, _asn_ctx),
	asn_MAP_SIB2_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SIB2 = {
	"SIB2",
	"SIB2",
	&asn_OP_SEQUENCE,
	asn_DEF_SIB2_tags_1,
	sizeof(asn_DEF_SIB2_tags_1)
		/sizeof(asn_DEF_SIB2_tags_1[0]), /* 1 */
	asn_DEF_SIB2_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB2_tags_1)
		/sizeof(asn_DEF_SIB2_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SIB2_1,
	3,	/* Elements count */
	&asn_SPC_SIB2_specs_1	/* Additional specs */
};

