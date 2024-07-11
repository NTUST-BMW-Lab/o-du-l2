/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_EventTriggerConfigNR_SL_r16_H_
#define	_EventTriggerConfigNR_SL_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportInterval.h"
#include <NativeEnumerated.h>
#include "MeasReportQuantity-r16.h"
#include "SL-CBR-r16.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventTriggerConfigNR_SL_r16__eventId_r16_PR {
	EventTriggerConfigNR_SL_r16__eventId_r16_PR_NOTHING,	/* No components present */
	EventTriggerConfigNR_SL_r16__eventId_r16_PR_eventC1,
	EventTriggerConfigNR_SL_r16__eventId_r16_PR_eventC2_r16
	/* Extensions may appear below */
	
} EventTriggerConfigNR_SL_r16__eventId_r16_PR;
typedef enum EventTriggerConfigNR_SL_r16__reportAmount_r16 {
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r1	= 0,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r2	= 1,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r4	= 2,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r8	= 3,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r16	= 4,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r32	= 5,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_r64	= 6,
	EventTriggerConfigNR_SL_r16__reportAmount_r16_infinity	= 7
} e_EventTriggerConfigNR_SL_r16__reportAmount_r16;

/* EventTriggerConfigNR-SL-r16 */
typedef struct EventTriggerConfigNR_SL_r16 {
	struct EventTriggerConfigNR_SL_r16__eventId_r16 {
		EventTriggerConfigNR_SL_r16__eventId_r16_PR present;
		union EventTriggerConfigNR_SL_r16__eventId_r16_u {
			struct EventTriggerConfigNR_SL_r16__eventId_r16__eventC1 {
				SL_CBR_r16_t	 c1_Threshold_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventC1;
			struct EventTriggerConfigNR_SL_r16__eventId_r16__eventC2_r16 {
				SL_CBR_r16_t	 c2_Threshold_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventC2_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} eventId_r16;
	ReportInterval_t	 reportInterval_r16;
	long	 reportAmount_r16;
	MeasReportQuantity_r16_t	 reportQuantity_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventTriggerConfigNR_SL_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_r16_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EventTriggerConfigNR_SL_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_EventTriggerConfigNR_SL_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_EventTriggerConfigNR_SL_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EventTriggerConfigNR_SL_r16_H_ */
#include <asn_internal.h>