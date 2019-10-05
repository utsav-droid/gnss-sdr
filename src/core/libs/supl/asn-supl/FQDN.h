/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "../supl-common.asn"
 */

#ifndef _FQDN_H_
#define _FQDN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* FQDN */
    typedef VisibleString_t FQDN_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_FQDN;
    asn_struct_free_f FQDN_free;
    asn_struct_print_f FQDN_print;
    asn_constr_check_f FQDN_constraint;
    ber_type_decoder_f FQDN_decode_ber;
    der_type_encoder_f FQDN_encode_der;
    xer_type_decoder_f FQDN_decode_xer;
    xer_type_encoder_f FQDN_encode_xer;
    per_type_decoder_f FQDN_decode_uper;
    per_type_encoder_f FQDN_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _FQDN_H_ */
#include <asn_internal.h>
