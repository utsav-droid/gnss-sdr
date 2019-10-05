/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "GPSTOWAssistElement.h"

static asn_TYPE_member_t asn_MBR_GPSTOWAssistElement_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct GPSTOWAssistElement, satelliteID),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SatelliteID,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "satelliteID"
        },
    { ATF_NOFLAGS, 0, offsetof(struct GPSTOWAssistElement, tlmWord),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_TLMWord,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "tlmWord"
        },
    { ATF_NOFLAGS, 0, offsetof(struct GPSTOWAssistElement, antiSpoof),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_AntiSpoofFlag,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "antiSpoof"
        },
    { ATF_NOFLAGS, 0, offsetof(struct GPSTOWAssistElement, alert),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_AlertFlag,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "alert"
        },
    { ATF_NOFLAGS, 0, offsetof(struct GPSTOWAssistElement, tlmRsvdBits),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_TLMReservedBits,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "tlmRsvdBits"
        },
};
static ber_tlv_tag_t asn_DEF_GPSTOWAssistElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GPSTOWAssistElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* satelliteID at 610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tlmWord at 611 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* antiSpoof at 612 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alert at 613 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* tlmRsvdBits at 615 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GPSTOWAssistElement_specs_1 = {
    sizeof(struct GPSTOWAssistElement),
    offsetof(struct GPSTOWAssistElement, _asn_ctx),
    asn_MAP_GPSTOWAssistElement_tag2el_1,
    5,    /* Count of tags in the map */
    0, 0, 0,    /* Optional elements (not needed) */
    -1,    /* Start extensions */
    -1    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GPSTOWAssistElement = {
    "GPSTOWAssistElement",
    "GPSTOWAssistElement",
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
    asn_DEF_GPSTOWAssistElement_tags_1,
    sizeof(asn_DEF_GPSTOWAssistElement_tags_1)
        /sizeof(asn_DEF_GPSTOWAssistElement_tags_1[0]), /* 1 */
    asn_DEF_GPSTOWAssistElement_tags_1,    /* Same as above */
    sizeof(asn_DEF_GPSTOWAssistElement_tags_1)
        /sizeof(asn_DEF_GPSTOWAssistElement_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_GPSTOWAssistElement_1,
    5,    /* Elements count */
    &asn_SPC_GPSTOWAssistElement_specs_1    /* Additional specs */
};

