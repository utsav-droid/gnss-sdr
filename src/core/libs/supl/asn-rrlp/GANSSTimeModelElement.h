/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _GANSSTimeModelElement_H_
#define _GANSSTimeModelElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "TA0.h"
#include "TA1.h"
#include "TA2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GANSSTimeModelElement */
    typedef struct GANSSTimeModelElement
    {
        long ganssTimeModelRefTime;
        TA0_t tA0;
        TA1_t *tA1 /* OPTIONAL */;
        TA2_t *tA2 /* OPTIONAL */;
        long gnssTOID;
        long *weekNumber /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSTimeModelElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSTimeModelElement;

#ifdef __cplusplus
}
#endif

#endif /* _GANSSTimeModelElement_H_ */
#include <asn_internal.h>
