/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "FeatureSetUplink-v1710.h"

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
static asn_per_constraints_t asn_PER_type_mTRP_PUSCH_TypeA_CB_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mTRP_PUSCH_RepetitionTypeA_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mTRP_PUCCH_IntraSlot_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_srs_AntennaSwitching2SP_1Periodic_r17_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_srs_ExtensionAperiodicSRS_r17_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_srs_OneAP_SRS_r17_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ue_PowerClassPerBandPerBC_r17_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_tx_Support_UL_GapFR2_r17_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_mTRP_PUSCH_TypeA_CB_r17_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_mTRP_PUSCH_TypeA_CB_r17_enum2value_2[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_mTRP_PUSCH_TypeA_CB_r17_specs_2 = {
	asn_MAP_mTRP_PUSCH_TypeA_CB_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_mTRP_PUSCH_TypeA_CB_r17_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mTRP_PUSCH_TypeA_CB_r17_2 = {
	"mTRP-PUSCH-TypeA-CB-r17",
	"mTRP-PUSCH-TypeA-CB-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2,
	sizeof(asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2)
		/sizeof(asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2)
		/sizeof(asn_DEF_mTRP_PUSCH_TypeA_CB_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mTRP_PUSCH_TypeA_CB_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mTRP_PUSCH_TypeA_CB_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mTRP_PUSCH_RepetitionTypeA_r17_value2enum_6[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_mTRP_PUSCH_RepetitionTypeA_r17_enum2value_6[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_mTRP_PUSCH_RepetitionTypeA_r17_specs_6 = {
	asn_MAP_mTRP_PUSCH_RepetitionTypeA_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_mTRP_PUSCH_RepetitionTypeA_r17_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_6 = {
	"mTRP-PUSCH-RepetitionTypeA-r17",
	"mTRP-PUSCH-RepetitionTypeA-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6,
	sizeof(asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6)
		/sizeof(asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6)
		/sizeof(asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mTRP_PUSCH_RepetitionTypeA_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mTRP_PUSCH_RepetitionTypeA_r17_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mTRP_PUCCH_IntraSlot_r17_value2enum_11[] = {
	{ 0,	5,	"pf0-2" },
	{ 1,	7,	"pf1-3-4" },
	{ 2,	5,	"pf0-4" }
};
static const unsigned int asn_MAP_mTRP_PUCCH_IntraSlot_r17_enum2value_11[] = {
	0,	/* pf0-2(0) */
	2,	/* pf0-4(2) */
	1	/* pf1-3-4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mTRP_PUCCH_IntraSlot_r17_specs_11 = {
	asn_MAP_mTRP_PUCCH_IntraSlot_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_mTRP_PUCCH_IntraSlot_r17_enum2value_11,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mTRP_PUCCH_IntraSlot_r17_11 = {
	"mTRP-PUCCH-IntraSlot-r17",
	"mTRP-PUCCH-IntraSlot-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11,
	sizeof(asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11)
		/sizeof(asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11)
		/sizeof(asn_DEF_mTRP_PUCCH_IntraSlot_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mTRP_PUCCH_IntraSlot_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mTRP_PUCCH_IntraSlot_r17_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_AntennaSwitching2SP_1Periodic_r17_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_srs_AntennaSwitching2SP_1Periodic_r17_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_AntennaSwitching2SP_1Periodic_r17_specs_15 = {
	asn_MAP_srs_AntennaSwitching2SP_1Periodic_r17_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_AntennaSwitching2SP_1Periodic_r17_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_15 = {
	"srs-AntennaSwitching2SP-1Periodic-r17",
	"srs-AntennaSwitching2SP-1Periodic-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15,
	sizeof(asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15)
		/sizeof(asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15[0]) - 1, /* 1 */
	asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15,	/* Same as above */
	sizeof(asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15)
		/sizeof(asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_srs_AntennaSwitching2SP_1Periodic_r17_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_AntennaSwitching2SP_1Periodic_r17_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_ExtensionAperiodicSRS_r17_value2enum_17[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_srs_ExtensionAperiodicSRS_r17_enum2value_17[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_ExtensionAperiodicSRS_r17_specs_17 = {
	asn_MAP_srs_ExtensionAperiodicSRS_r17_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_ExtensionAperiodicSRS_r17_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ExtensionAperiodicSRS_r17_17 = {
	"srs-ExtensionAperiodicSRS-r17",
	"srs-ExtensionAperiodicSRS-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17,
	sizeof(asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17)
		/sizeof(asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17[0]) - 1, /* 1 */
	asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17,	/* Same as above */
	sizeof(asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17)
		/sizeof(asn_DEF_srs_ExtensionAperiodicSRS_r17_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_srs_ExtensionAperiodicSRS_r17_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_ExtensionAperiodicSRS_r17_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_OneAP_SRS_r17_value2enum_19[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_srs_OneAP_SRS_r17_enum2value_19[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_OneAP_SRS_r17_specs_19 = {
	asn_MAP_srs_OneAP_SRS_r17_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_OneAP_SRS_r17_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_OneAP_SRS_r17_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_OneAP_SRS_r17_19 = {
	"srs-OneAP-SRS-r17",
	"srs-OneAP-SRS-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_OneAP_SRS_r17_tags_19,
	sizeof(asn_DEF_srs_OneAP_SRS_r17_tags_19)
		/sizeof(asn_DEF_srs_OneAP_SRS_r17_tags_19[0]) - 1, /* 1 */
	asn_DEF_srs_OneAP_SRS_r17_tags_19,	/* Same as above */
	sizeof(asn_DEF_srs_OneAP_SRS_r17_tags_19)
		/sizeof(asn_DEF_srs_OneAP_SRS_r17_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_srs_OneAP_SRS_r17_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_OneAP_SRS_r17_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_PowerClassPerBandPerBC_r17_value2enum_21[] = {
	{ 0,	7,	"pc1dot5" },
	{ 1,	3,	"pc2" },
	{ 2,	3,	"pc3" }
};
static const unsigned int asn_MAP_ue_PowerClassPerBandPerBC_r17_enum2value_21[] = {
	0,	/* pc1dot5(0) */
	1,	/* pc2(1) */
	2	/* pc3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_PowerClassPerBandPerBC_r17_specs_21 = {
	asn_MAP_ue_PowerClassPerBandPerBC_r17_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_PowerClassPerBandPerBC_r17_enum2value_21,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_PowerClassPerBandPerBC_r17_21 = {
	"ue-PowerClassPerBandPerBC-r17",
	"ue-PowerClassPerBandPerBC-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21,
	sizeof(asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21)
		/sizeof(asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21[0]) - 1, /* 1 */
	asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21,	/* Same as above */
	sizeof(asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21)
		/sizeof(asn_DEF_ue_PowerClassPerBandPerBC_r17_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ue_PowerClassPerBandPerBC_r17_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_PowerClassPerBandPerBC_r17_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tx_Support_UL_GapFR2_r17_value2enum_25[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_tx_Support_UL_GapFR2_r17_enum2value_25[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tx_Support_UL_GapFR2_r17_specs_25 = {
	asn_MAP_tx_Support_UL_GapFR2_r17_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_tx_Support_UL_GapFR2_r17_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tx_Support_UL_GapFR2_r17_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tx_Support_UL_GapFR2_r17_25 = {
	"tx-Support-UL-GapFR2-r17",
	"tx-Support-UL-GapFR2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_tx_Support_UL_GapFR2_r17_tags_25,
	sizeof(asn_DEF_tx_Support_UL_GapFR2_r17_tags_25)
		/sizeof(asn_DEF_tx_Support_UL_GapFR2_r17_tags_25[0]) - 1, /* 1 */
	asn_DEF_tx_Support_UL_GapFR2_r17_tags_25,	/* Same as above */
	sizeof(asn_DEF_tx_Support_UL_GapFR2_r17_tags_25)
		/sizeof(asn_DEF_tx_Support_UL_GapFR2_r17_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_tx_Support_UL_GapFR2_r17_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tx_Support_UL_GapFR2_r17_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetUplink_v1710_1[] = {
	{ ATF_POINTER, 8, offsetof(struct FeatureSetUplink_v1710, mTRP_PUSCH_TypeA_CB_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mTRP_PUSCH_TypeA_CB_r17_2,
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
		"mTRP-PUSCH-TypeA-CB-r17"
		},
	{ ATF_POINTER, 7, offsetof(struct FeatureSetUplink_v1710, mTRP_PUSCH_RepetitionTypeA_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mTRP_PUSCH_RepetitionTypeA_r17_6,
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
		"mTRP-PUSCH-RepetitionTypeA-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct FeatureSetUplink_v1710, mTRP_PUCCH_IntraSlot_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mTRP_PUCCH_IntraSlot_r17_11,
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
		"mTRP-PUCCH-IntraSlot-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct FeatureSetUplink_v1710, srs_AntennaSwitching2SP_1Periodic_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_AntennaSwitching2SP_1Periodic_r17_15,
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
		"srs-AntennaSwitching2SP-1Periodic-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct FeatureSetUplink_v1710, srs_ExtensionAperiodicSRS_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_ExtensionAperiodicSRS_r17_17,
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
		"srs-ExtensionAperiodicSRS-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetUplink_v1710, srs_OneAP_SRS_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_OneAP_SRS_r17_19,
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
		"srs-OneAP-SRS-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetUplink_v1710, ue_PowerClassPerBandPerBC_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_PowerClassPerBandPerBC_r17_21,
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
		"ue-PowerClassPerBandPerBC-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetUplink_v1710, tx_Support_UL_GapFR2_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tx_Support_UL_GapFR2_r17_25,
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
		"tx-Support-UL-GapFR2-r17"
		},
};
static const int asn_MAP_FeatureSetUplink_v1710_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_FeatureSetUplink_v1710_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetUplink_v1710_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mTRP-PUSCH-TypeA-CB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mTRP-PUSCH-RepetitionTypeA-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mTRP-PUCCH-IntraSlot-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* srs-AntennaSwitching2SP-1Periodic-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* srs-ExtensionAperiodicSRS-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* srs-OneAP-SRS-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ue-PowerClassPerBandPerBC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* tx-Support-UL-GapFR2-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUplink_v1710_specs_1 = {
	sizeof(struct FeatureSetUplink_v1710),
	offsetof(struct FeatureSetUplink_v1710, _asn_ctx),
	asn_MAP_FeatureSetUplink_v1710_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_FeatureSetUplink_v1710_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetUplink_v1710 = {
	"FeatureSetUplink-v1710",
	"FeatureSetUplink-v1710",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetUplink_v1710_tags_1,
	sizeof(asn_DEF_FeatureSetUplink_v1710_tags_1)
		/sizeof(asn_DEF_FeatureSetUplink_v1710_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetUplink_v1710_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetUplink_v1710_tags_1)
		/sizeof(asn_DEF_FeatureSetUplink_v1710_tags_1[0]), /* 1 */
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
	asn_MBR_FeatureSetUplink_v1710_1,
	8,	/* Elements count */
	&asn_SPC_FeatureSetUplink_v1710_specs_1	/* Additional specs */
};
