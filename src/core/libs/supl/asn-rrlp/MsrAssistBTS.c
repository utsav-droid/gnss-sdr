/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "MsrAssistBTS.h"

static asn_TYPE_member_t asn_MBR_MsrAssistBTS_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct MsrAssistBTS, bcchCarrier),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_BCCHCarrier,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "bcchCarrier"
        },
    { ATF_NOFLAGS, 0, offsetof(struct MsrAssistBTS, bsic),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_BSIC,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "bsic"
        },
    { ATF_NOFLAGS, 0, offsetof(struct MsrAssistBTS, multiFrameOffset),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_MultiFrameOffset,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "multiFrameOffset"
        },
    { ATF_NOFLAGS, 0, offsetof(struct MsrAssistBTS, timeSlotScheme),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_TimeSlotScheme,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "timeSlotScheme"
        },
    { ATF_NOFLAGS, 0, offsetof(struct MsrAssistBTS, roughRTD),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_RoughRTD,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "roughRTD"
        },
    { ATF_POINTER, 1, offsetof(struct MsrAssistBTS, calcAssistanceBTS),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_CalcAssistanceBTS,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "calcAssistanceBTS"
        },
};
static int asn_MAP_MsrAssistBTS_oms_1[] = { 5 };
static ber_tlv_tag_t asn_DEF_MsrAssistBTS_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MsrAssistBTS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bcchCarrier at 193 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bsic at 194 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* multiFrameOffset at 195 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeSlotScheme at 196 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* roughRTD at 197 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* calcAssistanceBTS at 200 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MsrAssistBTS_specs_1 = {
    sizeof(struct MsrAssistBTS),
    offsetof(struct MsrAssistBTS, _asn_ctx),
    asn_MAP_MsrAssistBTS_tag2el_1,
    6,    /* Count of tags in the map */
    asn_MAP_MsrAssistBTS_oms_1,    /* Optional members */
    1, 0,    /* Root/Additions */
    -1,    /* Start extensions */
    -1    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MsrAssistBTS = {
    "MsrAssistBTS",
    "MsrAssistBTS",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0,    /* Use generic outmost tag fetcher */
    asn_DEF_MsrAssistBTS_tags_1,
    sizeof(asn_DEF_MsrAssistBTS_tags_1)
        /sizeof(asn_DEF_MsrAssistBTS_tags_1[0]), /* 1 */
    asn_DEF_MsrAssistBTS_tags_1,    /* Same as above */
    sizeof(asn_DEF_MsrAssistBTS_tags_1)
        /sizeof(asn_DEF_MsrAssistBTS_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_MsrAssistBTS_1,
    6,    /* Elements count */
    &asn_SPC_MsrAssistBTS_specs_1    /* Additional specs */
};

