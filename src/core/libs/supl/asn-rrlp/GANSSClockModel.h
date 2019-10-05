/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _GANSSClockModel_H_
#define _GANSSClockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SeqOfStandardClockModelElement.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum GANSSClockModel_PR
    {
        GANSSClockModel_PR_NOTHING, /* No components present */
        GANSSClockModel_PR_standardClockModelList,
        /* Extensions may appear below */
    } GANSSClockModel_PR;

    /* GANSSClockModel */
    typedef struct GANSSClockModel
    {
        GANSSClockModel_PR present;
        union GANSSClockModel_u
        {
            SeqOfStandardClockModelElement_t standardClockModelList;
            /*
         * This type is extensible,
         * possible extensions are below.
         */
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSClockModel_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSClockModel;

#ifdef __cplusplus
}
#endif

#endif /* _GANSSClockModel_H_ */
#include <asn_internal.h>
