/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "../../../rrc_15.3_asn.asn1"
 * 	`asn1c -D ./25_02_2022_RRC/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "DRX-Info.h"

static int
memb_ms10_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_ms20_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_ms32_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_ms40_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_ms60_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 59)) {
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
memb_ms64_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
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
memb_ms70_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 69)) {
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
memb_ms80_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
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
memb_ms128_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
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
memb_ms160_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
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
memb_ms256_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_ms320_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
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
memb_ms512_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_ms640_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
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
memb_ms1024_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_ms1280_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
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
memb_ms2048_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_ms2560_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2559)) {
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
memb_ms5120_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 5119)) {
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
memb_ms10240_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10239)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_drx_ShortCycleTimer_constraint_23(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ms10_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..9) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms20_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..19) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms20_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms32_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms32_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms40_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..39) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms40_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms60_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (0..59) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms60_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  59 }	/* (0..59) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms64_constr_8 CC_NOTUSED = {
	{ 1, 1 }	/* (0..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms64_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms70_constr_9 CC_NOTUSED = {
	{ 1, 1 }	/* (0..69) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms70_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  69 }	/* (0..69) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms80_constr_10 CC_NOTUSED = {
	{ 1, 1 }	/* (0..79) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms80_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms128_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (0..127) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms128_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms160_constr_12 CC_NOTUSED = {
	{ 1, 1 }	/* (0..159) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms160_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms256_constr_13 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms256_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms320_constr_14 CC_NOTUSED = {
	{ 2, 1 }	/* (0..319) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms320_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms512_constr_15 CC_NOTUSED = {
	{ 2, 1 }	/* (0..511) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms512_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms640_constr_16 CC_NOTUSED = {
	{ 2, 1 }	/* (0..639) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms640_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms1024_constr_17 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms1024_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms1280_constr_18 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1279) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms1280_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms2048_constr_19 CC_NOTUSED = {
	{ 2, 1 }	/* (0..2047) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms2048_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms2560_constr_20 CC_NOTUSED = {
	{ 2, 1 }	/* (0..2559) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms2560_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  2559 }	/* (0..2559) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms5120_constr_21 CC_NOTUSED = {
	{ 2, 1 }	/* (0..5119) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms5120_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  5119 }	/* (0..5119) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ms10240_constr_22 CC_NOTUSED = {
	{ 2, 1 }	/* (0..10239) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ms10240_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  0,  10239 }	/* (0..10239) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_drx_LongCycleStartOffset_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_drx_LongCycleStartOffset_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_drx_ShortCycle_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_drx_ShortCycle_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_drx_ShortCycleTimer_constr_57 CC_NOTUSED = {
	{ 1, 1 }	/* (1..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_drx_ShortCycleTimer_constr_57 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_drx_LongCycleStartOffset_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms10_constr_3, &asn_PER_memb_ms10_constr_3,  memb_ms10_constraint_2 },
		0, 0, /* No default value */
		"ms10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms20),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms20_constr_4, &asn_PER_memb_ms20_constr_4,  memb_ms20_constraint_2 },
		0, 0, /* No default value */
		"ms20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms32),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms32_constr_5, &asn_PER_memb_ms32_constr_5,  memb_ms32_constraint_2 },
		0, 0, /* No default value */
		"ms32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms40_constr_6, &asn_PER_memb_ms40_constr_6,  memb_ms40_constraint_2 },
		0, 0, /* No default value */
		"ms40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms60),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms60_constr_7, &asn_PER_memb_ms60_constr_7,  memb_ms60_constraint_2 },
		0, 0, /* No default value */
		"ms60"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms64),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms64_constr_8, &asn_PER_memb_ms64_constr_8,  memb_ms64_constraint_2 },
		0, 0, /* No default value */
		"ms64"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms70),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms70_constr_9, &asn_PER_memb_ms70_constr_9,  memb_ms70_constraint_2 },
		0, 0, /* No default value */
		"ms70"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms80),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms80_constr_10, &asn_PER_memb_ms80_constr_10,  memb_ms80_constraint_2 },
		0, 0, /* No default value */
		"ms80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms128),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms128_constr_11, &asn_PER_memb_ms128_constr_11,  memb_ms128_constraint_2 },
		0, 0, /* No default value */
		"ms128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms160),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms160_constr_12, &asn_PER_memb_ms160_constr_12,  memb_ms160_constraint_2 },
		0, 0, /* No default value */
		"ms160"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms256),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms256_constr_13, &asn_PER_memb_ms256_constr_13,  memb_ms256_constraint_2 },
		0, 0, /* No default value */
		"ms256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms320),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms320_constr_14, &asn_PER_memb_ms320_constr_14,  memb_ms320_constraint_2 },
		0, 0, /* No default value */
		"ms320"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms512),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms512_constr_15, &asn_PER_memb_ms512_constr_15,  memb_ms512_constraint_2 },
		0, 0, /* No default value */
		"ms512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms640),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms640_constr_16, &asn_PER_memb_ms640_constr_16,  memb_ms640_constraint_2 },
		0, 0, /* No default value */
		"ms640"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms1024),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms1024_constr_17, &asn_PER_memb_ms1024_constr_17,  memb_ms1024_constraint_2 },
		0, 0, /* No default value */
		"ms1024"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms1280),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms1280_constr_18, &asn_PER_memb_ms1280_constr_18,  memb_ms1280_constraint_2 },
		0, 0, /* No default value */
		"ms1280"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms2048),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms2048_constr_19, &asn_PER_memb_ms2048_constr_19,  memb_ms2048_constraint_2 },
		0, 0, /* No default value */
		"ms2048"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms2560),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms2560_constr_20, &asn_PER_memb_ms2560_constr_20,  memb_ms2560_constraint_2 },
		0, 0, /* No default value */
		"ms2560"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms5120),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms5120_constr_21, &asn_PER_memb_ms5120_constr_21,  memb_ms5120_constraint_2 },
		0, 0, /* No default value */
		"ms5120"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__drx_LongCycleStartOffset, choice.ms10240),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ms10240_constr_22, &asn_PER_memb_ms10240_constr_22,  memb_ms10240_constraint_2 },
		0, 0, /* No default value */
		"ms10240"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_drx_LongCycleStartOffset_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ms10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ms20 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ms32 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ms40 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ms60 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ms64 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ms70 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ms80 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ms128 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ms160 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ms256 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ms320 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ms512 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ms640 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ms1024 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ms1280 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* ms2048 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* ms2560 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* ms5120 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 } /* ms10240 */
};
static asn_CHOICE_specifics_t asn_SPC_drx_LongCycleStartOffset_specs_2 = {
	sizeof(struct DRX_Info__drx_LongCycleStartOffset),
	offsetof(struct DRX_Info__drx_LongCycleStartOffset, _asn_ctx),
	offsetof(struct DRX_Info__drx_LongCycleStartOffset, present),
	sizeof(((struct DRX_Info__drx_LongCycleStartOffset *)0)->present),
	asn_MAP_drx_LongCycleStartOffset_tag2el_2,
	20,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_LongCycleStartOffset_2 = {
	"drx-LongCycleStartOffset",
	"drx-LongCycleStartOffset",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_drx_LongCycleStartOffset_constr_2, &asn_PER_type_drx_LongCycleStartOffset_constr_2, CHOICE_constraint },
	asn_MBR_drx_LongCycleStartOffset_2,
	20,	/* Elements count */
	&asn_SPC_drx_LongCycleStartOffset_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_ShortCycle_value2enum_24[] = {
	{ 0,	3,	"ms2" },
	{ 1,	3,	"ms3" },
	{ 2,	3,	"ms4" },
	{ 3,	3,	"ms5" },
	{ 4,	3,	"ms6" },
	{ 5,	3,	"ms7" },
	{ 6,	3,	"ms8" },
	{ 7,	4,	"ms10" },
	{ 8,	4,	"ms14" },
	{ 9,	4,	"ms16" },
	{ 10,	4,	"ms20" },
	{ 11,	4,	"ms30" },
	{ 12,	4,	"ms32" },
	{ 13,	4,	"ms35" },
	{ 14,	4,	"ms40" },
	{ 15,	4,	"ms64" },
	{ 16,	4,	"ms80" },
	{ 17,	5,	"ms128" },
	{ 18,	5,	"ms160" },
	{ 19,	5,	"ms256" },
	{ 20,	5,	"ms320" },
	{ 21,	5,	"ms512" },
	{ 22,	5,	"ms640" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_drx_ShortCycle_enum2value_24[] = {
	7,	/* ms10(7) */
	17,	/* ms128(17) */
	8,	/* ms14(8) */
	9,	/* ms16(9) */
	18,	/* ms160(18) */
	0,	/* ms2(0) */
	10,	/* ms20(10) */
	19,	/* ms256(19) */
	1,	/* ms3(1) */
	11,	/* ms30(11) */
	12,	/* ms32(12) */
	20,	/* ms320(20) */
	13,	/* ms35(13) */
	2,	/* ms4(2) */
	14,	/* ms40(14) */
	3,	/* ms5(3) */
	21,	/* ms512(21) */
	4,	/* ms6(4) */
	15,	/* ms64(15) */
	22,	/* ms640(22) */
	5,	/* ms7(5) */
	6,	/* ms8(6) */
	16,	/* ms80(16) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_ShortCycle_specs_24 = {
	asn_MAP_drx_ShortCycle_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_ShortCycle_enum2value_24,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_ShortCycle_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_ShortCycle_24 = {
	"drx-ShortCycle",
	"drx-ShortCycle",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_ShortCycle_tags_24,
	sizeof(asn_DEF_drx_ShortCycle_tags_24)
		/sizeof(asn_DEF_drx_ShortCycle_tags_24[0]) - 1, /* 1 */
	asn_DEF_drx_ShortCycle_tags_24,	/* Same as above */
	sizeof(asn_DEF_drx_ShortCycle_tags_24)
		/sizeof(asn_DEF_drx_ShortCycle_tags_24[0]), /* 2 */
	{ &asn_OER_type_drx_ShortCycle_constr_24, &asn_PER_type_drx_ShortCycle_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_ShortCycle_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_shortDRX_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__shortDRX, drx_ShortCycle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_ShortCycle_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-ShortCycle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info__shortDRX, drx_ShortCycleTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_drx_ShortCycleTimer_constr_57, &asn_PER_memb_drx_ShortCycleTimer_constr_57,  memb_drx_ShortCycleTimer_constraint_23 },
		0, 0, /* No default value */
		"drx-ShortCycleTimer"
		},
};
static const ber_tlv_tag_t asn_DEF_shortDRX_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_shortDRX_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-ShortCycle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drx-ShortCycleTimer */
};
static asn_SEQUENCE_specifics_t asn_SPC_shortDRX_specs_23 = {
	sizeof(struct DRX_Info__shortDRX),
	offsetof(struct DRX_Info__shortDRX, _asn_ctx),
	asn_MAP_shortDRX_tag2el_23,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortDRX_23 = {
	"shortDRX",
	"shortDRX",
	&asn_OP_SEQUENCE,
	asn_DEF_shortDRX_tags_23,
	sizeof(asn_DEF_shortDRX_tags_23)
		/sizeof(asn_DEF_shortDRX_tags_23[0]) - 1, /* 1 */
	asn_DEF_shortDRX_tags_23,	/* Same as above */
	sizeof(asn_DEF_shortDRX_tags_23)
		/sizeof(asn_DEF_shortDRX_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_shortDRX_23,
	2,	/* Elements count */
	&asn_SPC_shortDRX_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRX_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Info, drx_LongCycleStartOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_drx_LongCycleStartOffset_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-LongCycleStartOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct DRX_Info, shortDRX),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_shortDRX_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortDRX"
		},
};
static const int asn_MAP_DRX_Info_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_DRX_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRX_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-LongCycleStartOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* shortDRX */
};
asn_SEQUENCE_specifics_t asn_SPC_DRX_Info_specs_1 = {
	sizeof(struct DRX_Info),
	offsetof(struct DRX_Info, _asn_ctx),
	asn_MAP_DRX_Info_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DRX_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRX_Info = {
	"DRX-Info",
	"DRX-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_DRX_Info_tags_1,
	sizeof(asn_DEF_DRX_Info_tags_1)
		/sizeof(asn_DEF_DRX_Info_tags_1[0]), /* 1 */
	asn_DEF_DRX_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRX_Info_tags_1)
		/sizeof(asn_DEF_DRX_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRX_Info_1,
	2,	/* Elements count */
	&asn_SPC_DRX_Info_specs_1	/* Additional specs */
};

