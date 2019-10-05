/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _Rel98_MsrPosition_Req_Extension_H_
#define _Rel98_MsrPosition_Req_Extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "GPSReferenceTimeUncertainty.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct Rel98_Ext_ExpOTD;

    /* Rel98-MsrPosition-Req-Extension */
    typedef struct Rel98_MsrPosition_Req_Extension
    {
        struct Rel98_Ext_ExpOTD *rel98_Ext_ExpOTD /* OPTIONAL */;
        /*
     * This type is extensible,
     * possible extensions are below.
     */
        NULL_t *gpsTimeAssistanceMeasurementRequest /* OPTIONAL */;
        GPSReferenceTimeUncertainty_t *gpsReferenceTimeUncertainty /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } Rel98_MsrPosition_Req_Extension_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_Rel98_MsrPosition_Req_Extension;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Rel98-Ext-ExpOTD.h"

#endif /* _Rel98_MsrPosition_Req_Extension_H_ */
#include <asn_internal.h>
