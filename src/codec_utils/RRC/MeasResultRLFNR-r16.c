/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MeasResultRLFNR-r16.h"

static int
memb_ssbRLMConfigBitmap_r16_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 64UL)) {
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
memb_csi_rsRLMConfigBitmap_r16_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 96UL)) {
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
static asn_per_constraints_t asn_PER_memb_ssbRLMConfigBitmap_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_csi_rsRLMConfigBitmap_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  96,  96 }	/* (SIZE(96..96)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_cellResults_r16_3[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasResultRLFNR_r16__measResult_r16__cellResults_r16, resultsSSB_Cell_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasQuantityResults,
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
		"resultsSSB-Cell-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultRLFNR_r16__measResult_r16__cellResults_r16, resultsCSI_RS_Cell_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasQuantityResults,
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
		"resultsCSI-RS-Cell-r16"
		},
};
static const int asn_MAP_cellResults_r16_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_cellResults_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellResults_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resultsSSB-Cell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resultsCSI-RS-Cell-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellResults_r16_specs_3 = {
	sizeof(struct MeasResultRLFNR_r16__measResult_r16__cellResults_r16),
	offsetof(struct MeasResultRLFNR_r16__measResult_r16__cellResults_r16, _asn_ctx),
	asn_MAP_cellResults_r16_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_cellResults_r16_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellResults_r16_3 = {
	"cellResults-r16",
	"cellResults-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_cellResults_r16_tags_3,
	sizeof(asn_DEF_cellResults_r16_tags_3)
		/sizeof(asn_DEF_cellResults_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellResults_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellResults_r16_tags_3)
		/sizeof(asn_DEF_cellResults_r16_tags_3[0]), /* 2 */
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
	asn_MBR_cellResults_r16_3,
	2,	/* Elements count */
	&asn_SPC_cellResults_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rsIndexResults_r16_6[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16, resultsSSB_Indexes_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResultsPerSSB_IndexList,
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
		"resultsSSB-Indexes-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16, ssbRLMConfigBitmap_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ssbRLMConfigBitmap_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ssbRLMConfigBitmap_r16_constraint_6
		},
		0, 0, /* No default value */
		"ssbRLMConfigBitmap-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16, resultsCSI_RS_Indexes_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResultsPerCSI_RS_IndexList,
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
		"resultsCSI-RS-Indexes-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16, csi_rsRLMConfigBitmap_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_csi_rsRLMConfigBitmap_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_csi_rsRLMConfigBitmap_r16_constraint_6
		},
		0, 0, /* No default value */
		"csi-rsRLMConfigBitmap-r16"
		},
};
static const int asn_MAP_rsIndexResults_r16_oms_6[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_rsIndexResults_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rsIndexResults_r16_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resultsSSB-Indexes-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssbRLMConfigBitmap-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resultsCSI-RS-Indexes-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* csi-rsRLMConfigBitmap-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rsIndexResults_r16_specs_6 = {
	sizeof(struct MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16),
	offsetof(struct MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16, _asn_ctx),
	asn_MAP_rsIndexResults_r16_tag2el_6,
	4,	/* Count of tags in the map */
	asn_MAP_rsIndexResults_r16_oms_6,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rsIndexResults_r16_6 = {
	"rsIndexResults-r16",
	"rsIndexResults-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_rsIndexResults_r16_tags_6,
	sizeof(asn_DEF_rsIndexResults_r16_tags_6)
		/sizeof(asn_DEF_rsIndexResults_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_rsIndexResults_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_rsIndexResults_r16_tags_6)
		/sizeof(asn_DEF_rsIndexResults_r16_tags_6[0]), /* 2 */
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
	asn_MBR_rsIndexResults_r16_6,
	4,	/* Elements count */
	&asn_SPC_rsIndexResults_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultRLFNR_r16__measResult_r16, cellResults_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellResults_r16_3,
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
		"cellResults-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultRLFNR_r16__measResult_r16, rsIndexResults_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rsIndexResults_r16_6,
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
		"rsIndexResults-r16"
		},
};
static const int asn_MAP_measResult_r16_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_measResult_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResult_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellResults-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsIndexResults-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_r16_specs_2 = {
	sizeof(struct MeasResultRLFNR_r16__measResult_r16),
	offsetof(struct MeasResultRLFNR_r16__measResult_r16, _asn_ctx),
	asn_MAP_measResult_r16_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_measResult_r16_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_r16_2 = {
	"measResult-r16",
	"measResult-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_measResult_r16_tags_2,
	sizeof(asn_DEF_measResult_r16_tags_2)
		/sizeof(asn_DEF_measResult_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_measResult_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_measResult_r16_tags_2)
		/sizeof(asn_DEF_measResult_r16_tags_2[0]), /* 2 */
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
	asn_MBR_measResult_r16_2,
	2,	/* Elements count */
	&asn_SPC_measResult_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultRLFNR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultRLFNR_r16, measResult_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_measResult_r16_2,
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
		"measResult-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasResultRLFNR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultRLFNR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResult-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultRLFNR_r16_specs_1 = {
	sizeof(struct MeasResultRLFNR_r16),
	offsetof(struct MeasResultRLFNR_r16, _asn_ctx),
	asn_MAP_MeasResultRLFNR_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultRLFNR_r16 = {
	"MeasResultRLFNR-r16",
	"MeasResultRLFNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultRLFNR_r16_tags_1,
	sizeof(asn_DEF_MeasResultRLFNR_r16_tags_1)
		/sizeof(asn_DEF_MeasResultRLFNR_r16_tags_1[0]), /* 1 */
	asn_DEF_MeasResultRLFNR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultRLFNR_r16_tags_1)
		/sizeof(asn_DEF_MeasResultRLFNR_r16_tags_1[0]), /* 1 */
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
	asn_MBR_MeasResultRLFNR_r16_1,
	1,	/* Elements count */
	&asn_SPC_MeasResultRLFNR_r16_specs_1	/* Additional specs */
};
