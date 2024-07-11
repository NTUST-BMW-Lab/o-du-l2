/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "UplinkTxDirectCurrentTwoCarrier-r16.h"

asn_TYPE_member_t asn_MBR_UplinkTxDirectCurrentTwoCarrier_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkTxDirectCurrentTwoCarrier_r16, carrierOneInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkTxDirectCurrentCarrierInfo_r16,
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
		"carrierOneInfo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkTxDirectCurrentTwoCarrier_r16, carrierTwoInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkTxDirectCurrentCarrierInfo_r16,
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
		"carrierTwoInfo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkTxDirectCurrentTwoCarrier_r16, singlePA_TxDirectCurrent_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkTxDirectCurrentTwoCarrierInfo_r16,
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
		"singlePA-TxDirectCurrent-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkTxDirectCurrentTwoCarrier_r16, secondPA_TxDirectCurrent_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkTxDirectCurrentTwoCarrierInfo_r16,
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
		"secondPA-TxDirectCurrent-r16"
		},
};
static const int asn_MAP_UplinkTxDirectCurrentTwoCarrier_r16_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkTxDirectCurrentTwoCarrier_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierOneInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierTwoInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* singlePA-TxDirectCurrent-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* secondPA-TxDirectCurrent-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkTxDirectCurrentTwoCarrier_r16_specs_1 = {
	sizeof(struct UplinkTxDirectCurrentTwoCarrier_r16),
	offsetof(struct UplinkTxDirectCurrentTwoCarrier_r16, _asn_ctx),
	asn_MAP_UplinkTxDirectCurrentTwoCarrier_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UplinkTxDirectCurrentTwoCarrier_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16 = {
	"UplinkTxDirectCurrentTwoCarrier-r16",
	"UplinkTxDirectCurrentTwoCarrier-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1,
	sizeof(asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1)
		/sizeof(asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1[0]), /* 1 */
	asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1)
		/sizeof(asn_DEF_UplinkTxDirectCurrentTwoCarrier_r16_tags_1[0]), /* 1 */
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
	asn_MBR_UplinkTxDirectCurrentTwoCarrier_r16_1,
	4,	/* Elements count */
	&asn_SPC_UplinkTxDirectCurrentTwoCarrier_r16_specs_1	/* Additional specs */
};
