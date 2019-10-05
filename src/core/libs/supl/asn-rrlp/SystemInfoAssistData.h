/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _SystemInfoAssistData_H_
#define _SystemInfoAssistData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SeqOfSystemInfoAssistBTS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* SystemInfoAssistData */
    typedef struct SystemInfoAssistData
    {
        SeqOfSystemInfoAssistBTS_t systemInfoAssistList;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SystemInfoAssistData_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SystemInfoAssistData;

#ifdef __cplusplus
}
#endif

#endif /* _SystemInfoAssistData_H_ */
#include <asn_internal.h>
