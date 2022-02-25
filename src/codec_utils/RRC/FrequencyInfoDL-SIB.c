/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "FrequencyInfoDL-SIB.h"

#include "SCS-SpecificCarrier.h"
static int
memb_offsetToPointA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2199)) {
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
memb_scs_SpecificCarrierList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_scs_SpecificCarrierList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..5)) */};
static asn_per_constraints_t asn_PER_type_scs_SpecificCarrierList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_offsetToPointA_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..2199) */,
	-1};
static asn_per_constraints_t asn_PER_memb_offsetToPointA_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  2199 }	/* (0..2199) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_scs_SpecificCarrierList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..5)) */};
static asn_per_constraints_t asn_PER_memb_scs_SpecificCarrierList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_scs_SpecificCarrierList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SCS_SpecificCarrier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_scs_SpecificCarrierList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_scs_SpecificCarrierList_specs_4 = {
	sizeof(struct FrequencyInfoDL_SIB__scs_SpecificCarrierList),
	offsetof(struct FrequencyInfoDL_SIB__scs_SpecificCarrierList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_SpecificCarrierList_4 = {
	"scs-SpecificCarrierList",
	"scs-SpecificCarrierList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_scs_SpecificCarrierList_tags_4,
	sizeof(asn_DEF_scs_SpecificCarrierList_tags_4)
		/sizeof(asn_DEF_scs_SpecificCarrierList_tags_4[0]) - 1, /* 1 */
	asn_DEF_scs_SpecificCarrierList_tags_4,	/* Same as above */
	sizeof(asn_DEF_scs_SpecificCarrierList_tags_4)
		/sizeof(asn_DEF_scs_SpecificCarrierList_tags_4[0]), /* 2 */
	{ &asn_OER_type_scs_SpecificCarrierList_constr_4, &asn_PER_type_scs_SpecificCarrierList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_scs_SpecificCarrierList_4,
	1,	/* Single element */
	&asn_SPC_scs_SpecificCarrierList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FrequencyInfoDL_SIB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FrequencyInfoDL_SIB, frequencyBandList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR_SIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyBandList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FrequencyInfoDL_SIB, offsetToPointA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_offsetToPointA_constr_3, &asn_PER_memb_offsetToPointA_constr_3,  memb_offsetToPointA_constraint_1 },
		0, 0, /* No default value */
		"offsetToPointA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FrequencyInfoDL_SIB, scs_SpecificCarrierList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_scs_SpecificCarrierList_4,
		0,
		{ &asn_OER_memb_scs_SpecificCarrierList_constr_4, &asn_PER_memb_scs_SpecificCarrierList_constr_4,  memb_scs_SpecificCarrierList_constraint_1 },
		0, 0, /* No default value */
		"scs-SpecificCarrierList"
		},
};
static const ber_tlv_tag_t asn_DEF_FrequencyInfoDL_SIB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FrequencyInfoDL_SIB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyBandList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetToPointA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* scs-SpecificCarrierList */
};
asn_SEQUENCE_specifics_t asn_SPC_FrequencyInfoDL_SIB_specs_1 = {
	sizeof(struct FrequencyInfoDL_SIB),
	offsetof(struct FrequencyInfoDL_SIB, _asn_ctx),
	asn_MAP_FrequencyInfoDL_SIB_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FrequencyInfoDL_SIB = {
	"FrequencyInfoDL-SIB",
	"FrequencyInfoDL-SIB",
	&asn_OP_SEQUENCE,
	asn_DEF_FrequencyInfoDL_SIB_tags_1,
	sizeof(asn_DEF_FrequencyInfoDL_SIB_tags_1)
		/sizeof(asn_DEF_FrequencyInfoDL_SIB_tags_1[0]), /* 1 */
	asn_DEF_FrequencyInfoDL_SIB_tags_1,	/* Same as above */
	sizeof(asn_DEF_FrequencyInfoDL_SIB_tags_1)
		/sizeof(asn_DEF_FrequencyInfoDL_SIB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FrequencyInfoDL_SIB_1,
	3,	/* Elements count */
	&asn_SPC_FrequencyInfoDL_SIB_specs_1	/* Additional specs */
};

