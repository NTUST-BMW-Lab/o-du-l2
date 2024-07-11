/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_WLAN_RTT_r16_H_
#define	_WLAN_RTT_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_RTT_r16__rttUnits_r16 {
	WLAN_RTT_r16__rttUnits_r16_microseconds	= 0,
	WLAN_RTT_r16__rttUnits_r16_hundredsofnanoseconds	= 1,
	WLAN_RTT_r16__rttUnits_r16_tensofnanoseconds	= 2,
	WLAN_RTT_r16__rttUnits_r16_nanoseconds	= 3,
	WLAN_RTT_r16__rttUnits_r16_tenthsofnanoseconds	= 4
	/*
	 * Enumeration is extensible
	 */
} e_WLAN_RTT_r16__rttUnits_r16;

/* WLAN-RTT-r16 */
typedef struct WLAN_RTT_r16 {
	long	 rttValue_r16;
	long	 rttUnits_r16;
	long	*rttAccuracy_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_RTT_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rttUnits_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_RTT_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_RTT_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_RTT_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_RTT_r16_H_ */
#include <asn_internal.h>