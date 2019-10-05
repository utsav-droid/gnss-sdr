/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _VelocityEstimate_H_
#define _VelocityEstimate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* VelocityEstimate */
    typedef INTEGER_t VelocityEstimate_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_VelocityEstimate;
    asn_struct_free_f VelocityEstimate_free;
    asn_struct_print_f VelocityEstimate_print;
    asn_constr_check_f VelocityEstimate_constraint;
    ber_type_decoder_f VelocityEstimate_decode_ber;
    der_type_encoder_f VelocityEstimate_encode_der;
    xer_type_decoder_f VelocityEstimate_decode_xer;
    xer_type_encoder_f VelocityEstimate_encode_xer;
    per_type_decoder_f VelocityEstimate_decode_uper;
    per_type_encoder_f VelocityEstimate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _VelocityEstimate_H_ */
#include <asn_internal.h>
