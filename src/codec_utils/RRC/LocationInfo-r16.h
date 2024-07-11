/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_LocationInfo_r16_H_
#define	_LocationInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommonLocationInfo_r16;
struct LogMeasResultListBT_r16;
struct LogMeasResultListWLAN_r16;
struct Sensor_LocationInfo_r16;

/* LocationInfo-r16 */
typedef struct LocationInfo_r16 {
	struct CommonLocationInfo_r16	*commonLocationInfo_r16;	/* OPTIONAL */
	struct LogMeasResultListBT_r16	*bt_LocationInfo_r16;	/* OPTIONAL */
	struct LogMeasResultListWLAN_r16	*wlan_LocationInfo_r16;	/* OPTIONAL */
	struct Sensor_LocationInfo_r16	*sensor_LocationInfo_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationInfo_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationInfo_r16_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommonLocationInfo-r16.h"
#include "LogMeasResultListBT-r16.h"
#include "LogMeasResultListWLAN-r16.h"
#include "Sensor-LocationInfo-r16.h"

#endif	/* _LocationInfo_r16_H_ */
#include <asn_internal.h>