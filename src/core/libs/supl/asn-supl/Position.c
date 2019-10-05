/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "../supl-common.asn"
 */

#include "Position.h"

static asn_TYPE_member_t asn_MBR_Position_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct Position, timestamp),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_UTCTime,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "timestamp"
        },
    { ATF_NOFLAGS, 0, offsetof(struct Position, positionEstimate),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_PositionEstimate,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "positionEstimate"
        },
    { ATF_POINTER, 1, offsetof(struct Position, velocity),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        +1,    /* EXPLICIT tag at current level */
        &asn_DEF_Velocity,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "velocity"
        },
};
static int asn_MAP_Position_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_Position_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Position_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timestamp at 67 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* positionEstimate at 68 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* velocity at 69 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Position_specs_1 = {
    sizeof(struct Position),
    offsetof(struct Position, _asn_ctx),
    asn_MAP_Position_tag2el_1,
    3,    /* Count of tags in the map */
    asn_MAP_Position_oms_1,    /* Optional members */
    1, 0,    /* Root/Additions */
    2,    /* Start extensions */
    4    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Position = {
    "Position",
    "Position",
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
    asn_DEF_Position_tags_1,
    sizeof(asn_DEF_Position_tags_1)
        /sizeof(asn_DEF_Position_tags_1[0]), /* 1 */
    asn_DEF_Position_tags_1,    /* Same as above */
    sizeof(asn_DEF_Position_tags_1)
        /sizeof(asn_DEF_Position_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_Position_1,
    3,    /* Elements count */
    &asn_SPC_Position_specs_1    /* Additional specs */
};

