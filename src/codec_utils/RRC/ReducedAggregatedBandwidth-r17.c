/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "ReducedAggregatedBandwidth-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ReducedAggregatedBandwidth_r17_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_ReducedAggregatedBandwidth_r17_value2enum_1[] = {
	{ 0,	4,	"mhz0" },
	{ 1,	6,	"mhz100" },
	{ 2,	6,	"mhz200" },
	{ 3,	6,	"mhz400" },
	{ 4,	6,	"mhz800" },
	{ 5,	7,	"mhz1200" },
	{ 6,	7,	"mhz1600" },
	{ 7,	7,	"mhz2000" }
};
static const unsigned int asn_MAP_ReducedAggregatedBandwidth_r17_enum2value_1[] = {
	0,	/* mhz0(0) */
	1,	/* mhz100(1) */
	5,	/* mhz1200(5) */
	6,	/* mhz1600(6) */
	2,	/* mhz200(2) */
	7,	/* mhz2000(7) */
	3,	/* mhz400(3) */
	4	/* mhz800(4) */
};
const asn_INTEGER_specifics_t asn_SPC_ReducedAggregatedBandwidth_r17_specs_1 = {
	asn_MAP_ReducedAggregatedBandwidth_r17_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReducedAggregatedBandwidth_r17_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ReducedAggregatedBandwidth_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReducedAggregatedBandwidth_r17 = {
	"ReducedAggregatedBandwidth-r17",
	"ReducedAggregatedBandwidth-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_ReducedAggregatedBandwidth_r17_tags_1,
	sizeof(asn_DEF_ReducedAggregatedBandwidth_r17_tags_1)
		/sizeof(asn_DEF_ReducedAggregatedBandwidth_r17_tags_1[0]), /* 1 */
	asn_DEF_ReducedAggregatedBandwidth_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReducedAggregatedBandwidth_r17_tags_1)
		/sizeof(asn_DEF_ReducedAggregatedBandwidth_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ReducedAggregatedBandwidth_r17_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReducedAggregatedBandwidth_r17_specs_1	/* Additional specs */
};
