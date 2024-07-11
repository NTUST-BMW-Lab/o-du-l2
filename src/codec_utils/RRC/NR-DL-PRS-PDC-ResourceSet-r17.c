/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "NR-DL-PRS-PDC-ResourceSet-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_dl_PRS_ResourceBandwidth_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 63L)) {
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
memb_dl_PRS_StartPRB_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2176L)) {
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
memb_resourceList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_numSymbols_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_resourceList_r17_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dl_PRS_ResourceBandwidth_r17_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dl_PRS_StartPRB_r17_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  2176 }	/* (0..2176) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_resourceList_r17_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_numSymbols_r17_value2enum_3[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	3,	"n12" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_numSymbols_r17_enum2value_3[] = {
	3,	/* n12(3) */
	0,	/* n2(0) */
	1,	/* n4(1) */
	2,	/* n6(2) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_numSymbols_r17_specs_3 = {
	asn_MAP_numSymbols_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_numSymbols_r17_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numSymbols_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numSymbols_r17_3 = {
	"numSymbols-r17",
	"numSymbols-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_numSymbols_r17_tags_3,
	sizeof(asn_DEF_numSymbols_r17_tags_3)
		/sizeof(asn_DEF_numSymbols_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_numSymbols_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_numSymbols_r17_tags_3)
		/sizeof(asn_DEF_numSymbols_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_numSymbols_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numSymbols_r17_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_resourceList_r17_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_DL_PRS_Resource_r17,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_resourceList_r17_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_resourceList_r17_specs_14 = {
	sizeof(struct NR_DL_PRS_PDC_ResourceSet_r17__resourceList_r17),
	offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17__resourceList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceList_r17_14 = {
	"resourceList-r17",
	"resourceList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_resourceList_r17_tags_14,
	sizeof(asn_DEF_resourceList_r17_tags_14)
		/sizeof(asn_DEF_resourceList_r17_tags_14[0]) - 1, /* 1 */
	asn_DEF_resourceList_r17_tags_14,	/* Same as above */
	sizeof(asn_DEF_resourceList_r17_tags_14)
		/sizeof(asn_DEF_resourceList_r17_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_resourceList_r17_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_resourceList_r17_14,
	1,	/* Single element */
	&asn_SPC_resourceList_r17_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DL_PRS_PDC_ResourceSet_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, periodicityAndOffset_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17,
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
		"periodicityAndOffset-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, numSymbols_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numSymbols_r17_3,
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
		"numSymbols-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, dl_PRS_ResourceBandwidth_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dl_PRS_ResourceBandwidth_r17_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_dl_PRS_ResourceBandwidth_r17_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-ResourceBandwidth-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, dl_PRS_StartPRB_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dl_PRS_StartPRB_r17_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_dl_PRS_StartPRB_r17_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-StartPRB-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, resourceList_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_resourceList_r17_14,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_resourceList_r17_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_resourceList_r17_constraint_1
		},
		0, 0, /* No default value */
		"resourceList-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, repFactorAndTimeGap_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RepFactorAndTimeGap_r17,
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
		"repFactorAndTimeGap-r17"
		},
};
static const int asn_MAP_NR_DL_PRS_PDC_ResourceSet_r17_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_PRS_PDC_ResourceSet_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicityAndOffset-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numSymbols-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-PRS-ResourceBandwidth-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-PRS-StartPRB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* resourceList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* repFactorAndTimeGap-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_PDC_ResourceSet_r17_specs_1 = {
	sizeof(struct NR_DL_PRS_PDC_ResourceSet_r17),
	offsetof(struct NR_DL_PRS_PDC_ResourceSet_r17, _asn_ctx),
	asn_MAP_NR_DL_PRS_PDC_ResourceSet_r17_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_DL_PRS_PDC_ResourceSet_r17_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17 = {
	"NR-DL-PRS-PDC-ResourceSet-r17",
	"NR-DL-PRS-PDC-ResourceSet-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1,
	sizeof(asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_PDC_ResourceSet_r17_tags_1[0]), /* 1 */
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
	asn_MBR_NR_DL_PRS_PDC_ResourceSet_r17_1,
	6,	/* Elements count */
	&asn_SPC_NR_DL_PRS_PDC_ResourceSet_r17_specs_1	/* Additional specs */
};
