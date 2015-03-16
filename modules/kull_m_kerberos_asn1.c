/*************************************************************/
/* Copyright (C) 2015 OSS Nokalva, Inc.  All rights reserved.*/
/*************************************************************/

/* THIS FILE IS PROPRIETARY MATERIAL OF OSS NOKALVA, INC.
 * AND MAY BE USED ONLY BY DIRECT LICENSEES OF OSS NOKALVA, INC.
 * THIS FILE MAY NOT BE DISTRIBUTED.
 * THIS COPYRIGHT STATEMENT MAY NOT BE REMOVED. */

/* Generated for: Benjamin Delpy 'gentilkiwi', Montreuil, France - Timelocked Tools expiring March 16, 2016, License 70098TT 70098TT. */
/* Abstract syntax: kull_m_kerberos_asn1 */
/* Created: Sun Mar 15 17:51:58 2015 */
/* ASN.1 compiler version: 10.1 */
/* Code generated for runtime version 10.1 or later */
/* Compiler operating system: Windows */
/* Compiler machine type: Intel x86 */
/* Target operating system: Windows */
/* Target machine type: Intel x86 */
/* C compiler options required: -Zp8 (Microsoft) */
/* ASN.1 compiler options and file names specified:
 * -der -root -messageFormat msvc
 * C:/security/kekeo/modules/kull_m_kerberos_asn1.asn
 */

#define OSS_COMPILER_API_LEVEL 32
#define _OSS_CODE_FILE
#define    OSS_TOED_BER
#include   "osstype.h"
#include   "kull_m_kerberos_asn1.h"

#undef CDECL_ENTRY
#undef CDECL_ENTRY_FDEF
#define CDECL_ENTRY      __cdecl
#define CDECL_ENTRY_FDEF __cdecl
#if OSSDEBUG > 1
#define OSS_CNTX_INIT _Context_Element _element;  _element._occurrence = 0;
#define OSS_CNTX_INITZERO _Context_Element _element = {NULL, NULL, 0};
#define OSS_CNTX_ZEROOCC  _element._occurrence = 0;
#define OSS_CNTX_INCOCC  _element._occurrence++;
#define OSS_CNTX_SETOCC(OCC) _element._occurrence = OCC;
#define OSS_CNTX_DEF _Context_Element _element;
#define OSS_CNTX_POP(OSSCNAME) OSSCNAME->_oss_context_anchor._last = _element._parent;
#define OSS_CNTX_PUSH(OSSCNAME,CNTXID) _element._id = (_Context_Id *)&_context_id[CNTXID];\
    _element._parent = OSSCNAME->_oss_context_anchor._last;\
    OSSCNAME->_oss_context_anchor._last = &_element;
#define OSS_CNTX_SET(CNTXID) _element._id = (_Context_Id *)&_context_id[CNTXID];
#define OSS_CNTX_NEW(OSSCNAME,CNTXID) _Context_Element _element;\
    _element._occurrence = 0;\
    _element._id = (_Context_Id *)&_context_id[CNTXID];\
    _element._parent = OSSCNAME->_oss_context_anchor._last;\
    OSSCNAME->_oss_context_anchor._last = &_element;
#define OSS_CNTX_ANCHOR_SET(PDU,CNTXID) \
    _element._parent = _oss_c->_oss_context_anchor._last;\
    _element._id = (_Context_Id *)&_context_id[CNTXID];\
    _oss_c->_oss_context_anchor._last = &_element;\
    if (!_oss_c->_oss_context_anchor._pdu_number) {\
        _oss_c->_oss_context_anchor._pdu_number = PDU;\
        _oss_c->_oss_context_anchor._pdu_id = _element._id;\
    }
#define OSS_CNTX_OSSC_DEF _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#else
#define OSS_CNTX_INIT
#define OSS_CNTX_INITZERO
#define OSS_CNTX_ZEROOCC
#define OSS_CNTX_INCOCC
#define OSS_CNTX_SETOCC(OCC)
#define OSS_CNTX_DEF
#define OSS_CNTX_POP(OSSCNAME)
#define OSS_CNTX_PUSH(OSSCNAME,CNTXID)
#define OSS_CNTX_SET(CNTXID)
#define OSS_CNTX_NEW(OSSCNAME,CNTXID)
#define OSS_CNTX_ANCHOR_SET(PDU,CNTXID) _oss_c->_oss_context_anchor._pdu_number = 0;
#endif
#ifndef _OSSNOVALUES

static unsigned char _v0[] = { 0x2B, 0x06, 0x01, 0x05, 0x02 };
ObjectID id_krb5 = {
    5,
    _v0
};

#endif  /* #ifndef _OSSNOVALUES */


extern void DLL_ENTRY _oss_run_TOED_on_INTEL_X86_WINDOWS_AND_WINNT(void);
static void _oss_post_init(struct ossGlobal *world);
#ifdef OSS_COPY_VALUE
int DLL_ENTRY _CPKerberosV5Spec2(struct ossGlobal * _g, int pduNum, void * src, void ** pdst);
#endif /* OSS_COPY_VALUE */

#ifdef OSS_COMPARE_VALUE
int DLL_ENTRY _CMKerberosV5Spec2(struct ossGlobal * _g, int _pduNum, void * _odata, void * _cdata);
#endif /* OSS_COMPARE_VALUE */

#if OSS_TOED_API_LEVEL >= 31
void DLL_ENTRY _oeKerberosV5Spec2(OssGlobal * _g, int _pdunum, void * _inbuf);
void * DLL_ENTRY _odKerberosV5Spec2(OssGlobal * _g, int _pdunum);
#endif
static const _oss_xapi_entries_struct _oss_xapi_entries = {
     32
#ifdef OSS_COPY_VALUE
    ,_CPKerberosV5Spec2
#else
    ,NULL
#endif
#ifdef OSS_COMPARE_VALUE
    ,_CMKerberosV5Spec2
#else
    ,NULL
#endif
    ,NULL
    ,NULL
    ,2
    ,NULL
    ,NULL
#if OSS_TOED_API_LEVEL >= 24
    ,NULL
    ,NULL
    ,0
#endif
#if OSS_TOED_API_LEVEL >= 31
    ,0
    ,_oeKerberosV5Spec2
    ,_odKerberosV5Spec2
#endif
};

#ifdef OSS_NO_NESTING_CONTROL
int WARNING___kull_m_kerberos_asn1_HAS_OSS_NESTING_CONTROL_DISABLED;
#endif


static unsigned char _privateFlags[] = {0x09,0x00};
void DLL_ENTRY_FDEF _ossinit_kull_m_kerberos_asn1(struct ossGlobal *world) {
    _EncDecGlobals *_oss_c;

    _oss_run_TOED_on_INTEL_X86_WINDOWS_AND_WINNT();
    ossPrivateSetMoreFlags(world, 14, _privateFlags);
    ossLinkBer(world);
    if (world) {
        _oss_c = (_EncDecGlobals *)world->encDecVar;
        _oss_c->der = 1;
    }
    ossSetEncodingRules(world, OSS_DER);
    ossInitXAPIentries(world, &_oss_xapi_entries);
    _oss_post_init(world);
}

static long _edTicket(OssGlobal * _g, char ** _out_pos, long * _max_len, Ticket * _in_data);
static void _d_Ticket(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, Ticket * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_Ticket(OssGlobal * _g, Ticket * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_Ticket(OssGlobal * _g, Ticket * _data_ptr);
#endif
static long _ed_seqof1(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof1 * _in_data);
static void _d__seqof1(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof1 * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f__seqof1(OssGlobal * _g, _seqof1 * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p__seqof1(OssGlobal * _g, _seqof1 * _data_ptr);
#endif
static long _edPrincipalName(OssGlobal * _g, char ** _out_pos, long * _max_len, PrincipalName * _in_data);
static void _d_PrincipalName(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, PrincipalName * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_PrincipalName(OssGlobal * _g, PrincipalName * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_PrincipalName(OssGlobal * _g, PrincipalName * _data_ptr);
#endif
static long _edHostAddress(OssGlobal * _g, char ** _out_pos, long * _max_len, HostAddress * _in_data);
static void _d_HostAddress(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, HostAddress * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_HostAddress(OssGlobal * _g, HostAddress * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_HostAddress(OssGlobal * _g, HostAddress * _data_ptr);
#endif
static long _edHostAddresses(OssGlobal * _g, char ** _out_pos, long * _max_len, HostAddresses * _in_data);
static void _d_HostAddresses(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, HostAddresses * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_HostAddresses(OssGlobal * _g, HostAddresses * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_HostAddresses(OssGlobal * _g, HostAddresses * _data_ptr);
#endif
static long _edAuthorizationData(OssGlobal * _g, char ** _out_pos, long * _max_len, AuthorizationData * _in_data);
static void _d_AuthorizationData(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, AuthorizationData * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_AuthorizationData(OssGlobal * _g, AuthorizationData * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_AuthorizationData(OssGlobal * _g, AuthorizationData * _data_ptr);
#endif
static long _edPA_DATA(OssGlobal * _g, char ** _out_pos, long * _max_len, PA_DATA * _in_data);
static void _d_PA_DATA(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, PA_DATA * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_PA_DATA(OssGlobal * _g, PA_DATA * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_PA_DATA(OssGlobal * _g, PA_DATA * _data_ptr);
#endif
static long _edEncryptedData(OssGlobal * _g, char ** _out_pos, long * _max_len, EncryptedData * _in_data);
static void _d_EncryptedData(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, EncryptedData * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_EncryptedData(OssGlobal * _g, EncryptedData * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_EncryptedData(OssGlobal * _g, EncryptedData * _data_ptr);
#endif
static long _edEncryptionKey(OssGlobal * _g, char ** _out_pos, long * _max_len, EncryptionKey * _in_data);
static void _d_EncryptionKey(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, EncryptionKey * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_EncryptionKey(OssGlobal * _g, EncryptionKey * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_EncryptionKey(OssGlobal * _g, EncryptionKey * _data_ptr);
#endif
static long _edChecksum(OssGlobal * _g, char ** _out_pos, long * _max_len, Checksum * _in_data);
static void _d_Checksum(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, Checksum * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_Checksum(OssGlobal * _g, Checksum * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_Checksum(OssGlobal * _g, Checksum * _data_ptr);
#endif
static long _ed_seqof2(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof2 * _in_data);
static void _d__seqof2(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof2 * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f__seqof2(OssGlobal * _g, _seqof2 * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p__seqof2(OssGlobal * _g, _seqof2 * _data_ptr);
#endif
static long _ed_seqof3(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof3 * _in_data);
static void _d__seqof3(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof3 * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f__seqof3(OssGlobal * _g, _seqof3 * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p__seqof3(OssGlobal * _g, _seqof3 * _data_ptr);
#endif
static long _edKDC_REQ_BODY(OssGlobal * _g, char ** _out_pos, long * _max_len, KDC_REQ_BODY * _in_data);
static void _d_KDC_REQ_BODY(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, KDC_REQ_BODY * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_KDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_KDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * _data_ptr);
#endif
static long _ed_seqof4(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof4 * _in_data);
static void _d__seqof4(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof4 * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f__seqof4(OssGlobal * _g, _seqof4 * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p__seqof4(OssGlobal * _g, _seqof4 * _data_ptr);
#endif
static long _edKDC_REQ(OssGlobal * _g, char ** _out_pos, long * _max_len, KDC_REQ * _in_data);
static void _d_KDC_REQ(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, KDC_REQ * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_KDC_REQ(OssGlobal * _g, KDC_REQ * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_KDC_REQ(OssGlobal * _g, KDC_REQ * _data_ptr);
#endif
static long _ed_1(OssGlobal * _g, char ** _out_pos, long * _max_len, struct _seqof4 ** _in_data);
static void _d__1(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, struct _seqof4 ** _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f__1(OssGlobal * _g, struct _seqof4 ** _data_ptr);
#endif
#ifdef OSSPRINT
static void _p__1(OssGlobal * _g, struct _seqof4 ** _data_ptr);
#endif
static long _edKDC_REP(OssGlobal * _g, char ** _out_pos, long * _max_len, KDC_REP * _in_data);
static void _d_KDC_REP(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, KDC_REP * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_KDC_REP(OssGlobal * _g, KDC_REP * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_KDC_REP(OssGlobal * _g, KDC_REP * _data_ptr);
#endif
static long _ed_2(OssGlobal * _g, char ** _out_pos, long * _max_len, struct _seqof4 ** _in_data);
static void _d__2(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, struct _seqof4 ** _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f__2(OssGlobal * _g, struct _seqof4 ** _data_ptr);
#endif
#ifdef OSSPRINT
static void _p__2(OssGlobal * _g, struct _seqof4 ** _data_ptr);
#endif
static long _edEncKDCRepPart(OssGlobal * _g, char ** _out_pos, long * _max_len, EncKDCRepPart * _in_data);
static void _d_EncKDCRepPart(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, EncKDCRepPart * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_EncKDCRepPart(OssGlobal * _g, EncKDCRepPart * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_EncKDCRepPart(OssGlobal * _g, EncKDCRepPart * _data_ptr);
#endif
static long _edLastReq(OssGlobal * _g, char ** _out_pos, long * _max_len, LastReq * _in_data);
static void _d_LastReq(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, LastReq * _out_data);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _f_LastReq(OssGlobal * _g, LastReq * _data_ptr);
#endif
#ifdef OSSPRINT
static void _p_LastReq(OssGlobal * _g, LastReq * _data_ptr);
#endif
static void _eTicket(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dTicket(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fTicket(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pTicket(OssGlobal * _g, void * _data);
#endif
static void _eEncTicketPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dEncTicketPart(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fEncTicketPart(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pEncTicketPart(OssGlobal * _g, void * _data);
#endif
static void _eAS_REQ(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAS_REQ(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAS_REQ(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAS_REQ(OssGlobal * _g, void * _data);
#endif
static void _eTGS_REQ(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dTGS_REQ(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fTGS_REQ(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pTGS_REQ(OssGlobal * _g, void * _data);
#endif
static void _eAS_REP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAS_REP(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAS_REP(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAS_REP(OssGlobal * _g, void * _data);
#endif
static void _eTGS_REP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dTGS_REP(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fTGS_REP(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pTGS_REP(OssGlobal * _g, void * _data);
#endif
static void _eEncASRepPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dEncASRepPart(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fEncASRepPart(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pEncASRepPart(OssGlobal * _g, void * _data);
#endif
static void _eEncTGSRepPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dEncTGSRepPart(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fEncTGSRepPart(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pEncTGSRepPart(OssGlobal * _g, void * _data);
#endif
static void _eAP_REQ(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAP_REQ(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAP_REQ(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAP_REQ(OssGlobal * _g, void * _data);
#endif
static void _eAuthenticator(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAuthenticator(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAuthenticator(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAuthenticator(OssGlobal * _g, void * _data);
#endif
static void _eAP_REP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAP_REP(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAP_REP(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAP_REP(OssGlobal * _g, void * _data);
#endif
static void _eEncAPRepPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dEncAPRepPart(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fEncAPRepPart(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pEncAPRepPart(OssGlobal * _g, void * _data);
#endif
static void _eKRB_SAFE(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dKRB_SAFE(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fKRB_SAFE(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pKRB_SAFE(OssGlobal * _g, void * _data);
#endif
static void _eKRB_PRIV(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dKRB_PRIV(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fKRB_PRIV(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pKRB_PRIV(OssGlobal * _g, void * _data);
#endif
static void _eEncKrbPrivPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dEncKrbPrivPart(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fEncKrbPrivPart(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pEncKrbPrivPart(OssGlobal * _g, void * _data);
#endif
static void _eKRB_CRED(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dKRB_CRED(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fKRB_CRED(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pKRB_CRED(OssGlobal * _g, void * _data);
#endif
static void _eEncKrbCredPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dEncKrbCredPart(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fEncKrbCredPart(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pEncKrbCredPart(OssGlobal * _g, void * _data);
#endif
static void _eKRB_ERROR(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dKRB_ERROR(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fKRB_ERROR(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pKRB_ERROR(OssGlobal * _g, void * _data);
#endif
static void _eMETHOD_DATA(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dMETHOD_DATA(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fMETHOD_DATA(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pMETHOD_DATA(OssGlobal * _g, void * _data);
#endif
static void _eTYPED_DATA(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dTYPED_DATA(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fTYPED_DATA(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pTYPED_DATA(OssGlobal * _g, void * _data);
#endif
static void _ePA_ENC_TIMESTAMP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dPA_ENC_TIMESTAMP(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fPA_ENC_TIMESTAMP(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pPA_ENC_TIMESTAMP(OssGlobal * _g, void * _data);
#endif
static void _ePA_ENC_TS_ENC(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dPA_ENC_TS_ENC(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fPA_ENC_TS_ENC(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pPA_ENC_TS_ENC(OssGlobal * _g, void * _data);
#endif
static void _eETYPE_INFO(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dETYPE_INFO(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fETYPE_INFO(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pETYPE_INFO(OssGlobal * _g, void * _data);
#endif
static void _eETYPE_INFO2(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dETYPE_INFO2(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fETYPE_INFO2(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pETYPE_INFO2(OssGlobal * _g, void * _data);
#endif
static void _eAD_IF_RELEVANT(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAD_IF_RELEVANT(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAD_IF_RELEVANT(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAD_IF_RELEVANT(OssGlobal * _g, void * _data);
#endif
static void _eAD_KDCIssued(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAD_KDCIssued(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAD_KDCIssued(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAD_KDCIssued(OssGlobal * _g, void * _data);
#endif
static void _eAD_AND_OR(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAD_AND_OR(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAD_AND_OR(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAD_AND_OR(OssGlobal * _g, void * _data);
#endif
static void _eAD_MANDATORY_FOR_KDC(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dAD_MANDATORY_FOR_KDC(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fAD_MANDATORY_FOR_KDC(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pAD_MANDATORY_FOR_KDC(OssGlobal * _g, void * _data);
#endif
static void _eKERB_PA_PAC_REQUEST(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dKERB_PA_PAC_REQUEST(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fKERB_PA_PAC_REQUEST(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pKERB_PA_PAC_REQUEST(OssGlobal * _g, void * _data);
#endif
static void _eChangePasswdData(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags);
static void * _dChangePasswdData(OssGlobal * _g);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void _fChangePasswdData(OssGlobal * _g, void * _data);
#endif
#ifdef OSSPRINT
static int _pChangePasswdData(OssGlobal * _g, void * _data);
#endif
void DLL_ENTRY _emKerberosV5Spec2(struct ossGlobal * _g, int _pdunum, void * _inbuf);
void DLL_ENTRY _dmKerberosV5Spec2(struct ossGlobal * _g, int * _pdunum, void ** _outbuf);
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
int DLL_ENTRY _fmKerberosV5Spec2(struct ossGlobal * _g, int _pdunum, void * _data);
#endif
#ifdef OSSPRINT
int DLL_ENTRY _pmKerberosV5Spec2(struct ossGlobal * _g, int _pdunum, void * _data);
#endif



#ifdef OSS_COPY_VALUE
static Ticket * _cpTicket(OssGlobal * _g, Ticket * psVal, Ticket * pdVal);
static _seqof1 * _cp_seqof1(OssGlobal * _g, _seqof1 * psVal, _seqof1 * pdVal);
static PrincipalName * _cpPrincipalName(OssGlobal * _g, PrincipalName * psVal, PrincipalName * pdVal);
static HostAddress * _cpHostAddress(OssGlobal * _g, HostAddress * psVal, HostAddress * pdVal);
static HostAddresses * _cpHostAddresses(OssGlobal * _g, HostAddresses * psVal, HostAddresses * pdVal);
static AuthorizationData * _cpAuthorizationData(OssGlobal * _g, AuthorizationData * psVal, AuthorizationData * pdVal);
static PA_DATA * _cpPA_DATA(OssGlobal * _g, PA_DATA * psVal, PA_DATA * pdVal);
static EncryptedData * _cpEncryptedData(OssGlobal * _g, EncryptedData * psVal, EncryptedData * pdVal);
static EncryptionKey * _cpEncryptionKey(OssGlobal * _g, EncryptionKey * psVal, EncryptionKey * pdVal);
static Checksum * _cpChecksum(OssGlobal * _g, Checksum * psVal, Checksum * pdVal);
static _seqof3 * _cp_seqof3(OssGlobal * _g, _seqof3 * psVal, _seqof3 * pdVal);
static KDC_REQ_BODY * _cpKDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * psVal, KDC_REQ_BODY * pdVal);
static _seqof4 * _cp_seqof4(OssGlobal * _g, _seqof4 * psVal, _seqof4 * pdVal);
static KDC_REQ * _cpKDC_REQ(OssGlobal * _g, KDC_REQ * psVal, KDC_REQ * pdVal);
static KDC_REP * _cpKDC_REP(OssGlobal * _g, KDC_REP * psVal, KDC_REP * pdVal);
static EncKDCRepPart * _cpEncKDCRepPart(OssGlobal * _g, EncKDCRepPart * psVal, EncKDCRepPart * pdVal);
#endif /* OSS_COPY_VALUE */

#ifdef OSS_COMPARE_VALUE
static int _cmTicket(OssGlobal * _g, Ticket * _odata, Ticket * _cdata);
static int _cm_seqof1(OssGlobal * _g, _seqof1 * _odata, _seqof1 * _cdata);
static int _cmPrincipalName(OssGlobal * _g, PrincipalName * _odata, PrincipalName * _cdata);
static int _cmHostAddress(OssGlobal * _g, HostAddress * _odata, HostAddress * _cdata);
static int _cmHostAddresses(OssGlobal * _g, HostAddresses * _odata, HostAddresses * _cdata);
static int _cmAuthorizationData(OssGlobal * _g, AuthorizationData * _odata, AuthorizationData * _cdata);
static int _cmPA_DATA(OssGlobal * _g, PA_DATA * _odata, PA_DATA * _cdata);
static int _cmEncryptedData(OssGlobal * _g, EncryptedData * _odata, EncryptedData * _cdata);
static int _cmEncryptionKey(OssGlobal * _g, EncryptionKey * _odata, EncryptionKey * _cdata);
static int _cmChecksum(OssGlobal * _g, Checksum * _odata, Checksum * _cdata);
static int _cm_seqof2(OssGlobal * _g, _seqof2 * _odata, _seqof2 * _cdata);
static int _cm_seqof3(OssGlobal * _g, _seqof3 * _odata, _seqof3 * _cdata);
static int _cmKDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * _odata, KDC_REQ_BODY * _cdata);
static int _cm_seqof4(OssGlobal * _g, _seqof4 * _odata, _seqof4 * _cdata);
static int _cmKDC_REQ(OssGlobal * _g, KDC_REQ * _odata, KDC_REQ * _cdata);
static int _cmKDC_REP(OssGlobal * _g, KDC_REP * _odata, KDC_REP * _cdata);
static int _cmEncKDCRepPart(OssGlobal * _g, EncKDCRepPart * _odata, EncKDCRepPart * _cdata);
static int _cmLastReq(OssGlobal * _g, LastReq * _odata, LastReq * _cdata);
#endif /* OSS_COMPARE_VALUE */

static void (*_Encoders[30])(OssGlobal *, void *, char **, long *, unsigned int) = {
    _eTicket,
    _eEncTicketPart,
    _eAS_REQ,
    _eTGS_REQ,
    _eAS_REP,
    _eTGS_REP,
    _eEncASRepPart,
    _eEncTGSRepPart,
    _eAP_REQ,
    _eAuthenticator,
    _eAP_REP,
    _eEncAPRepPart,
    _eKRB_SAFE,
    _eKRB_PRIV,
    _eEncKrbPrivPart,
    _eKRB_CRED,
    _eEncKrbCredPart,
    _eKRB_ERROR,
    _eMETHOD_DATA,
    _eTYPED_DATA,
    _ePA_ENC_TIMESTAMP,
    _ePA_ENC_TS_ENC,
    _eETYPE_INFO,
    _eETYPE_INFO2,
    _eAD_IF_RELEVANT,
    _eAD_KDCIssued,
    _eAD_AND_OR,
    _eAD_MANDATORY_FOR_KDC,
    _eKERB_PA_PAC_REQUEST,
    _eChangePasswdData
};
static void *(*_Decoders[30])(OssGlobal *) = {
    _dTicket,
    _dEncTicketPart,
    _dAS_REQ,
    _dTGS_REQ,
    _dAS_REP,
    _dTGS_REP,
    _dEncASRepPart,
    _dEncTGSRepPart,
    _dAP_REQ,
    _dAuthenticator,
    _dAP_REP,
    _dEncAPRepPart,
    _dKRB_SAFE,
    _dKRB_PRIV,
    _dEncKrbPrivPart,
    _dKRB_CRED,
    _dEncKrbCredPart,
    _dKRB_ERROR,
    _dMETHOD_DATA,
    _dTYPED_DATA,
    _dPA_ENC_TIMESTAMP,
    _dPA_ENC_TS_ENC,
    _dETYPE_INFO,
    _dETYPE_INFO2,
    _dAD_IF_RELEVANT,
    _dAD_KDCIssued,
    _dAD_AND_OR,
    _dAD_MANDATORY_FOR_KDC,
    _dKERB_PA_PAC_REQUEST,
    _dChangePasswdData
};
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
static void (*_FreePDU[30])(OssGlobal *, void *) = {
    _fTicket,
    _fEncTicketPart,
    _fAS_REQ,
    _fTGS_REQ,
    _fAS_REP,
    _fTGS_REP,
    _fEncASRepPart,
    _fEncTGSRepPart,
    _fAP_REQ,
    _fAuthenticator,
    _fAP_REP,
    _fEncAPRepPart,
    _fKRB_SAFE,
    _fKRB_PRIV,
    _fEncKrbPrivPart,
    _fKRB_CRED,
    _fEncKrbCredPart,
    _fKRB_ERROR,
    _fMETHOD_DATA,
    _fTYPED_DATA,
    _fPA_ENC_TIMESTAMP,
    _fPA_ENC_TS_ENC,
    _fETYPE_INFO,
    _fETYPE_INFO2,
    _fAD_IF_RELEVANT,
    _fAD_KDCIssued,
    _fAD_AND_OR,
    _fAD_MANDATORY_FOR_KDC,
    _fKERB_PA_PAC_REQUEST,
    _fChangePasswdData
};
#endif
#ifdef OSSPRINT
static _print_pdu_ _PrintPDU[30] = {
    { _pTicket, "Ticket" },
    { _pEncTicketPart, "EncTicketPart" },
    { _pAS_REQ, "AS-REQ" },
    { _pTGS_REQ, "TGS-REQ" },
    { _pAS_REP, "AS-REP" },
    { _pTGS_REP, "TGS-REP" },
    { _pEncASRepPart, "EncASRepPart" },
    { _pEncTGSRepPart, "EncTGSRepPart" },
    { _pAP_REQ, "AP-REQ" },
    { _pAuthenticator, "Authenticator" },
    { _pAP_REP, "AP-REP" },
    { _pEncAPRepPart, "EncAPRepPart" },
    { _pKRB_SAFE, "KRB-SAFE" },
    { _pKRB_PRIV, "KRB-PRIV" },
    { _pEncKrbPrivPart, "EncKrbPrivPart" },
    { _pKRB_CRED, "KRB-CRED" },
    { _pEncKrbCredPart, "EncKrbCredPart" },
    { _pKRB_ERROR, "KRB-ERROR" },
    { _pMETHOD_DATA, "METHOD-DATA" },
    { _pTYPED_DATA, "TYPED-DATA" },
    { _pPA_ENC_TIMESTAMP, "PA-ENC-TIMESTAMP" },
    { _pPA_ENC_TS_ENC, "PA-ENC-TS-ENC" },
    { _pETYPE_INFO, "ETYPE-INFO" },
    { _pETYPE_INFO2, "ETYPE-INFO2" },
    { _pAD_IF_RELEVANT, "AD-IF-RELEVANT" },
    { _pAD_KDCIssued, "AD-KDCIssued" },
    { _pAD_AND_OR, "AD-AND-OR" },
    { _pAD_MANDATORY_FOR_KDC, "AD-MANDATORY-FOR-KDC" },
    { _pKERB_PA_PAC_REQUEST, "KERB-PA-PAC-REQUEST" },
    { _pChangePasswdData, "ChangePasswdData" }
};
#endif

#if OSSDEBUG > 1
static const _Context_Id _context_id[] = {
    {"enc-part", "EncryptedData", _sequence_type},
    {"sname", "PrincipalName", _sequence_type},
    {"realm", "Realm", _charstring_type},
    {"tkt-vno", "INTEGER", _integer_type},
    {NULL, "KerberosString", _charstring_type},
    {"name-string", "SEQUENCE OF", _sequence_of_type},
    {"name-type", "Int32", _integer_type},
    {"address", "OCTET STRING", _octetstring_type},
    {"addr-type", "Int32", _integer_type},
    {NULL, "HostAddress", _sequence_type},
    {NULL, "SEQUENCE", _sequence_type},
    {"ad-data", "OCTET STRING", _octetstring_type},
    {"ad-type", "Int32", _integer_type},
    {"padata-value", "OCTET STRING", _octetstring_type},
    {"padata-type", "Int32", _integer_type},
    {"cipher", "OCTET STRING", _octetstring_type},
    {"kvno", "UInt32", _integer_type},
    {"etype", "Int32", _integer_type},
    {"keyvalue", "OCTET STRING", _octetstring_type},
    {"keytype", "Int32", _integer_type},
    {"checksum", "OCTET STRING", _octetstring_type},
    {"cksumtype", "Int32", _integer_type},
    {NULL, "Int32", _integer_type},
    {NULL, "Ticket", _sequence_type},
    {"additional-tickets", "SEQUENCE OF", _sequence_of_type},
    {"enc-authorization-data", "EncryptedData", _sequence_type},
    {"addresses", "HostAddresses", _sequence_of_type},
    {"etype", "SEQUENCE OF", _sequence_of_type},
    {"nonce", "UInt32", _integer_type},
    {"rtime", "KerberosTime", _time_type},
    {"till", "KerberosTime", _time_type},
    {"from", "KerberosTime", _time_type},
    {"cname", "PrincipalName", _sequence_type},
    {"kdc-options", "KDCOptions", _bitstring_type},
    {NULL, "PA-DATA", _sequence_type},
    {"req-body", "KDC-REQ-BODY", _sequence_type},
    {"padata", "SEQUENCE OF", _sequence_of_type},
    {"msg-type", "INTEGER", _integer_type},
    {"pvno", "INTEGER", _integer_type},
    {"ticket", "Ticket", _sequence_type},
    {"crealm", "Realm", _charstring_type},
    {"encrypted-pa-data", "SEQUENCE OF", _sequence_of_type},
    {"caddr", "HostAddresses", _sequence_of_type},
    {"srealm", "Realm", _charstring_type},
    {"renew-till", "KerberosTime", _time_type},
    {"endtime", "KerberosTime", _time_type},
    {"starttime", "KerberosTime", _time_type},
    {"authtime", "KerberosTime", _time_type},
    {"flags", "TicketFlags", _bitstring_type},
    {"key-expiration", "KerberosTime", _time_type},
    {"last-req", "LastReq", _sequence_of_type},
    {"key", "EncryptionKey", _sequence_type},
    {"lr-value", "KerberosTime", _time_type},
    {"lr-type", "Int32", _integer_type},
    {"Ticket", "SEQUENCE", _sequence_type},
    {"EncTicketPart", "SEQUENCE", _sequence_type},
    {"authorization-data", "AuthorizationData", _sequence_of_type},
    {"transited", "TransitedEncoding", _sequence_type},
    {"contents", "OCTET STRING", _octetstring_type},
    {"tr-type", "Int32", _integer_type},
    {"AS-REQ", "SEQUENCE", _sequence_type},
    {"TGS-REQ", "SEQUENCE", _sequence_type},
    {"AS-REP", "SEQUENCE", _sequence_type},
    {"TGS-REP", "SEQUENCE", _sequence_type},
    {"EncASRepPart", "SEQUENCE", _sequence_type},
    {"EncTGSRepPart", "SEQUENCE", _sequence_type},
    {"AP-REQ", "SEQUENCE", _sequence_type},
    {"authenticator", "EncryptedData", _sequence_type},
    {"ap-options", "APOptions", _bitstring_type},
    {"Authenticator", "SEQUENCE", _sequence_type},
    {"seq-number", "UInt32", _integer_type},
    {"subkey", "EncryptionKey", _sequence_type},
    {"ctime", "KerberosTime", _time_type},
    {"cusec", "Microseconds", _integer_type},
    {"cksum", "Checksum", _sequence_type},
    {"authenticator-vno", "INTEGER", _integer_type},
    {"AP-REP", "SEQUENCE", _sequence_type},
    {"EncAPRepPart", "SEQUENCE", _sequence_type},
    {"KRB-SAFE", "SEQUENCE", _sequence_type},
    {"safe-body", "KRB-SAFE-BODY", _sequence_type},
    {"r-address", "HostAddress", _sequence_type},
    {"s-address", "HostAddress", _sequence_type},
    {"usec", "Microseconds", _integer_type},
    {"timestamp", "KerberosTime", _time_type},
    {"user-data", "OCTET STRING", _octetstring_type},
    {"KRB-PRIV", "SEQUENCE", _sequence_type},
    {"EncKrbPrivPart", "SEQUENCE", _sequence_type},
    {"KRB-CRED", "SEQUENCE", _sequence_type},
    {"tickets", "SEQUENCE OF", _sequence_of_type},
    {"EncKrbCredPart", "SEQUENCE", _sequence_type},
    {"ticket-info", "SEQUENCE OF", _sequence_of_type},
    {NULL, "KrbCredInfo", _sequence_type},
    {"pname", "PrincipalName", _sequence_type},
    {"prealm", "Realm", _charstring_type},
    {"KRB-ERROR", "SEQUENCE", _sequence_type},
    {"e-data", "OCTET STRING", _octetstring_type},
    {"e-text", "KerberosString", _charstring_type},
    {"error-code", "Int32", _integer_type},
    {"susec", "Microseconds", _integer_type},
    {"stime", "KerberosTime", _time_type},
    {"METHOD-DATA", "SEQUENCE OF", _sequence_of_type},
    {"TYPED-DATA", "SEQUENCE OF", _sequence_of_type},
    {"data-value", "OCTET STRING", _octetstring_type},
    {"data-type", "Int32", _integer_type},
    {"PA-ENC-TIMESTAMP", "SEQUENCE", _sequence_type},
    {"PA-ENC-TS-ENC", "SEQUENCE", _sequence_type},
    {"pausec", "Microseconds", _integer_type},
    {"patimestamp", "KerberosTime", _time_type},
    {"ETYPE-INFO", "SEQUENCE OF", _sequence_of_type},
    {NULL, "ETYPE-INFO-ENTRY", _sequence_type},
    {"salt", "OCTET STRING", _octetstring_type},
    {"ETYPE-INFO2", "SEQUENCE OF", _sequence_of_type},
    {NULL, "ETYPE-INFO2-ENTRY", _sequence_type},
    {"s2kparams", "OCTET STRING", _octetstring_type},
    {"salt", "KerberosString", _charstring_type},
    {"AD-IF-RELEVANT", "SEQUENCE OF", _sequence_of_type},
    {"AD-KDCIssued", "SEQUENCE", _sequence_type},
    {"elements", "AuthorizationData", _sequence_of_type},
    {"i-sname", "PrincipalName", _sequence_type},
    {"i-realm", "Realm", _charstring_type},
    {"ad-checksum", "Checksum", _sequence_type},
    {"AD-AND-OR", "SEQUENCE", _sequence_type},
    {"condition-count", "Int32", _integer_type},
    {"AD-MANDATORY-FOR-KDC", "SEQUENCE OF", _sequence_of_type},
    {"KERB-PA-PAC-REQUEST", "SEQUENCE", _sequence_type},
    {"include-pac", "BOOLEAN", _boolean_type},
    {"ChangePasswdData", "SEQUENCE", _sequence_type},
    {"targrealm", "Realm", _charstring_type},
    {"targname", "PrincipalName", _sequence_type},
    {"newpasswd", "OCTET STRING", _octetstring_type}
};
#endif


#if OSS_TOED_API_LEVEL >= 31
void DLL_ENTRY_FDEF _oeKerberosV5Spec2(OssGlobal * _g, int _pdunum, void * _inbuf)
{
    _oss_toed_api_error(_g, _null_fcn, 0);
    _pdunum = _pdunum;	/* to avoid C-compilation warning */
    _inbuf = _inbuf;	/* to avoid C-compilation warning */
}

void * DLL_ENTRY_FDEF _odKerberosV5Spec2(OssGlobal * _g, int _pdunum)
{
    _oss_toed_api_error(_g, _null_fcn, 0);
    _pdunum = _pdunum;	/* to avoid C-compilation warning */
    return NULL;
}

#endif
static long _edTicket(OssGlobal * _g, char ** _out_pos, long * _max_len, Ticket * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 0)
	_data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->enc_part);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(1)
	_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->sname);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(2)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->realm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->realm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(3)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->tkt_vno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _ed_seqof1(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof1 * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	struct _seqof1 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 4)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct _seqof1 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_temp->value == NULL)
		_oss_enc_error(_g, _bad_pointer, 0L);
#endif
	    _data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _temp->value, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edPrincipalName(OssGlobal * _g, char ** _out_pos, long * _max_len, PrincipalName * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 5)
	_data_len = _ed_seqof1(_g, _out_pos, &_out_len, &_in_data->name_string);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(6)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->name_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edHostAddress(OssGlobal * _g, char ** _out_pos, long * _max_len, HostAddress * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 7)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->address.value, _in_data->address.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(8)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->addr_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edHostAddresses(OssGlobal * _g, char ** _out_pos, long * _max_len, HostAddresses * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct HostAddresses * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 9)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct HostAddresses *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _data_len = _edHostAddress(_g, _out_pos, &_out_len, &_temp->value);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edAuthorizationData(OssGlobal * _g, char ** _out_pos, long * _max_len, AuthorizationData * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	struct AuthorizationData * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 10)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct AuthorizationData *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    {
		long _total_len = 0;
		OSS_CNTX_INIT

		OSS_CNTX_PUSH(_oss_c, 11)
		_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _temp->value.ad_data.value, _temp->value.ad_data.length, -1);
		if (_data_len < 0) {
		    _constructed = TRUE;
		    _data_len = -_data_len;
		} else
		    _constructed = FALSE;
		_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
		_total_len += _data_len;
		OSS_CNTX_SET(12)
		_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _temp->value.ad_type, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
		_total_len += _data_len;
		OSS_CNTX_POP(_oss_c)
		_data_len = _total_len;
	    }
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edPA_DATA(OssGlobal * _g, char ** _out_pos, long * _max_len, PA_DATA * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 13)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->padata_value.value, _in_data->padata_value.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(14)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->padata_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edEncryptedData(OssGlobal * _g, char ** _out_pos, long * _max_len, EncryptedData * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 15)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->cipher.value, _in_data->cipher.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(16)
	if (_in_data->bit_mask & kvno_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->kvno, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(17)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->etype, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edEncryptionKey(OssGlobal * _g, char ** _out_pos, long * _max_len, EncryptionKey * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 18)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->keyvalue.value, _in_data->keyvalue.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(19)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->keytype, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edChecksum(OssGlobal * _g, char ** _out_pos, long * _max_len, Checksum * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 20)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->checksum.value, _in_data->checksum.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(21)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->cksumtype, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _ed_seqof2(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof2 * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct _seqof2 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 22)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct _seqof2 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _temp->value, 0x2);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _ed_seqof3(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof3 * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct _seqof3 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 23)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct _seqof3 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _oss_save_enc_stack(_g, _sp);
	    _data_len = _edTicket(_g, _out_pos, &_out_len, &_temp->value);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x61);
	    _st = _oss_load_enc_stack(_g, &_sp);
	    _total_len += _data_len;
	}
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edKDC_REQ_BODY(OssGlobal * _g, char ** _out_pos, long * _max_len, KDC_REQ_BODY * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 24)
	if (_in_data->bit_mask & additional_tickets_present) {
	    _data_len = _ed_seqof3(_g, _out_pos, &_out_len, &_in_data->additional_tickets);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAB);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(25)
	if (_in_data->bit_mask & enc_authorization_data_present) {
	    _data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->enc_authorization_data);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAA);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(26)
	if (_in_data->bit_mask & addresses_present) {
	    _data_len = _edHostAddresses(_g, _out_pos, &_out_len, &_in_data->addresses);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA9);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(27)
	_data_len = _ed_seqof2(_g, _out_pos, &_out_len, &_in_data->etype);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA8);
	_total_len += _data_len;
	OSS_CNTX_SET(28)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->nonce, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA7);
	_total_len += _data_len;
	OSS_CNTX_SET(29)
	if (_in_data->bit_mask & rtime_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->rtime);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA6);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(30)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->till);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA5);
	_total_len += _data_len;
	OSS_CNTX_SET(31)
	if (_in_data->bit_mask & from_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->from);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA4);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(1)
	if (_in_data->bit_mask & KDC_REQ_BODY_sname_present) {
	    _data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->sname);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(2)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->realm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->realm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(32)
	if (_in_data->bit_mask & KDC_REQ_BODY_cname_present) {
	    _data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->cname);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(33)
	_data_len = _oss_encd_dubit_ia(_g, _out_pos, &_out_len, _in_data->kdc_options.value, _in_data->kdc_options.length, -1, FALSE);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x23 : 0x3, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _ed_seqof4(OssGlobal * _g, char ** _out_pos, long * _max_len, _seqof4 * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct _seqof4 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 34)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct _seqof4 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _data_len = _edPA_DATA(_g, _out_pos, &_out_len, &_temp->value);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edKDC_REQ(OssGlobal * _g, char ** _out_pos, long * _max_len, KDC_REQ * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 35)
	_data_len = _edKDC_REQ_BODY(_g, _out_pos, &_out_len, &_in_data->req_body);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(36)
	if (_in_data->bit_mask & KDC_REQ_padata_present) {
	    _data_len = _ed_seqof4(_g, _out_pos, &_out_len, &_in_data->padata);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _ed_1(OssGlobal * _g, char ** _out_pos, long * _max_len, struct _seqof4 ** _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct _seqof4 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 34)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct _seqof4 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _data_len = _edPA_DATA(_g, _out_pos, &_out_len, &_temp->value);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edKDC_REP(OssGlobal * _g, char ** _out_pos, long * _max_len, KDC_REP * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 0)
	_data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->enc_part);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA6);
	_total_len += _data_len;
	OSS_CNTX_SET(39)
	_data_len = _edTicket(_g, _out_pos, &_out_len, &_in_data->ticket);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x61);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA5);
	_total_len += _data_len;
	OSS_CNTX_SET(32)
	_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->cname);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(40)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->crealm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->crealm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(36)
	if (_in_data->bit_mask & KDC_REP_padata_present) {
	    _data_len = _ed_1(_g, _out_pos, &_out_len, &_in_data->padata);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _ed_2(OssGlobal * _g, char ** _out_pos, long * _max_len, struct _seqof4 ** _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct _seqof4 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 34)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct _seqof4 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _data_len = _edPA_DATA(_g, _out_pos, &_out_len, &_temp->value);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edEncKDCRepPart(OssGlobal * _g, char ** _out_pos, long * _max_len, EncKDCRepPart * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;

    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 41)
	if (_in_data->bit_mask & encrypted_pa_data_present) {
	    _data_len = _ed_2(_g, _out_pos, &_out_len, &_in_data->encrypted_pa_data);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAC);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(42)
	if (_in_data->bit_mask & EncKDCRepPart_caddr_present) {
	    _data_len = _edHostAddresses(_g, _out_pos, &_out_len, &_in_data->caddr);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAB);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(1)
	_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->sname);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAA);
	_total_len += _data_len;
	OSS_CNTX_SET(43)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->srealm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->srealm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA9);
	_total_len += _data_len;
	OSS_CNTX_SET(44)
	if (_in_data->bit_mask & EncKDCRepPart_renew_till_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->renew_till);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA8);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(45)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->endtime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA7);
	_total_len += _data_len;
	OSS_CNTX_SET(46)
	if (_in_data->bit_mask & EncKDCRepPart_starttime_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->starttime);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA6);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(47)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->authtime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA5);
	_total_len += _data_len;
	OSS_CNTX_SET(48)
	_data_len = _oss_encd_dubit_ia(_g, _out_pos, &_out_len, _in_data->flags.value, _in_data->flags.length, -1, FALSE);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x23 : 0x3, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(49)
	if (_in_data->bit_mask & key_expiration_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->key_expiration);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(28)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->nonce, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(50)
	_data_len = _edLastReq(_g, _out_pos, &_out_len, &_in_data->last_req);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(51)
	_data_len = _edEncryptionKey(_g, _out_pos, &_out_len, &_in_data->key);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static long _edLastReq(OssGlobal * _g, char ** _out_pos, long * _max_len, LastReq * _in_data)
{
#if OSSDEBUG > 1
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
#endif
    long _out_len = *_max_len;
    long _data_len = 0;
    {
	struct LastReq * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 10)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct LastReq *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    {
		long _total_len = 0;
		OSS_CNTX_INIT

		OSS_CNTX_PUSH(_oss_c, 52)
		_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_temp->value.lr_value);
		_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA1);
		_total_len += _data_len;
		OSS_CNTX_SET(53)
		_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _temp->value.lr_type, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
		_total_len += _data_len;
		OSS_CNTX_POP(_oss_c)
		_data_len = _total_len;
	    }
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    *_max_len = _out_len;
    return _data_len;
}

static void _eTicket(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    Ticket	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (Ticket *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(1,54)
    _data_len = _edTicket(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x61);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eEncTicketPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncTicketPart	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (EncTicketPart *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(2,55)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 56)
	if (_in_data->bit_mask & EncTicketPart_authorization_data_present) {
	    _data_len = _edAuthorizationData(_g, _out_pos, &_out_len, &_in_data->authorization_data);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAA);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(42)
	if (_in_data->bit_mask & EncTicketPart_caddr_present) {
	    _data_len = _edHostAddresses(_g, _out_pos, &_out_len, &_in_data->caddr);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA9);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(44)
	if (_in_data->bit_mask & EncTicketPart_renew_till_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->renew_till);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA8);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(45)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->endtime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA7);
	_total_len += _data_len;
	OSS_CNTX_SET(46)
	if (_in_data->bit_mask & EncTicketPart_starttime_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->starttime);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA6);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(47)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->authtime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA5);
	_total_len += _data_len;
	OSS_CNTX_SET(57)
	{
	    long _total_len = 0;
	    OSS_CNTX_INIT

	    OSS_CNTX_PUSH(_oss_c, 58)
	    _data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->transited.contents.value, _in_data->transited.contents.length, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
	    _total_len += _data_len;
	    OSS_CNTX_SET(59)
	    _data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->transited.tr_type, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	    _total_len += _data_len;
	    OSS_CNTX_POP(_oss_c)
	    _data_len = _total_len;
	}
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(32)
	_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->cname);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(40)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->crealm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->crealm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(51)
	_data_len = _edEncryptionKey(_g, _out_pos, &_out_len, &_in_data->key);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(48)
	_data_len = _oss_encd_dubit_ia(_g, _out_pos, &_out_len, _in_data->flags.value, _in_data->flags.length, -1, FALSE);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x23 : 0x3, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x63);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAS_REQ(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AS_REQ	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (AS_REQ *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(3,60)
    _data_len = _edKDC_REQ(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x6A);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eTGS_REQ(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    TGS_REQ	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (TGS_REQ *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(4,61)
    _data_len = _edKDC_REQ(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x6C);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAS_REP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AS_REP	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (AS_REP *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(5,62)
    _data_len = _edKDC_REP(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x6B);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eTGS_REP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    TGS_REP	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (TGS_REP *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(6,63)
    _data_len = _edKDC_REP(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x6D);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eEncASRepPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncASRepPart	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (EncASRepPart *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(7,64)
    _data_len = _edEncKDCRepPart(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x79);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eEncTGSRepPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncTGSRepPart	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (EncTGSRepPart *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(8,65)
    _data_len = _edEncKDCRepPart(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x7A);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAP_REQ(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AP_REQ	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (AP_REQ *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(9,66)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 67)
	_data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->authenticator);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(39)
	_data_len = _edTicket(_g, _out_pos, &_out_len, &_in_data->ticket);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x61);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(68)
	_data_len = _oss_encd_dubit_ia(_g, _out_pos, &_out_len, _in_data->ap_options.value, _in_data->ap_options.length, -1, FALSE);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x23 : 0x3, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x6E);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAuthenticator(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    Authenticator	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (Authenticator *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(10,69)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 56)
	if (_in_data->bit_mask & Authenticator_authorization_data_present) {
	    _data_len = _edAuthorizationData(_g, _out_pos, &_out_len, &_in_data->authorization_data);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA8);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(70)
	if (_in_data->bit_mask & Authenticator_seq_number_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->seq_number, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA7);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(71)
	if (_in_data->bit_mask & Authenticator_subkey_present) {
	    _data_len = _edEncryptionKey(_g, _out_pos, &_out_len, &_in_data->subkey);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA6);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(72)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->ctime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA5);
	_total_len += _data_len;
	OSS_CNTX_SET(73)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->cusec, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(74)
	if (_in_data->bit_mask & cksum_present) {
	    _data_len = _edChecksum(_g, _out_pos, &_out_len, &_in_data->cksum);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(32)
	_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->cname);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(40)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->crealm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->crealm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(75)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->authenticator_vno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x62);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAP_REP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AP_REP	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (AP_REP *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(11,76)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 0)
	_data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->enc_part);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x6F);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eEncAPRepPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncAPRepPart	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (EncAPRepPart *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(12,77)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 70)
	if (_in_data->bit_mask & EncAPRepPart_seq_number_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->seq_number, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(71)
	if (_in_data->bit_mask & EncAPRepPart_subkey_present) {
	    _data_len = _edEncryptionKey(_g, _out_pos, &_out_len, &_in_data->subkey);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(73)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->cusec, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(72)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->ctime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x7B);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eKRB_SAFE(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_SAFE	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (KRB_SAFE *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(13,78)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 74)
	_data_len = _edChecksum(_g, _out_pos, &_out_len, &_in_data->cksum);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(79)
	{
	    long _total_len = 0;
	    OSS_CNTX_INIT

	    OSS_CNTX_PUSH(_oss_c, 80)
	    if (_in_data->safe_body.bit_mask & KRB_SAFE_BODY_r_address_present) {
		_data_len = _edHostAddress(_g, _out_pos, &_out_len, &_in_data->safe_body.r_address);
		_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA5);
		_total_len += _data_len;
	    }
	    OSS_CNTX_SET(81)
	    _data_len = _edHostAddress(_g, _out_pos, &_out_len, &_in_data->safe_body.s_address);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	    _total_len += _data_len;
	    OSS_CNTX_SET(70)
	    if (_in_data->safe_body.bit_mask & KRB_SAFE_BODY_seq_number_present) {
		_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->safe_body.seq_number, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA3);
		_total_len += _data_len;
	    }
	    OSS_CNTX_SET(82)
	    if (_in_data->safe_body.bit_mask & KRB_SAFE_BODY_usec_present) {
		_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->safe_body.usec, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA2);
		_total_len += _data_len;
	    }
	    OSS_CNTX_SET(83)
	    if (_in_data->safe_body.bit_mask & KRB_SAFE_BODY_timestamp_present) {
		_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->safe_body.timestamp);
		_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA1);
		_total_len += _data_len;
	    }
	    OSS_CNTX_SET(84)
	    _data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->safe_body.user_data.value, _in_data->safe_body.user_data.length, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA0);
	    _total_len += _data_len;
	    OSS_CNTX_POP(_oss_c)
	    _data_len = _total_len;
	}
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x74);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eKRB_PRIV(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_PRIV	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (KRB_PRIV *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(14,85)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 0)
	_data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->enc_part);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x75);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eEncKrbPrivPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncKrbPrivPart	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (EncKrbPrivPart *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(15,86)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 80)
	if (_in_data->bit_mask & EncKrbPrivPart_r_address_present) {
	    _data_len = _edHostAddress(_g, _out_pos, &_out_len, &_in_data->r_address);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA5);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(81)
	_data_len = _edHostAddress(_g, _out_pos, &_out_len, &_in_data->s_address);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(70)
	if (_in_data->bit_mask & EncKrbPrivPart_seq_number_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->seq_number, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(82)
	if (_in_data->bit_mask & EncKrbPrivPart_usec_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->usec, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(83)
	if (_in_data->bit_mask & EncKrbPrivPart_timestamp_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->timestamp);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(84)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->user_data.value, _in_data->user_data.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x7C);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eKRB_CRED(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_CRED	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (KRB_CRED *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(16,87)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 0)
	_data_len = _edEncryptedData(_g, _out_pos, &_out_len, &_in_data->enc_part);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(88)
	{
	    struct _seqof3 * _temp;
	    unsigned long count;
	    unsigned long _lindex;
	    long _total_len = 0;
	    OSS_UINT32 _sp;
	    void **_st = _oss_load_enc_stack(_g, &_sp);
	    OSS_CNTX_NEW(_oss_c, 23)
	    for (_temp = _in_data->tickets, count = 0; _temp; _temp = _temp->next) {
		OSS_CNTX_SETOCC(count + 1)
		if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
		_st[_sp++] = _temp;
		count++;
	    }
	    for (_lindex = 0; _lindex < count; _lindex++) {
		OSS_CNTX_SETOCC(count - _lindex)
		_temp = (struct _seqof3 *)_st[--_sp];
		if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
		_oss_save_enc_stack(_g, _sp);
		_data_len = _edTicket(_g, _out_pos, &_out_len, &_temp->value);
		_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x61);
		_st = _oss_load_enc_stack(_g, &_sp);
		_total_len += _data_len;
	    }
	    OSS_CNTX_POP(_oss_c)
	    _data_len = _total_len;
	}
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	_total_len += _data_len;
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x76);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eEncKrbCredPart(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncKrbCredPart	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (EncKrbCredPart *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(17,89)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 80)
	if (_in_data->bit_mask & EncKrbCredPart_r_address_present) {
	    _data_len = _edHostAddress(_g, _out_pos, &_out_len, &_in_data->r_address);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA5);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(81)
	if (_in_data->bit_mask & s_address_present) {
	    _data_len = _edHostAddress(_g, _out_pos, &_out_len, &_in_data->s_address);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA4);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(82)
	if (_in_data->bit_mask & EncKrbCredPart_usec_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->usec, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(83)
	if (_in_data->bit_mask & EncKrbCredPart_timestamp_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->timestamp);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(28)
	if (_in_data->bit_mask & nonce_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->nonce, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(90)
	{
	    struct _seqof5 * _temp;
	    unsigned long count;
	    unsigned long _lindex;
	    long _total_len = 0;
	    OSS_UINT32 _sp;
	    void **_st = _oss_load_enc_stack(_g, &_sp);
	    OSS_CNTX_NEW(_oss_c, 91)
	    for (_temp = _in_data->ticket_info, count = 0; _temp; _temp = _temp->next) {
		OSS_CNTX_SETOCC(count + 1)
		if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
		_st[_sp++] = _temp;
		count++;
	    }
	    for (_lindex = 0; _lindex < count; _lindex++) {
		OSS_CNTX_SETOCC(count - _lindex)
		_temp = (struct _seqof5 *)_st[--_sp];
		if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
		_oss_save_enc_stack(_g, _sp);
		{
		    long _total_len = 0;
		    OSS_CNTX_INIT

		    OSS_CNTX_PUSH(_oss_c, 42)
		    if (_temp->value.bit_mask & KrbCredInfo_caddr_present) {
			_data_len = _edHostAddresses(_g, _out_pos, &_out_len, &_temp->value.caddr);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAA);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(1)
		    if (_temp->value.bit_mask & KrbCredInfo_sname_present) {
			_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_temp->value.sname);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA9);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(43)
		    if (_temp->value.srealm) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
			if (_temp->value.srealm == NULL)
			    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
			_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _temp->value.srealm, -1);
			if (_data_len < 0) {
			    _constructed = TRUE;
			    _data_len = -_data_len;
			} else
			    _constructed = FALSE;
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA8);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(44)
		    if (_temp->value.bit_mask & KrbCredInfo_renew_till_present) {
			_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_temp->value.renew_till);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA7);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(45)
		    if (_temp->value.bit_mask & endtime_present) {
			_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_temp->value.endtime);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA6);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(46)
		    if (_temp->value.bit_mask & KrbCredInfo_starttime_present) {
			_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_temp->value.starttime);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA5);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(47)
		    if (_temp->value.bit_mask & authtime_present) {
			_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_temp->value.authtime);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA4);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(48)
		    if (_temp->value.bit_mask & flags_present) {
			_data_len = _oss_encd_dubit_ia(_g, _out_pos, &_out_len, _temp->value.flags.value, _temp->value.flags.length, -1, FALSE);
			if (_data_len < 0) {
			    _constructed = TRUE;
			    _data_len = -_data_len;
			} else
			    _constructed = FALSE;
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x23 : 0x3, 0xA3);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(92)
		    if (_temp->value.bit_mask & pname_present) {
			_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_temp->value.pname);
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(93)
		    if (_temp->value.prealm) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
			if (_temp->value.prealm == NULL)
			    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
			_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _temp->value.prealm, -1);
			if (_data_len < 0) {
			    _constructed = TRUE;
			    _data_len = -_data_len;
			} else
			    _constructed = FALSE;
			_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA1);
			_total_len += _data_len;
		    }
		    OSS_CNTX_SET(51)
		    _data_len = _edEncryptionKey(_g, _out_pos, &_out_len, &_temp->value.key);
		    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA0);
		    _total_len += _data_len;
		    OSS_CNTX_POP(_oss_c)
		    _data_len = _total_len;
		}
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
		_st = _oss_load_enc_stack(_g, &_sp);
		_total_len += _data_len;
	    }
	    OSS_CNTX_POP(_oss_c)
	    _data_len = _total_len;
	}
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x7D);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eKRB_ERROR(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_ERROR	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (KRB_ERROR *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(18,94)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 95)
	if (_in_data->bit_mask & e_data_present) {
	    _data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->e_data.value, _in_data->e_data.length, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xAC);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(96)
	if (_in_data->e_text) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_in_data->e_text == NULL)
		_oss_enc_error(_g, _bad_pointer, 0L);
#endif
	    _data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->e_text, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xAB);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(1)
	_data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->sname);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xAA);
	_total_len += _data_len;
	OSS_CNTX_SET(2)
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_in_data->realm == NULL)
	    _oss_enc_error(_g, _bad_pointer, 0L);
#endif
	_data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->realm, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA9);
	_total_len += _data_len;
	OSS_CNTX_SET(32)
	if (_in_data->bit_mask & KRB_ERROR_cname_present) {
	    _data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->cname);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA8);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(40)
	if (_in_data->crealm) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_in_data->crealm == NULL)
		_oss_enc_error(_g, _bad_pointer, 0L);
#endif
	    _data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->crealm, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA7);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(97)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->error_code, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA6);
	_total_len += _data_len;
	OSS_CNTX_SET(98)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->susec, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA5);
	_total_len += _data_len;
	OSS_CNTX_SET(99)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->stime);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA4);
	_total_len += _data_len;
	OSS_CNTX_SET(73)
	if (_in_data->bit_mask & cusec_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->cusec, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA3);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(72)
	if (_in_data->bit_mask & ctime_present) {
	    _data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->ctime);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(37)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->msg_type, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(38)
	_data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pvno, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0x7E);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eMETHOD_DATA(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    METHOD_DATA	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (METHOD_DATA *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(19,100)
    {
	struct METHOD_DATA * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 34)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct METHOD_DATA *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    _data_len = _edPA_DATA(_g, _out_pos, &_out_len, &_temp->value);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eTYPED_DATA(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    TYPED_DATA	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (TYPED_DATA *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(20,101)
    {
	struct TYPED_DATA * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 10)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct TYPED_DATA *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    {
		long _total_len = 0;
		OSS_CNTX_INIT

		OSS_CNTX_PUSH(_oss_c, 102)
		if (_temp->value.bit_mask & data_value_present) {
		    _data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _temp->value.data_value.value, _temp->value.data_value.length, -1);
		    if (_data_len < 0) {
			_constructed = TRUE;
			_data_len = -_data_len;
		    } else
			_constructed = FALSE;
		    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
		    _total_len += _data_len;
		}
		OSS_CNTX_SET(103)
		_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _temp->value.data_type, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
		_total_len += _data_len;
		OSS_CNTX_POP(_oss_c)
		_data_len = _total_len;
	    }
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _ePA_ENC_TIMESTAMP(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    PA_ENC_TIMESTAMP	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (PA_ENC_TIMESTAMP *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(21,104)
    _data_len = _edEncryptedData(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _ePA_ENC_TS_ENC(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    PA_ENC_TS_ENC	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (PA_ENC_TS_ENC *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(22,105)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 106)
	if (_in_data->bit_mask & pausec_present) {
	    _data_len = _oss_encd_uint_tl(_g, _out_pos, &_out_len, _in_data->pausec, 0x2);
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(107)
	_data_len = _oss_encd_gtime(_g, _out_pos, &_out_len, &_in_data->patimestamp);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x18, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eETYPE_INFO(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    ETYPE_INFO	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (ETYPE_INFO *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(23,108)
    {
	struct ETYPE_INFO * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 109)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct ETYPE_INFO *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    {
		long _total_len = 0;
		OSS_CNTX_INIT

		OSS_CNTX_PUSH(_oss_c, 110)
		if (_temp->value.bit_mask & salt_present) {
		    _data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _temp->value.salt.value, _temp->value.salt.length, -1);
		    if (_data_len < 0) {
			_constructed = TRUE;
			_data_len = -_data_len;
		    } else
			_constructed = FALSE;
		    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA1);
		    _total_len += _data_len;
		}
		OSS_CNTX_SET(17)
		_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _temp->value.etype, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
		_total_len += _data_len;
		OSS_CNTX_POP(_oss_c)
		_data_len = _total_len;
	    }
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eETYPE_INFO2(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    ETYPE_INFO2	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (ETYPE_INFO2 *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(24,111)
    {
	struct ETYPE_INFO2 * _temp;
	unsigned long count;
	unsigned long _lindex;
	long _total_len = 0;
	OSS_UINT32 _sp;
	void **_st = _oss_load_enc_stack(_g, &_sp);
	OSS_CNTX_NEW(_oss_c, 112)
	for (_temp = *_in_data, count = 0; _temp; _temp = _temp->next) {
	    OSS_CNTX_SETOCC(count + 1)
	    if (_sp == _MEM_ARRAY_SIZE) { _st = _oss_increment_enc_stack(_g); _sp = 0; }
	    _st[_sp++] = _temp;
	    count++;
	}
	for (_lindex = 0; _lindex < count; _lindex++) {
	    OSS_CNTX_SETOCC(count - _lindex)
	    _temp = (struct ETYPE_INFO2 *)_st[--_sp];
	    if (!_sp) { _st = _oss_decrement_enc_stack(_g); _sp = _MEM_ARRAY_SIZE; }
	    {
		long _total_len = 0;
		OSS_CNTX_INIT

		OSS_CNTX_PUSH(_oss_c, 113)
		if (_temp->value.bit_mask & s2kparams_present) {
		    _data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _temp->value.s2kparams.value, _temp->value.s2kparams.length, -1);
		    if (_data_len < 0) {
			_constructed = TRUE;
			_data_len = -_data_len;
		    } else
			_constructed = FALSE;
		    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA2);
		    _total_len += _data_len;
		}
		OSS_CNTX_SET(114)
		if (_temp->value.salt) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
		    if (_temp->value.salt == NULL)
			_oss_enc_error(_g, _bad_pointer, 0L);
#endif
		    _data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _temp->value.salt, -1);
		    if (_data_len < 0) {
			_constructed = TRUE;
			_data_len = -_data_len;
		    } else
			_constructed = FALSE;
		    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA1);
		    _total_len += _data_len;
		}
		OSS_CNTX_SET(17)
		_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _temp->value.etype, 0x2);
		_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
		_total_len += _data_len;
		OSS_CNTX_POP(_oss_c)
		_data_len = _total_len;
	    }
	    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
	    _total_len += _data_len;
	}
	_oss_save_enc_stack(_g, _sp);
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAD_IF_RELEVANT(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_IF_RELEVANT	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (AD_IF_RELEVANT *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(25,115)
    _data_len = _edAuthorizationData(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAD_KDCIssued(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_KDCIssued	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (AD_KDCIssued *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(26,116)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 117)
	_data_len = _edAuthorizationData(_g, _out_pos, &_out_len, &_in_data->elements);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA3);
	_total_len += _data_len;
	OSS_CNTX_SET(118)
	if (_in_data->bit_mask & i_sname_present) {
	    _data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->i_sname);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(119)
	if (_in_data->i_realm) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_in_data->i_realm == NULL)
		_oss_enc_error(_g, _bad_pointer, 0L);
#endif
	    _data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->i_realm, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(120)
	_data_len = _edChecksum(_g, _out_pos, &_out_len, &_in_data->ad_checksum);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAD_AND_OR(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_AND_OR	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (AD_AND_OR *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(27,121)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 117)
	_data_len = _edAuthorizationData(_g, _out_pos, &_out_len, &_in_data->elements);
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA1);
	_total_len += _data_len;
	OSS_CNTX_SET(122)
	_data_len = _oss_encd_int_tl(_g, _out_pos, &_out_len, _in_data->condition_count, 0x2);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eAD_MANDATORY_FOR_KDC(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_MANDATORY_FOR_KDC	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (AD_MANDATORY_FOR_KDC *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(28,123)
    _data_len = _edAuthorizationData(_g, _out_pos, &_out_len, _in_data);
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eKERB_PA_PAC_REQUEST(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KERB_PA_PAC_REQUEST	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    OSS_CNTX_INITZERO

    _in_data = (KERB_PA_PAC_REQUEST *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(29,124)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 125)
	_data_len = _oss_encd_bool_tl(_g, _out_pos, &_out_len, 0x1, _in_data->include_pac);
	_data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

static void _eChangePasswdData(OssGlobal * _g, void * _inbuf, char ** _outbuf, long * _outlen, unsigned int _flags)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    ChangePasswdData	*_in_data;
    char *_out_buf;
    char **_out_pos = &_out_buf;
    long _out_len;
    long _data_len = 0;
    ossBoolean _constructed = FALSE;
    OSS_CNTX_INITZERO

    _in_data = (ChangePasswdData *) _inbuf;
    if (!_oss_c->_buffer_provided) *_outbuf = NULL;
    _out_buf = *_outbuf;
    _out_len = _oss_c->_oss_outbuflen = (_oss_c->_buffer_provided) ? *_outlen : 0;
    _out_buf += _out_len;
    OSS_CNTX_ANCHOR_SET(30,126)
    {
	long _total_len = 0;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 127)
	if (_in_data->targrealm) {
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_in_data->targrealm == NULL)
		_oss_enc_error(_g, _bad_pointer, 0L);
#endif
	    _data_len = _oss_encd_nstr(_g, _out_pos, &_out_len, _in_data->targrealm, -1);
	    if (_data_len < 0) {
		_constructed = TRUE;
		_data_len = -_data_len;
	    } else
		_constructed = FALSE;
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x3B : 0x1B, 0xA2);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(128)
	if (_in_data->bit_mask & targname_present) {
	    _data_len = _edPrincipalName(_g, _out_pos, &_out_len, &_in_data->targname);
	    _data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, 0x30, 0xA1);
	    _total_len += _data_len;
	}
	OSS_CNTX_SET(129)
	_data_len = _oss_encd_uoct_ia(_g, _out_pos, &_out_len, _in_data->newpasswd.value, _in_data->newpasswd.length, -1);
	if (_data_len < 0) {
	    _constructed = TRUE;
	    _data_len = -_data_len;
	} else
	    _constructed = FALSE;
	_data_len += _oss_encd_tag_length2(_g, _out_pos, &_out_len, _data_len, _constructed ? 0x24 : 0x4, 0xA0);
	_total_len += _data_len;
	OSS_CNTX_POP(_oss_c)
	_data_len = _total_len;
    }
    _data_len += _oss_encd_tag_length(_g, _out_pos, &_out_len, _data_len, 0x30);
    if (!_oss_c->_buffer_provided)
	_oss_set_outmem_d(_g, _out_len, _outlen, _outbuf);
    else {
	if (_flags & FRONT_ALIGN)
	    memmove(*_outbuf, *_out_pos, (size_t) _data_len);
	else
	    *_outbuf = *_out_pos;
	*_outlen = _data_len;
    }

    OSS_CNTX_POP(_oss_c)
}

void DLL_ENTRY_FDEF _emKerberosV5Spec2(struct ossGlobal * _g, int _pdunum, void * _inbuf)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char **_outbuf = &_oss_c->_oss_outbufpos;
    long *_outlen = &_oss_c->_oss_outbuflen;
    unsigned int _flags = _g->encodingFlags;
    _oss_c->_oss_context_anchor._state = _encoding_data;
    _oss_c->_oss_context_anchor._pdu_number = 0;
#if OSSDEBUG > 0
    if (_oss_c->reserved.fields.ext->debug_flags)
	_oss_db_e_pre(_g, _pdunum, _inbuf, NULL, _oss_c->_oss_outbufpos, _oss_c->_oss_outbuflen);
#else
    _oss_c->_oss_err_msg = NULL;
#endif

    if (_pdunum < 1 || _pdunum > 30)
	_oss_enc_error(_g, _pdu_range, _pdunum);
    else
	_Encoders[_pdunum - 1](_g, _inbuf, _outbuf, _outlen, _flags);
#if OSSDEBUG > 0
    _oss_c->_oss_err_msg = NULL;
    if (_oss_c->reserved.fields.ext->debug_flags)
	_oss_db_e_post(_g, 0, *_outbuf, *_outlen);
#endif
}

static void _d_Ticket(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, Ticket * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 3)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->tkt_vno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->tkt_vno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(2)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->realm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(1)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->sname);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(0)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x83);
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->enc_part);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d__seqof1(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof1 * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct _seqof1 * _head = NULL;
	struct _seqof1 * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 4)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct _seqof1 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof1));
	    _head = _cur;
	    for (;;) {
		struct _seqof1 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x1B)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x1B0000);
		_temp->value = NULL;
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_temp->value, -1);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof1 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof1));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_PrincipalName(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, PrincipalName * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 6)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->name_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(5)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d__seqof1(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->name_string);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_HostAddress(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, HostAddress * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 8)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->addr_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(7)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->address.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->address.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_HostAddresses(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, HostAddresses * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct HostAddresses * _head = NULL;
	struct HostAddresses * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 9)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct HostAddresses *)_oss_dec_const_alloc(_g, sizeof(struct HostAddresses));
	    _head = _cur;
	    for (;;) {
		struct HostAddresses * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct HostAddresses *)_oss_dec_const_alloc(_g, sizeof(struct HostAddresses));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_AuthorizationData(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, AuthorizationData * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct AuthorizationData * _head = NULL;
	struct AuthorizationData * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 10)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct AuthorizationData *)_oss_dec_const_alloc(_g, sizeof(struct AuthorizationData));
	    _head = _cur;
	    for (;;) {
		struct AuthorizationData * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
			++_oss_c->reserved.fields.ext->seqSetNestingCounter >
			_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
		{
		    int _indef_tags = 0;
		    long _total_len = _data_length;
		    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
		    OSS_CNTX_INIT

		    OSS_CNTX_PUSH(_oss_c, 12)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
		    _data_tag = 0x8000;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		    _data_tag = 0x2;
		    _temp->value.ad_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_SET(11)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
		    _data_tag = 0x8001;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_oss_c->_bitpos = _bufpos[0] & 0x20;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
		    _data_tag = 0x4;
		    _temp->value.ad_data.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_temp->value.ad_data.value, 0);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_POP(_oss_c)
		    if (_bufpos != _end_pos) {
			if (_total_len < 0) {
			    if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
				_buflen--;
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

			    if (_data_tag)
				_oss_dec_error(_g, _expec_eoc, 0L);
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			} else
			    _oss_dec_error(_g, _inconsis_len, 0L);
		    }
		}
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct AuthorizationData *)_oss_dec_const_alloc(_g, sizeof(struct AuthorizationData));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_PA_DATA(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, PA_DATA * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 14)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->padata_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(13)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->padata_value.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->padata_value.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_EncryptedData(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, EncryptedData * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 17)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->etype = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~kvno_present;
	else {
	    _out_data->bit_mask |= kvno_present;
	    OSS_CNTX_PUSH(_oss_c, 16)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->kvno = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 15)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->cipher.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->cipher.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_EncryptionKey(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, EncryptionKey * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 19)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->keytype = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(18)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->keyvalue.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->keyvalue.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_Checksum(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, Checksum * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 21)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->cksumtype = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(20)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->checksum.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->checksum.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d__seqof2(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof2 * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct _seqof2 * _head = NULL;
	struct _seqof2 * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 22)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct _seqof2 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof2));
	    _head = _cur;
	    for (;;) {
		struct _seqof2 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x2)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x20000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_temp->value = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof2 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof2));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d__seqof3(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof3 * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct _seqof3 * _head = NULL;
	struct _seqof3 * _cur;
	int _indef_tags = 0;

	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 23)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct _seqof3 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof3));
	    _head = _cur;
	    for (;;) {
		struct _seqof3 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x4001)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x40010000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		if (_data_length < 0) ++_indef_tags;
		if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
		_data_tag = 0x10;
		_d_Ticket(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		while (_indef_tags > 0) {
		    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			if (!_buflen || _bufpos[0])
			    _oss_dec_error(_g, _expec_eoc, 0L);
			else
			    _oss_dec_error(_g, _non_std_eoc, 0L);
		    _indef_tags--;
		}
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof3 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof3));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_KDC_REQ_BODY(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, KDC_REQ_BODY * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 33)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 3 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x3);
	_data_tag = 0x3;
	_out_data->kdc_options.length = _oss_dec_ubit_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->kdc_options.value, 0, 0);

	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~KDC_REQ_BODY_cname_present;
	else {
	    _out_data->bit_mask |= KDC_REQ_BODY_cname_present;
	    OSS_CNTX_PUSH(_oss_c, 32)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cname);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 2)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->realm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~KDC_REQ_BODY_sname_present;
	else {
	    _out_data->bit_mask |= KDC_REQ_BODY_sname_present;
	    OSS_CNTX_PUSH(_oss_c, 1)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->sname);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8004 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~from_present;
	else {
	    _out_data->bit_mask |= from_present;
	    OSS_CNTX_PUSH(_oss_c, 31)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8004;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->from);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 30)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8005) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x85 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80050000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8005;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->till);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8006 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~rtime_present;
	else {
	    _out_data->bit_mask |= rtime_present;
	    OSS_CNTX_PUSH(_oss_c, 29)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8006) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x86 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80060000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8006;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->rtime);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 28)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 167 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8007) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x87 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80070000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8007;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->nonce = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(27)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 168 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x88);
	_data_tag = 0x8008;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d__seqof2(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->etype);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8009 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~addresses_present;
	else {
	    _out_data->bit_mask |= addresses_present;
	    OSS_CNTX_PUSH(_oss_c, 26)
	    _out_data->addresses = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 169 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8009) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x89 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80090000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8009;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddresses(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->addresses);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800A || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~enc_authorization_data_present;
	else {
	    _out_data->bit_mask |= enc_authorization_data_present;
	    OSS_CNTX_PUSH(_oss_c, 25)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 170 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800A) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8A : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800A0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800A;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->enc_authorization_data);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800B || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~additional_tickets_present;
	else {
	    _out_data->bit_mask |= additional_tickets_present;
	    OSS_CNTX_PUSH(_oss_c, 24)
	    _out_data->additional_tickets = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 171 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800B) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8B : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800B0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800B;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d__seqof3(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->additional_tickets);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d__seqof4(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, _seqof4 * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct _seqof4 * _head = NULL;
	struct _seqof4 * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 34)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct _seqof4 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof4));
	    _head = _cur;
	    for (;;) {
		struct _seqof4 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_d_PA_DATA(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof4 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof4));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_KDC_REQ(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, KDC_REQ * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 38)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~KDC_REQ_padata_present;
	else {
	    _out_data->bit_mask |= KDC_REQ_padata_present;
	    OSS_CNTX_PUSH(_oss_c, 36)
	    _out_data->padata = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d__seqof4(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->padata);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 35)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_KDC_REQ_BODY(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->req_body);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d__1(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, struct _seqof4 ** _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct _seqof4 * _head = NULL;
	struct _seqof4 * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 34)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct _seqof4 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof4));
	    _head = _cur;
	    for (;;) {
		struct _seqof4 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_d_PA_DATA(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof4 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof4));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_KDC_REP(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, KDC_REP * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 38)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~KDC_REP_padata_present;
	else {
	    _out_data->bit_mask |= KDC_REP_padata_present;
	    OSS_CNTX_PUSH(_oss_c, 36)
	    _out_data->padata = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d__1(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->padata);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 40)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->crealm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(32)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x84);
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cname);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(39)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x85);
	_data_tag = 0x8005;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 97 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x41);
	_data_tag = 0x4001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_Ticket(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->ticket);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(0)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x86);
	_data_tag = 0x8006;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->enc_part);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d__2(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, struct _seqof4 ** _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct _seqof4 * _head = NULL;
	struct _seqof4 * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 34)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct _seqof4 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof4));
	    _head = _cur;
	    for (;;) {
		struct _seqof4 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_d_PA_DATA(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof4 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof4));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_EncKDCRepPart(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, EncKDCRepPart * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 51)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8000) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x80 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80000000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptionKey(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->key);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(50)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_LastReq(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->last_req);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(28)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->nonce = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~key_expiration_present;
	else {
	    _out_data->bit_mask |= key_expiration_present;
	    OSS_CNTX_PUSH(_oss_c, 49)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->key_expiration);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 48)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 3 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x3);
	_data_tag = 0x3;
	_out_data->flags.length = _oss_dec_ubit_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->flags.value, 0, 0);

	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(47)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x85);
	_data_tag = 0x8005;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->authtime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8006 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKDCRepPart_starttime_present;
	else {
	    _out_data->bit_mask |= EncKDCRepPart_starttime_present;
	    OSS_CNTX_PUSH(_oss_c, 46)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8006) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x86 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80060000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8006;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->starttime);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 45)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 167 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8007) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x87 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80070000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8007;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->endtime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8008 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKDCRepPart_renew_till_present;
	else {
	    _out_data->bit_mask |= EncKDCRepPart_renew_till_present;
	    OSS_CNTX_PUSH(_oss_c, 44)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 168 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8008) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x88 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80080000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8008;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->renew_till);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 43)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 169 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8009) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x89 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80090000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8009;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->srealm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(1)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 170 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x8A);
	_data_tag = 0x800A;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->sname);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800B || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKDCRepPart_caddr_present;
	else {
	    _out_data->bit_mask |= EncKDCRepPart_caddr_present;
	    OSS_CNTX_PUSH(_oss_c, 42)
	    _out_data->caddr = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 171 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800B) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8B : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800B0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800B;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddresses(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->caddr);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800C || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~encrypted_pa_data_present;
	else {
	    _out_data->bit_mask |= encrypted_pa_data_present;
	    OSS_CNTX_PUSH(_oss_c, 41)
	    _out_data->encrypted_pa_data = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 172 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800C) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8C : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800C0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800C;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d__2(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->encrypted_pa_data);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void _d_LastReq(OssGlobal * _g, char ** _in_pos, long * _buf_len, long _data_length, unsigned int _data_tag, LastReq * _out_data)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    char *_bufpos = *_in_pos;
    long _buflen = *_buf_len;

#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct LastReq * _head = NULL;
	struct LastReq * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 10)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct LastReq *)_oss_dec_const_alloc(_g, sizeof(struct LastReq));
	    _head = _cur;
	    for (;;) {
		struct LastReq * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
			++_oss_c->reserved.fields.ext->seqSetNestingCounter >
			_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
		{
		    int _indef_tags = 0;
		    long _total_len = _data_length;
		    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
		    OSS_CNTX_INIT

		    OSS_CNTX_PUSH(_oss_c, 53)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
		    _data_tag = 0x8000;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		    _data_tag = 0x2;
		    _temp->value.lr_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_SET(52)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
		    _data_tag = 0x8001;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
		    _data_tag = 0x18;
		    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_temp->value.lr_value);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_POP(_oss_c)
		    if (_bufpos != _end_pos) {
			if (_total_len < 0) {
			    if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
				_buflen--;
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

			    if (_data_tag)
				_oss_dec_error(_g, _expec_eoc, 0L);
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			} else
			    _oss_dec_error(_g, _inconsis_len, 0L);
		    }
		}
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct LastReq *)_oss_dec_const_alloc(_g, sizeof(struct LastReq));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    *_in_pos = _bufpos;
    *_buf_len = _buflen;
}

static void * _dTicket(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    Ticket *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(1,54)
    _out_data = (struct Ticket *)_oss_dec_const_alloc(_g, sizeof(struct Ticket));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 97 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x41);
    _data_tag = 0x4001;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_Ticket(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dEncTicketPart(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncTicketPart *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(2,55)
    _out_data = (struct EncTicketPart *)_oss_dec_const_alloc(_g, sizeof(struct EncTicketPart));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 99 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x43);
    _data_tag = 0x4003;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 48)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 3 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x3);
	_data_tag = 0x3;
	_out_data->flags.length = _oss_dec_ubit_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->flags.value, 0, 0);

	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(51)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptionKey(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->key);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(40)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->crealm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(32)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x83);
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cname);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(57)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x84);
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
		++_oss_c->reserved.fields.ext->seqSetNestingCounter >
		_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
	{
	    int _indef_tags = 0;
	    long _total_len = _data_length;
	    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	    OSS_CNTX_INIT

	    OSS_CNTX_PUSH(_oss_c, 59)
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	    _data_tag = 0x8000;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->transited.tr_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_SET(58)
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	    _data_tag = 0x4;
	    _out_data->transited.contents.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->transited.contents.value, 0);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	    if (_bufpos != _end_pos) {
		if (_total_len < 0) {
		    if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
			_buflen--;
			_bufpos++;
		    } else
			_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		    if (_data_tag)
			_oss_dec_error(_g, _expec_eoc, 0L);
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		} else
		    _oss_dec_error(_g, _inconsis_len, 0L);
	    }
	}
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(47)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x85);
	_data_tag = 0x8005;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->authtime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8006 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncTicketPart_starttime_present;
	else {
	    _out_data->bit_mask |= EncTicketPart_starttime_present;
	    OSS_CNTX_PUSH(_oss_c, 46)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8006) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x86 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80060000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8006;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->starttime);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 45)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 167 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8007) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x87 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80070000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8007;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->endtime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8008 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncTicketPart_renew_till_present;
	else {
	    _out_data->bit_mask |= EncTicketPart_renew_till_present;
	    OSS_CNTX_PUSH(_oss_c, 44)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 168 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8008) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x88 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80080000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8008;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->renew_till);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8009 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncTicketPart_caddr_present;
	else {
	    _out_data->bit_mask |= EncTicketPart_caddr_present;
	    OSS_CNTX_PUSH(_oss_c, 42)
	    _out_data->caddr = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 169 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8009) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x89 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80090000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8009;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddresses(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->caddr);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800A || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncTicketPart_authorization_data_present;
	else {
	    _out_data->bit_mask |= EncTicketPart_authorization_data_present;
	    OSS_CNTX_PUSH(_oss_c, 56)
	    _out_data->authorization_data = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 170 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800A) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8A : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800A0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800A;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_AuthorizationData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->authorization_data);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAS_REQ(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AS_REQ *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(3,60)
    _out_data = (struct KDC_REQ *)_oss_dec_const_alloc(_g, sizeof(struct KDC_REQ));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 106 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4A);
    _data_tag = 0x400A;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_KDC_REQ(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dTGS_REQ(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    TGS_REQ *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(4,61)
    _out_data = (struct KDC_REQ *)_oss_dec_const_alloc(_g, sizeof(struct KDC_REQ));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 108 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4C);
    _data_tag = 0x400C;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_KDC_REQ(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAS_REP(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AS_REP *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(5,62)
    _out_data = (struct KDC_REP *)_oss_dec_const_alloc(_g, sizeof(struct KDC_REP));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 107 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4B);
    _data_tag = 0x400B;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_KDC_REP(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dTGS_REP(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    TGS_REP *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(6,63)
    _out_data = (struct KDC_REP *)_oss_dec_const_alloc(_g, sizeof(struct KDC_REP));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 109 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4D);
    _data_tag = 0x400D;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_KDC_REP(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dEncASRepPart(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncASRepPart *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(7,64)
    _out_data = (struct EncKDCRepPart *)_oss_dec_const_alloc(_g, sizeof(struct EncKDCRepPart));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 121 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x59);
    _data_tag = 0x4019;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_EncKDCRepPart(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dEncTGSRepPart(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncTGSRepPart *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(8,65)
    _out_data = (struct EncKDCRepPart *)_oss_dec_const_alloc(_g, sizeof(struct EncKDCRepPart));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 122 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x5A);
    _data_tag = 0x401A;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_EncKDCRepPart(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAP_REQ(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AP_REQ *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(9,66)
    _out_data = (struct AP_REQ *)_oss_dec_const_alloc(_g, sizeof(struct AP_REQ));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 110 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4E);
    _data_tag = 0x400E;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 38)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(68)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 3 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x3);
	_data_tag = 0x3;
	_out_data->ap_options.length = _oss_dec_ubit_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->ap_options.value, 0, 0);

	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(39)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x83);
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 97 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x41);
	_data_tag = 0x4001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_Ticket(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->ticket);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(67)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x84);
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->authenticator);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAuthenticator(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    Authenticator *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(10,69)
    _out_data = (struct Authenticator *)_oss_dec_const_alloc(_g, sizeof(struct Authenticator));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 98 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x42);
    _data_tag = 0x4002;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 75)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->authenticator_vno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->authenticator_vno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(40)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->crealm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(32)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cname);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~cksum_present;
	else {
	    _out_data->bit_mask |= cksum_present;
	    OSS_CNTX_PUSH(_oss_c, 74)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_Checksum(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cksum);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 73)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->cusec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(72)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x85);
	_data_tag = 0x8005;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->ctime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8006 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~Authenticator_subkey_present;
	else {
	    _out_data->bit_mask |= Authenticator_subkey_present;
	    OSS_CNTX_PUSH(_oss_c, 71)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8006) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x86 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80060000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8006;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_EncryptionKey(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->subkey);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8007 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~Authenticator_seq_number_present;
	else {
	    _out_data->bit_mask |= Authenticator_seq_number_present;
	    OSS_CNTX_PUSH(_oss_c, 70)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 167 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8007) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x87 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80070000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8007;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->seq_number = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8008 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~Authenticator_authorization_data_present;
	else {
	    _out_data->bit_mask |= Authenticator_authorization_data_present;
	    OSS_CNTX_PUSH(_oss_c, 56)
	    _out_data->authorization_data = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 168 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8008) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x88 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80080000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8008;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_AuthorizationData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->authorization_data);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAP_REP(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AP_REP *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(11,76)
    _out_data = (struct AP_REP *)_oss_dec_const_alloc(_g, sizeof(struct AP_REP));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 111 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4F);
    _data_tag = 0x400F;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 38)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(0)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->enc_part);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dEncAPRepPart(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncAPRepPart *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(12,77)
    _out_data = (struct EncAPRepPart *)_oss_dec_const_alloc(_g, sizeof(struct EncAPRepPart));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 123 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x5B);
    _data_tag = 0x401B;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 72)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->ctime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(73)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->cusec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncAPRepPart_subkey_present;
	else {
	    _out_data->bit_mask |= EncAPRepPart_subkey_present;
	    OSS_CNTX_PUSH(_oss_c, 71)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_EncryptionKey(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->subkey);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncAPRepPart_seq_number_present;
	else {
	    _out_data->bit_mask |= EncAPRepPart_seq_number_present;
	    OSS_CNTX_PUSH(_oss_c, 70)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->seq_number = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dKRB_SAFE(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_SAFE *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(13,78)
    _out_data = (struct KRB_SAFE *)_oss_dec_const_alloc(_g, sizeof(struct KRB_SAFE));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 116 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x54);
    _data_tag = 0x4014;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 38)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(79)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
		++_oss_c->reserved.fields.ext->seqSetNestingCounter >
		_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
	{
	    int _indef_tags = 0;
	    long _total_len = _data_length;
	    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	    OSS_CNTX_INIT

	    _out_data->safe_body.bit_mask = 0;
	    OSS_CNTX_PUSH(_oss_c, 84)
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	    _data_tag = 0x8000;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	    _data_tag = 0x4;
	    _out_data->safe_body.user_data.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->safe_body.user_data.value, 0);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	    if (_bufpos < _end_pos) {
		if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
		_oss_c->_tag_decoded = TRUE;
	    }
	    if (_data_tag != 0x8001 || _bufpos >= _end_pos)
		_out_data->safe_body.bit_mask &= ~KRB_SAFE_BODY_timestamp_present;
	    else {
		_out_data->safe_body.bit_mask |= KRB_SAFE_BODY_timestamp_present;
		OSS_CNTX_PUSH(_oss_c, 83)
		if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else {
		    if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		    } else
			_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		    _oss_c->_tag_decoded = FALSE;
		}
		_data_tag = 0x8001;
		if (_data_length < 0) ++_indef_tags;
		if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
		_data_tag = 0x18;
		_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->safe_body.timestamp);
		while (_indef_tags > 0) {
		    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			if (!_buflen || _bufpos[0])
			    _oss_dec_error(_g, _expec_eoc, 0L);
			else
			    _oss_dec_error(_g, _non_std_eoc, 0L);
		    _indef_tags--;
		}
		OSS_CNTX_POP(_oss_c)
	    }
	    if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
		if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
		_oss_c->_tag_decoded = TRUE;
	    }
	    if (_data_tag != 0x8002 || _bufpos >= _end_pos)
		_out_data->safe_body.bit_mask &= ~KRB_SAFE_BODY_usec_present;
	    else {
		_out_data->safe_body.bit_mask |= KRB_SAFE_BODY_usec_present;
		OSS_CNTX_PUSH(_oss_c, 82)
		if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else {
		    if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		    } else
			_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		    _oss_c->_tag_decoded = FALSE;
		}
		_data_tag = 0x8002;
		if (_data_length < 0) ++_indef_tags;
		if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		_data_tag = 0x2;
		_out_data->safe_body.usec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
		while (_indef_tags > 0) {
		    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			if (!_buflen || _bufpos[0])
			    _oss_dec_error(_g, _expec_eoc, 0L);
			else
			    _oss_dec_error(_g, _non_std_eoc, 0L);
		    _indef_tags--;
		}
		OSS_CNTX_POP(_oss_c)
	    }
	    if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
		if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
		_oss_c->_tag_decoded = TRUE;
	    }
	    if (_data_tag != 0x8003 || _bufpos >= _end_pos)
		_out_data->safe_body.bit_mask &= ~KRB_SAFE_BODY_seq_number_present;
	    else {
		_out_data->safe_body.bit_mask |= KRB_SAFE_BODY_seq_number_present;
		OSS_CNTX_PUSH(_oss_c, 70)
		if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else {
		    if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		    } else
			_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		    _oss_c->_tag_decoded = FALSE;
		}
		_data_tag = 0x8003;
		if (_data_length < 0) ++_indef_tags;
		if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		_data_tag = 0x2;
		_out_data->safe_body.seq_number = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
		while (_indef_tags > 0) {
		    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			if (!_buflen || _bufpos[0])
			    _oss_dec_error(_g, _expec_eoc, 0L);
			else
			    _oss_dec_error(_g, _non_std_eoc, 0L);
		    _indef_tags--;
		}
		OSS_CNTX_POP(_oss_c)
	    }
	    OSS_CNTX_PUSH(_oss_c, 81)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8004;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->safe_body.s_address);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	    if (_bufpos < _end_pos) {
		if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
		_oss_c->_tag_decoded = TRUE;
	    }
	    if (_data_tag != 0x8005 || _bufpos >= _end_pos)
		_out_data->safe_body.bit_mask &= ~KRB_SAFE_BODY_r_address_present;
	    else {
		_out_data->safe_body.bit_mask |= KRB_SAFE_BODY_r_address_present;
		OSS_CNTX_PUSH(_oss_c, 80)
		if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else {
		    if (!_oss_c->_tag_decoded || _data_tag == 0x8005) {
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x85 : 0);
		    } else
			_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80050000);
		    _oss_c->_tag_decoded = FALSE;
		}
		_data_tag = 0x8005;
		if (_data_length < 0) ++_indef_tags;
		if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
		_data_tag = 0x10;
		_d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->safe_body.r_address);
		while (_indef_tags > 0) {
		    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			if (!_buflen || _bufpos[0])
			    _oss_dec_error(_g, _expec_eoc, 0L);
			else
			    _oss_dec_error(_g, _non_std_eoc, 0L);
		    _indef_tags--;
		}
		OSS_CNTX_POP(_oss_c)
	    }
	    if (_bufpos != _end_pos) {
		if (_total_len < 0) {
		    if (!_oss_c->_tag_decoded)
			_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		    if (_data_tag)
			_oss_dec_error(_g, _expec_eoc, 0L);
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		} else
		    _oss_dec_error(_g, _inconsis_len, 0L);
	    }
	}
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(74)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x83);
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_Checksum(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cksum);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dKRB_PRIV(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_PRIV *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(14,85)
    _out_data = (struct KRB_PRIV *)_oss_dec_const_alloc(_g, sizeof(struct KRB_PRIV));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 117 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x55);
    _data_tag = 0x4015;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 38)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(0)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x83);
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->enc_part);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dEncKrbPrivPart(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncKrbPrivPart *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(15,86)
    _out_data = (struct EncKrbPrivPart *)_oss_dec_const_alloc(_g, sizeof(struct EncKrbPrivPart));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 124 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x5C);
    _data_tag = 0x401C;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 84)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->user_data.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->user_data.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbPrivPart_timestamp_present;
	else {
	    _out_data->bit_mask |= EncKrbPrivPart_timestamp_present;
	    OSS_CNTX_PUSH(_oss_c, 83)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->timestamp);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbPrivPart_usec_present;
	else {
	    _out_data->bit_mask |= EncKrbPrivPart_usec_present;
	    OSS_CNTX_PUSH(_oss_c, 82)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->usec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbPrivPart_seq_number_present;
	else {
	    _out_data->bit_mask |= EncKrbPrivPart_seq_number_present;
	    OSS_CNTX_PUSH(_oss_c, 70)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->seq_number = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 81)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->s_address);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8005 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbPrivPart_r_address_present;
	else {
	    _out_data->bit_mask |= EncKrbPrivPart_r_address_present;
	    OSS_CNTX_PUSH(_oss_c, 80)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8005) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x85 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80050000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8005;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->r_address);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dKRB_CRED(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_CRED *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(16,87)
    _out_data = (struct KRB_CRED *)_oss_dec_const_alloc(_g, sizeof(struct KRB_CRED));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 118 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x56);
    _data_tag = 0x4016;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 38)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(88)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x82);
	_data_tag = 0x8002;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
		++_oss_c->reserved.fields.ext->seqSetNestingCounter >
		_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
	{
	    struct _seqof3 * _head = NULL;
	    struct _seqof3 * _cur;
	    int _indef_tags = 0;

	    long _total_len = _data_length;
	    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	    unsigned long count = 0;
#endif
	    OSS_CNTX_INIT

	    do {
		OSS_CNTX_PUSH(_oss_c, 23)
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof3 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof3));
		_head = _cur;
		for (;;) {
		    struct _seqof3 * _temp = _cur;
#if OSSDEBUG > 1
		    count++;
#endif
		    if (_data_tag != 0x4001)
			_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x40010000);
		    OSS_CNTX_SETOCC(count)
		    _oss_c->_tag_decoded = FALSE;
		    if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
			_buflen--;
			_bufpos++;
		    } else
			_data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
		    _data_tag = 0x10;
		    _d_Ticket(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
			if (_bufpos > _end_pos)
			    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
			break;
		    }
		    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
			_buflen--;
			_oss_c->_bitpos = _bufpos[0] & 0x20;
			_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
			_bufpos++;
		    } else
			if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			    break;
			}
		    _oss_c->_tag_decoded = TRUE;
		    _cur = (struct _seqof3 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof3));
		    _temp->next = _cur;
		}
		_cur->next = NULL;
	    } while (0);
	    _out_data->tickets = _head;
	    OSS_CNTX_POP(_oss_c)
	}
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(0)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x83);
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->enc_part);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dEncKrbCredPart(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    EncKrbCredPart *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(17,89)
    _out_data = (struct EncKrbCredPart *)_oss_dec_const_alloc(_g, sizeof(struct EncKrbCredPart));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 125 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x5D);
    _data_tag = 0x401D;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 90)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
		++_oss_c->reserved.fields.ext->seqSetNestingCounter >
		_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
	{
	    struct _seqof5 * _head = NULL;
	    struct _seqof5 * _cur;
	    long _total_len = _data_length;
	    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	    unsigned long count = 0;
#endif
	    OSS_CNTX_INIT

	    do {
		OSS_CNTX_PUSH(_oss_c, 91)
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct _seqof5 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof5));
		_head = _cur;
		for (;;) {
		    struct _seqof5 * _temp = _cur;
#if OSSDEBUG > 1
		    count++;
#endif
		    if (_data_tag != 0x10)
			_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		    OSS_CNTX_SETOCC(count)
		    _oss_c->_tag_decoded = FALSE;
		    if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
			_buflen--;
			_bufpos++;
		    } else
			_data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
#ifndef OSS_NO_NESTING_CONTROL
		    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
			    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
			    _oss_c->reserved.fields.ext->seqSetNestingLimit)
			_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
		    {
			int _indef_tags = 0;
			long _total_len = _data_length;
			char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
			OSS_CNTX_INIT

			_temp->value.bit_mask = 0;
			OSS_CNTX_PUSH(_oss_c, 51)
			if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
			_data_tag = 0x8000;
			if (_data_length < 0) ++_indef_tags;
			if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
			_data_tag = 0x10;
			_d_EncryptionKey(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value.key);
			while (_indef_tags > 0) {
			    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				if (!_buflen || _bufpos[0])
				    _oss_dec_error(_g, _expec_eoc, 0L);
				else
				    _oss_dec_error(_g, _non_std_eoc, 0L);
			    _indef_tags--;
			}
			OSS_CNTX_POP(_oss_c)
			if (_bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8001 || _bufpos >= _end_pos)
			    _temp->value.prealm = NULL;
			else {
			    OSS_CNTX_PUSH(_oss_c, 93)
			    _temp->value.prealm = NULL;
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8001;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
			    _data_tag = 0x1B;
			    _oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_temp->value.prealm, -1);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8002 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~pname_present;
			else {
			    _temp->value.bit_mask |= pname_present;
			    OSS_CNTX_PUSH(_oss_c, 92)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8002;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
			    _data_tag = 0x10;
			    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value.pname);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8003 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~flags_present;
			else {
			    _temp->value.bit_mask |= flags_present;
			    OSS_CNTX_PUSH(_oss_c, 48)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8003;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 3 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x3);
			    _data_tag = 0x3;
			    _temp->value.flags.length = _oss_dec_ubit_ia(_g, &_bufpos, &_buflen, _data_length, &_temp->value.flags.value, 0, 0);

			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8004 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~authtime_present;
			else {
			    _temp->value.bit_mask |= authtime_present;
			    OSS_CNTX_PUSH(_oss_c, 47)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8004;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
			    _data_tag = 0x18;
			    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_temp->value.authtime);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8005 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~KrbCredInfo_starttime_present;
			else {
			    _temp->value.bit_mask |= KrbCredInfo_starttime_present;
			    OSS_CNTX_PUSH(_oss_c, 46)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8005) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x85 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80050000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8005;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
			    _data_tag = 0x18;
			    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_temp->value.starttime);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8006 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~endtime_present;
			else {
			    _temp->value.bit_mask |= endtime_present;
			    OSS_CNTX_PUSH(_oss_c, 45)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8006) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x86 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80060000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8006;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
			    _data_tag = 0x18;
			    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_temp->value.endtime);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8007 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~KrbCredInfo_renew_till_present;
			else {
			    _temp->value.bit_mask |= KrbCredInfo_renew_till_present;
			    OSS_CNTX_PUSH(_oss_c, 44)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 167 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8007) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x87 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80070000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8007;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
			    _data_tag = 0x18;
			    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_temp->value.renew_till);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8008 || _bufpos >= _end_pos)
			    _temp->value.srealm = NULL;
			else {
			    OSS_CNTX_PUSH(_oss_c, 43)
			    _temp->value.srealm = NULL;
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 168 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8008) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x88 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80080000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8008;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
				_buflen -= 2;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
			    _data_tag = 0x1B;
			    _oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_temp->value.srealm, -1);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x8009 || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~KrbCredInfo_sname_present;
			else {
			    _temp->value.bit_mask |= KrbCredInfo_sname_present;
			    OSS_CNTX_PUSH(_oss_c, 1)
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 169 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x8009) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x89 : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80090000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x8009;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
			    _data_tag = 0x10;
			    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value.sname);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
				_buflen--;
				_oss_c->_bitpos = _bufpos[0] & 0x20;
				_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
				_bufpos++;
			    } else
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			    _oss_c->_tag_decoded = TRUE;
			}
			if (_data_tag != 0x800A || _bufpos >= _end_pos)
			    _temp->value.bit_mask &= ~KrbCredInfo_caddr_present;
			else {
			    _temp->value.bit_mask |= KrbCredInfo_caddr_present;
			    OSS_CNTX_PUSH(_oss_c, 42)
			    _temp->value.caddr = NULL;
			    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 170 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else {
				if (!_oss_c->_tag_decoded || _data_tag == 0x800A) {
				    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8A : 0);
				} else
				    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800A0000);
				_oss_c->_tag_decoded = FALSE;
			    }
			    _data_tag = 0x800A;
			    if (_data_length < 0) ++_indef_tags;
			    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
			    _data_tag = 0x10;
			    _d_HostAddresses(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value.caddr);
			    while (_indef_tags > 0) {
				if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				    _buflen -= 2;
				    _bufpos += 2;
				} else
				    if (!_buflen || _bufpos[0])
					_oss_dec_error(_g, _expec_eoc, 0L);
				    else
					_oss_dec_error(_g, _non_std_eoc, 0L);
				_indef_tags--;
			    }
			    OSS_CNTX_POP(_oss_c)
			}
			if (_bufpos != _end_pos) {
			    if (_total_len < 0) {
				if (!_oss_c->_tag_decoded)
				    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

				if (_data_tag)
				    _oss_dec_error(_g, _expec_eoc, 0L);
				if (_oss_dec_length(_g, &_bufpos, &_buflen))
				    _oss_dec_error(_g, _non_std_eoc, 0L);
				_oss_c->_tag_decoded = FALSE;
			    } else
				_oss_dec_error(_g, _inconsis_len, 0L);
			}
		    }
#ifndef OSS_NO_NESTING_CONTROL
		    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
			_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
		    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
			if (_bufpos > _end_pos)
			    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
			break;
		    }
		    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
			_buflen--;
			_oss_c->_bitpos = _bufpos[0] & 0x20;
			_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
			_bufpos++;
		    } else
			if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			    break;
			}
		    _oss_c->_tag_decoded = TRUE;
		    _cur = (struct _seqof5 *)_oss_dec_const_alloc(_g, sizeof(struct _seqof5));
		    _temp->next = _cur;
		}
		_cur->next = NULL;
	    } while (0);
	    _out_data->ticket_info = _head;
	    OSS_CNTX_POP(_oss_c)
	}
#ifndef OSS_NO_NESTING_CONTROL
	if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~nonce_present;
	else {
	    _out_data->bit_mask |= nonce_present;
	    OSS_CNTX_PUSH(_oss_c, 28)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->nonce = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbCredPart_timestamp_present;
	else {
	    _out_data->bit_mask |= EncKrbCredPart_timestamp_present;
	    OSS_CNTX_PUSH(_oss_c, 83)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->timestamp);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbCredPart_usec_present;
	else {
	    _out_data->bit_mask |= EncKrbCredPart_usec_present;
	    OSS_CNTX_PUSH(_oss_c, 82)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->usec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8004 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~s_address_present;
	else {
	    _out_data->bit_mask |= s_address_present;
	    OSS_CNTX_PUSH(_oss_c, 81)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8004;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->s_address);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8005 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~EncKrbCredPart_r_address_present;
	else {
	    _out_data->bit_mask |= EncKrbCredPart_r_address_present;
	    OSS_CNTX_PUSH(_oss_c, 80)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8005) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x85 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80050000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8005;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_HostAddress(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->r_address);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dKRB_ERROR(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KRB_ERROR *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    int _indef_tags = 0;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(18,94)
    _out_data = (struct KRB_ERROR *)_oss_dec_const_alloc(_g, sizeof(struct KRB_ERROR));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 126 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x5E);
    _data_tag = 0x401E;
    if (_data_length < 0) ++_indef_tags;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 38)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->pvno = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->pvno = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(37)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	if (_data_length == 1 && _buflen) {
	    _out_data->msg_type = (unsigned char)_bufpos[0];
	    _bufpos++;
	    _buflen--;
	} else
	    _out_data->msg_type = _oss_dec_usint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~ctime_present;
	else {
	    _out_data->bit_mask |= ctime_present;
	    OSS_CNTX_PUSH(_oss_c, 72)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	    _data_tag = 0x18;
	    _oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->ctime);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8003 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~cusec_present;
	else {
	    _out_data->bit_mask |= cusec_present;
	    OSS_CNTX_PUSH(_oss_c, 73)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8003;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->cusec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 99)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 164 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8004) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x84 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80040000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8004;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->stime);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(98)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 165 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x85);
	_data_tag = 0x8005;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->susec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(97)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 166 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x86);
	_data_tag = 0x8006;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->error_code = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8007 || _bufpos >= _end_pos)
	    _out_data->crealm = NULL;
	else {
	    OSS_CNTX_PUSH(_oss_c, 40)
	    _out_data->crealm = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 167 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8007) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x87 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80070000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8007;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	    _data_tag = 0x1B;
	    _oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->crealm, -1);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8008 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~KRB_ERROR_cname_present;
	else {
	    _out_data->bit_mask |= KRB_ERROR_cname_present;
	    OSS_CNTX_PUSH(_oss_c, 32)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 168 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8008) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x88 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80080000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8008;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->cname);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 2)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 169 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8009) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x89 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80090000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8009;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	_data_tag = 0x1B;
	_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->realm, -1);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(1)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 170 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x8A);
	_data_tag = 0x800A;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->sname);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800B || _bufpos >= _end_pos)
	    _out_data->e_text = NULL;
	else {
	    OSS_CNTX_PUSH(_oss_c, 96)
	    _out_data->e_text = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 171 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800B) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8B : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800B0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800B;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	    _data_tag = 0x1B;
	    _oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->e_text, -1);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x800C || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~e_data_present;
	else {
	    _out_data->bit_mask |= e_data_present;
	    OSS_CNTX_PUSH(_oss_c, 95)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 172 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x800C) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x8C : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x800C0000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x800C;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	    _data_tag = 0x4;
	    _out_data->e_data.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->e_data.value, 0);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    while (_indef_tags > 0) {
	if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    if (!_buflen || _bufpos[0])
		_oss_dec_error(_g, _expec_eoc, 0L);
	    else
		_oss_dec_error(_g, _non_std_eoc, 0L);
	_indef_tags--;
    }
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dMETHOD_DATA(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    METHOD_DATA *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(19,100)
    _out_data = (struct METHOD_DATA **)_oss_dec_const_init_alloc(_g, sizeof(struct METHOD_DATA *));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct METHOD_DATA * _head = NULL;
	struct METHOD_DATA * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 34)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct METHOD_DATA *)_oss_dec_const_alloc(_g, sizeof(struct METHOD_DATA));
	    _head = _cur;
	    for (;;) {
		struct METHOD_DATA * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
		_d_PA_DATA(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_temp->value);
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct METHOD_DATA *)_oss_dec_const_alloc(_g, sizeof(struct METHOD_DATA));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dTYPED_DATA(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    TYPED_DATA *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(20,101)
    _out_data = (struct TYPED_DATA **)_oss_dec_const_init_alloc(_g, sizeof(struct TYPED_DATA *));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct TYPED_DATA * _head = NULL;
	struct TYPED_DATA * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 10)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct TYPED_DATA *)_oss_dec_const_alloc(_g, sizeof(struct TYPED_DATA));
	    _head = _cur;
	    for (;;) {
		struct TYPED_DATA * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
			++_oss_c->reserved.fields.ext->seqSetNestingCounter >
			_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
		{
		    int _indef_tags = 0;
		    long _total_len = _data_length;
		    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
		    OSS_CNTX_INIT

		    _temp->value.bit_mask = 0;
		    OSS_CNTX_PUSH(_oss_c, 103)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
		    _data_tag = 0x8000;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		    _data_tag = 0x2;
		    _temp->value.data_type = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_POP(_oss_c)
		    if (_bufpos < _end_pos) {
			if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
			    _buflen--;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
			    _bufpos++;
			} else
			    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			_oss_c->_tag_decoded = TRUE;
		    }
		    if (_data_tag != 0x8001 || _bufpos >= _end_pos)
			_temp->value.bit_mask &= ~data_value_present;
		    else {
			_temp->value.bit_mask |= data_value_present;
			OSS_CNTX_PUSH(_oss_c, 102)
			if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else {
			    if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
			    } else
				_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
			    _oss_c->_tag_decoded = FALSE;
			}
			_data_tag = 0x8001;
			if (_data_length < 0) ++_indef_tags;
			if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			    _buflen -= 2;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _bufpos += 2;
			} else
			    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
			_data_tag = 0x4;
			_temp->value.data_value.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_temp->value.data_value.value, 0);
			while (_indef_tags > 0) {
			    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				if (!_buflen || _bufpos[0])
				    _oss_dec_error(_g, _expec_eoc, 0L);
				else
				    _oss_dec_error(_g, _non_std_eoc, 0L);
			    _indef_tags--;
			}
			OSS_CNTX_POP(_oss_c)
		    }
		    if (_bufpos != _end_pos) {
			if (_total_len < 0) {
			    if (!_oss_c->_tag_decoded)
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

			    if (_data_tag)
				_oss_dec_error(_g, _expec_eoc, 0L);
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			} else
			    _oss_dec_error(_g, _inconsis_len, 0L);
		    }
		}
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct TYPED_DATA *)_oss_dec_const_alloc(_g, sizeof(struct TYPED_DATA));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dPA_ENC_TIMESTAMP(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    PA_ENC_TIMESTAMP *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(21,104)
    _out_data = (struct EncryptedData *)_oss_dec_const_alloc(_g, sizeof(struct EncryptedData));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_EncryptedData(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dPA_ENC_TS_ENC(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    PA_ENC_TS_ENC *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(22,105)
    _out_data = (struct PA_ENC_TS_ENC *)_oss_dec_const_alloc(_g, sizeof(struct PA_ENC_TS_ENC));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 107)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 24 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x18);
	_data_tag = 0x18;
	_oss_dec_gtime(_g, &_bufpos, &_buflen, _data_length, &_out_data->patimestamp);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~pausec_present;
	else {
	    _out_data->bit_mask |= pausec_present;
	    OSS_CNTX_PUSH(_oss_c, 106)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	    _data_tag = 0x2;
	    _out_data->pausec = _oss_dec_uiint(_g, &_bufpos, &_buflen, _data_length);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dETYPE_INFO(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    ETYPE_INFO *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(23,108)
    _out_data = (struct ETYPE_INFO **)_oss_dec_const_init_alloc(_g, sizeof(struct ETYPE_INFO *));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct ETYPE_INFO * _head = NULL;
	struct ETYPE_INFO * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 109)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct ETYPE_INFO *)_oss_dec_const_alloc(_g, sizeof(struct ETYPE_INFO));
	    _head = _cur;
	    for (;;) {
		struct ETYPE_INFO * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
			++_oss_c->reserved.fields.ext->seqSetNestingCounter >
			_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
		{
		    int _indef_tags = 0;
		    long _total_len = _data_length;
		    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
		    OSS_CNTX_INIT

		    _temp->value.bit_mask = 0;
		    OSS_CNTX_PUSH(_oss_c, 17)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
		    _data_tag = 0x8000;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		    _data_tag = 0x2;
		    _temp->value.etype = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_POP(_oss_c)
		    if (_bufpos < _end_pos) {
			if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
			    _buflen--;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
			    _bufpos++;
			} else
			    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			_oss_c->_tag_decoded = TRUE;
		    }
		    if (_data_tag != 0x8001 || _bufpos >= _end_pos)
			_temp->value.bit_mask &= ~salt_present;
		    else {
			_temp->value.bit_mask |= salt_present;
			OSS_CNTX_PUSH(_oss_c, 110)
			if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else {
			    if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
			    } else
				_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
			    _oss_c->_tag_decoded = FALSE;
			}
			_data_tag = 0x8001;
			if (_data_length < 0) ++_indef_tags;
			if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			    _buflen -= 2;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _bufpos += 2;
			} else
			    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
			_data_tag = 0x4;
			_temp->value.salt.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_temp->value.salt.value, 0);
			while (_indef_tags > 0) {
			    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				if (!_buflen || _bufpos[0])
				    _oss_dec_error(_g, _expec_eoc, 0L);
				else
				    _oss_dec_error(_g, _non_std_eoc, 0L);
			    _indef_tags--;
			}
			OSS_CNTX_POP(_oss_c)
		    }
		    if (_bufpos != _end_pos) {
			if (_total_len < 0) {
			    if (!_oss_c->_tag_decoded)
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

			    if (_data_tag)
				_oss_dec_error(_g, _expec_eoc, 0L);
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			} else
			    _oss_dec_error(_g, _inconsis_len, 0L);
		    }
		}
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct ETYPE_INFO *)_oss_dec_const_alloc(_g, sizeof(struct ETYPE_INFO));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dETYPE_INFO2(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    ETYPE_INFO2 *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(24,111)
    _out_data = (struct ETYPE_INFO2 **)_oss_dec_const_init_alloc(_g, sizeof(struct ETYPE_INFO2 *));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	struct ETYPE_INFO2 * _head = NULL;
	struct ETYPE_INFO2 * _cur;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
#if OSSDEBUG > 1
	unsigned long count = 0;
#endif
	OSS_CNTX_INIT

	do {
	    OSS_CNTX_PUSH(_oss_c, 112)
	    if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		if (_bufpos > _end_pos)
		    _oss_dec_error(_g, _inconsis_len, 0L);
#endif
		break;
	    }
	    if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		_bufpos++;
	    } else
		if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
		    if (_oss_dec_length(_g, &_bufpos, &_buflen))
			_oss_dec_error(_g, _non_std_eoc, 0L);
		    _oss_c->_tag_decoded = FALSE;
		    break;
		}
	    _oss_c->_tag_decoded = TRUE;
	    _cur = (struct ETYPE_INFO2 *)_oss_dec_const_alloc(_g, sizeof(struct ETYPE_INFO2));
	    _head = _cur;
	    for (;;) {
		struct ETYPE_INFO2 * _temp = _cur;
#if OSSDEBUG > 1
		count++;
#endif
		if (_data_tag != 0x10)
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x100000);
		OSS_CNTX_SETOCC(count)
		_oss_c->_tag_decoded = FALSE;
		if (_buflen >= 1 && (_data_length = (unsigned char)_bufpos[0]) < 0x80) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_length = _oss_dec_length(_g, &_bufpos, &_buflen);
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
			++_oss_c->reserved.fields.ext->seqSetNestingCounter >
			_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
		{
		    int _indef_tags = 0;
		    long _total_len = _data_length;
		    char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
		    OSS_CNTX_INIT

		    _temp->value.bit_mask = 0;
		    OSS_CNTX_PUSH(_oss_c, 17)
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
		    _data_tag = 0x8000;
		    if (_data_length < 0) ++_indef_tags;
		    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			_buflen -= 2;
			_bufpos += 2;
		    } else
			_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
		    _data_tag = 0x2;
		    _temp->value.etype = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
		    while (_indef_tags > 0) {
			if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else
			    if (!_buflen || _bufpos[0])
				_oss_dec_error(_g, _expec_eoc, 0L);
			    else
				_oss_dec_error(_g, _non_std_eoc, 0L);
			_indef_tags--;
		    }
		    OSS_CNTX_POP(_oss_c)
		    if (_bufpos < _end_pos) {
			if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
			    _buflen--;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
			    _bufpos++;
			} else
			    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			_oss_c->_tag_decoded = TRUE;
		    }
		    if (_data_tag != 0x8001 || _bufpos >= _end_pos)
			_temp->value.salt = NULL;
		    else {
			OSS_CNTX_PUSH(_oss_c, 114)
			_temp->value.salt = NULL;
			if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else {
			    if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
			    } else
				_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
			    _oss_c->_tag_decoded = FALSE;
			}
			_data_tag = 0x8001;
			if (_data_length < 0) ++_indef_tags;
			if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			    _buflen -= 2;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _bufpos += 2;
			} else
			    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
			_data_tag = 0x1B;
			_oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_temp->value.salt, -1);
			while (_indef_tags > 0) {
			    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				if (!_buflen || _bufpos[0])
				    _oss_dec_error(_g, _expec_eoc, 0L);
				else
				    _oss_dec_error(_g, _non_std_eoc, 0L);
			    _indef_tags--;
			}
			OSS_CNTX_POP(_oss_c)
		    }
		    if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
			if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
			    _buflen--;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
			    _bufpos++;
			} else
			    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
			_oss_c->_tag_decoded = TRUE;
		    }
		    if (_data_tag != 0x8002 || _bufpos >= _end_pos)
			_temp->value.bit_mask &= ~s2kparams_present;
		    else {
			_temp->value.bit_mask |= s2kparams_present;
			OSS_CNTX_PUSH(_oss_c, 113)
			if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
			    _buflen -= 2;
			    _bufpos += 2;
			} else {
			    if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
				_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
			    } else
				_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
			    _oss_c->_tag_decoded = FALSE;
			}
			_data_tag = 0x8002;
			if (_data_length < 0) ++_indef_tags;
			if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
			    _buflen -= 2;
			    _oss_c->_bitpos = _bufpos[0] & 0x20;
			    _bufpos += 2;
			} else
			    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
			_data_tag = 0x4;
			_temp->value.s2kparams.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_temp->value.s2kparams.value, 0);
			while (_indef_tags > 0) {
			    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
				_buflen -= 2;
				_bufpos += 2;
			    } else
				if (!_buflen || _bufpos[0])
				    _oss_dec_error(_g, _expec_eoc, 0L);
				else
				    _oss_dec_error(_g, _non_std_eoc, 0L);
			    _indef_tags--;
			}
			OSS_CNTX_POP(_oss_c)
		    }
		    if (_bufpos != _end_pos) {
			if (_total_len < 0) {
			    if (!_oss_c->_tag_decoded)
				_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

			    if (_data_tag)
				_oss_dec_error(_g, _expec_eoc, 0L);
			    if (_oss_dec_length(_g, &_bufpos, &_buflen))
				_oss_dec_error(_g, _non_std_eoc, 0L);
			    _oss_c->_tag_decoded = FALSE;
			} else
			    _oss_dec_error(_g, _inconsis_len, 0L);
		    }
		}
#ifndef OSS_NO_NESTING_CONTROL
		if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
		    _oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
		if (_bufpos >= _end_pos) {
#ifndef OSS_NO_STRICT_ENCODING_DECODING_CHECKING
		    if (_bufpos > _end_pos)
			_oss_dec_error(_g, _inconsis_len, 0L);
#endif
		    break;
		}
		if (_buflen >= 1 && _bufpos[0] && ((_bufpos[0]+1) & 0x1F)) {
		    _buflen--;
		    _oss_c->_bitpos = _bufpos[0] & 0x20;
		    _data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0)) << 8);
		    _bufpos++;
		} else
		    if ((_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen)) == 0 && _total_len < 0) {
			if (_oss_dec_length(_g, &_bufpos, &_buflen))
			    _oss_dec_error(_g, _non_std_eoc, 0L);
			_oss_c->_tag_decoded = FALSE;
			break;
		    }
		_oss_c->_tag_decoded = TRUE;
		_cur = (struct ETYPE_INFO2 *)_oss_dec_const_alloc(_g, sizeof(struct ETYPE_INFO2));
		_temp->next = _cur;
	    }
	    _cur->next = NULL;
	} while (0);
	*_out_data = _head;
	OSS_CNTX_POP(_oss_c)
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAD_IF_RELEVANT(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_IF_RELEVANT *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(25,115)
    _out_data = (struct AuthorizationData **)_oss_dec_const_init_alloc(_g, sizeof(struct AuthorizationData *));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_AuthorizationData(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAD_KDCIssued(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_KDCIssued *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(26,116)
    _out_data = (struct AD_KDCIssued *)_oss_dec_const_alloc(_g, sizeof(struct AD_KDCIssued));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 120)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_Checksum(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->ad_checksum);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->i_realm = NULL;
	else {
	    OSS_CNTX_PUSH(_oss_c, 119)
	    _out_data->i_realm = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	    _data_tag = 0x1B;
	    _oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->i_realm, -1);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~i_sname_present;
	else {
	    _out_data->bit_mask |= i_sname_present;
	    OSS_CNTX_PUSH(_oss_c, 118)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->i_sname);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	OSS_CNTX_PUSH(_oss_c, 117)
	if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 163 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else {
	    if (!_oss_c->_tag_decoded || _data_tag == 0x8003) {
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x83 : 0);
	    } else
		_oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80030000);
	    _oss_c->_tag_decoded = FALSE;
	}
	_data_tag = 0x8003;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_AuthorizationData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->elements);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAD_AND_OR(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_AND_OR *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(27,121)
    _out_data = (struct AD_AND_OR *)_oss_dec_const_alloc(_g, sizeof(struct AD_AND_OR));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 122)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 2 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x2);
	_data_tag = 0x2;
	_out_data->condition_count = _oss_dec_iint(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_SET(117)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x81);
	_data_tag = 0x8001;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	_data_tag = 0x10;
	_d_AuthorizationData(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->elements);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dAD_MANDATORY_FOR_KDC(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    AD_MANDATORY_FOR_KDC *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(28,123)
    _out_data = (struct AuthorizationData **)_oss_dec_const_init_alloc(_g, sizeof(struct AuthorizationData *));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
    _d_AuthorizationData(_g, &_bufpos, &_buflen, _data_length, _data_tag, _out_data);
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dKERB_PA_PAC_REQUEST(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    KERB_PA_PAC_REQUEST *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(29,124)
    _out_data = (struct KERB_PA_PAC_REQUEST *)_oss_dec_const_alloc(_g, sizeof(struct KERB_PA_PAC_REQUEST));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	OSS_CNTX_PUSH(_oss_c, 125)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 1 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1);
	_data_tag = 0x1;
	_out_data->include_pac = _oss_dec_bool(_g, &_bufpos, &_buflen, _data_length);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (_buflen >= 1 && (_data_tag = _bufpos[0]) == 0) {
		    _buflen--;
		    _bufpos++;
		} else
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

static void * _dChangePasswdData(OssGlobal * _g)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;
    ChangePasswdData *_out_data;
    char *_bufpos = _oss_c->_oss_inbufpos;
    long _buflen = _oss_c->_oss_inbuflen;
    long _data_length;
    unsigned int _data_tag;
    OSS_CNTX_INITZERO

    OSS_CNTX_ANCHOR_SET(30,126)
    _out_data = (struct ChangePasswdData *)_oss_dec_const_alloc(_g, sizeof(struct ChangePasswdData));
    _oss_c->_tag_decoded = FALSE;
    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	_buflen -= 2;
	_bufpos += 2;
    } else
	_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
    _data_tag = 0x10;
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit &&
	    ++_oss_c->reserved.fields.ext->seqSetNestingCounter >
	    _oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_dec_error(_g, _seq_set_nesting_limit_exceeded, 0L);
#endif
    {
	int _indef_tags = 0;
	long _total_len = _data_length;
	char *_end_pos = _total_len < 0 ? (char *)OSS_PTR_MAX : _bufpos + _total_len;
	OSS_CNTX_INIT

	_out_data->bit_mask = 0;
	OSS_CNTX_PUSH(_oss_c, 129)
	if (_buflen >= 2 && (unsigned char)_bufpos[0] == 160 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
	    _buflen -= 2;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x80);
	_data_tag = 0x8000;
	if (_data_length < 0) ++_indef_tags;
	if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 4 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
	    _buflen -= 2;
	    _oss_c->_bitpos = _bufpos[0] & 0x20;
	    _bufpos += 2;
	} else
	    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x4);
	_data_tag = 0x4;
	_out_data->newpasswd.length = _oss_dec_uoct_ia(_g, &_bufpos, &_buflen, _data_length, &_out_data->newpasswd.value, 0);
	while (_indef_tags > 0) {
	    if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		if (!_buflen || _bufpos[0])
		    _oss_dec_error(_g, _expec_eoc, 0L);
		else
		    _oss_dec_error(_g, _non_std_eoc, 0L);
	    _indef_tags--;
	}
	OSS_CNTX_POP(_oss_c)
	if (_bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8001 || _bufpos >= _end_pos)
	    _out_data->bit_mask &= ~targname_present;
	else {
	    _out_data->bit_mask |= targname_present;
	    OSS_CNTX_PUSH(_oss_c, 128)
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 161 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8001) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x81 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80010000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8001;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && (unsigned char)_bufpos[0] == 48 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x10);
	    _data_tag = 0x10;
	    _d_PrincipalName(_g, &_bufpos, &_buflen, _data_length, _data_tag, &_out_data->targname);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (!_oss_c->_tag_decoded && _bufpos < _end_pos) {
	    if (_buflen >= 1 && ((_bufpos[0]+1) & 0x1F)) {
		_buflen--;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_data_tag = (_bufpos[0] & 0x1F) + (((unsigned int)(_bufpos[0] & 0xC0))<<8);
		_bufpos++;
	    } else
		_data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);
	    _oss_c->_tag_decoded = TRUE;
	}
	if (_data_tag != 0x8002 || _bufpos >= _end_pos)
	    _out_data->targrealm = NULL;
	else {
	    OSS_CNTX_PUSH(_oss_c, 127)
	    _out_data->targrealm = NULL;
	    if (!_oss_c->_tag_decoded && _buflen >= 2 && (unsigned char)_bufpos[0] == 162 && (_data_length = (signed char)_bufpos[1]) - 1 >= 0) {
		_buflen -= 2;
		_bufpos += 2;
	    } else {
		if (!_oss_c->_tag_decoded || _data_tag == 0x8002) {
		    _data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, !_oss_c->_tag_decoded ? 0x82 : 0);
		} else
		    _oss_dec_error(_g, _tag_mismatch, _data_tag | 0x80020000);
		_oss_c->_tag_decoded = FALSE;
	    }
	    _data_tag = 0x8002;
	    if (_data_length < 0) ++_indef_tags;
	    if (_buflen >= 2 && ((unsigned char)_bufpos[0] & 0xDF) == 27 && (_data_length = (unsigned char)_bufpos[1]) < 0x80) {
		_buflen -= 2;
		_oss_c->_bitpos = _bufpos[0] & 0x20;
		_bufpos += 2;
	    } else
		_data_length = _oss_dec_tag_length(_g, &_bufpos, &_buflen, 0x1B);
	    _data_tag = 0x1B;
	    _oss_dec_nstr_ptr(_g, &_bufpos, &_buflen, _data_length, &_out_data->targrealm, -1);
	    while (_indef_tags > 0) {
		if (_buflen >= 2 && !_bufpos[0] && !_bufpos[1]) {
		    _buflen -= 2;
		    _bufpos += 2;
		} else
		    if (!_buflen || _bufpos[0])
			_oss_dec_error(_g, _expec_eoc, 0L);
		    else
			_oss_dec_error(_g, _non_std_eoc, 0L);
		_indef_tags--;
	    }
	    OSS_CNTX_POP(_oss_c)
	}
	if (_bufpos != _end_pos) {
	    if (_total_len < 0) {
		if (!_oss_c->_tag_decoded)
		    _data_tag = _oss_dec_tag(_g, &_bufpos, &_buflen);

		if (_data_tag)
		    _oss_dec_error(_g, _expec_eoc, 0L);
		if (_oss_dec_length(_g, &_bufpos, &_buflen))
		    _oss_dec_error(_g, _non_std_eoc, 0L);
		_oss_c->_tag_decoded = FALSE;
	    } else
		_oss_dec_error(_g, _inconsis_len, 0L);
	}
    }
#ifndef OSS_NO_NESTING_CONTROL
    if (_oss_c->reserved.fields.ext->seqSetNestingLimit)
	_oss_c->reserved.fields.ext->seqSetNestingCounter--;
#endif
    OSS_CNTX_POP(_oss_c)
    _oss_c->_oss_inbufpos = _bufpos;
    _oss_c->_oss_inbuflen = _buflen;
    return _out_data;
}

void DLL_ENTRY_FDEF _dmKerberosV5Spec2(struct ossGlobal * _g, int * _pdunum, void ** _outbuf)
{
    _EncDecGlobals *_oss_c = (_EncDecGlobals *)_g->encDecVar;

    _oss_c->_oss_context_anchor._state = _decoding_data;
    _oss_c->_oss_context_anchor._pdu_number = 0;
#if OSSDEBUG > 0
    if (_oss_c->reserved.fields.ext->debug_flags)
	_oss_db_d_pre(_g, _oss_c->_oss_inbufpos, _oss_c->_oss_inbuflen, NULL);
#else
    _oss_c->_oss_err_msg = NULL;
#endif

    if (*_pdunum < 1 || *_pdunum > 30)
	_oss_dec_error(_g, _pdu_range, *_pdunum);
    *_outbuf = _Decoders[*_pdunum - 1](_g);

#if OSSDEBUG > 0
    _oss_c->_oss_err_msg = NULL;
    if (_oss_c->reserved.fields.ext->debug_flags)
	_oss_db_d_post(_g, 0, *_pdunum, _outbuf);
#endif
}

#if (OSS_TOED_API_LEVEL < 22) || !defined(OSSNOFREEPDU)
#if OSS_TOED_API_LEVEL < 32
#define _oss_dec_free(_g, v)   if (v) _oss_dec_free(_g, v)
#define _oss_free_creal(_g, v) if (v) _oss_free_creal(_g, v)
#endif
static void _f_Ticket(OssGlobal * _g, Ticket * _data_ptr)
{
    if (_data_ptr) {
	_oss_dec_free(_g, _data_ptr->realm);
	_f_PrincipalName(_g, &_data_ptr->sname);
	_f_EncryptedData(_g, &_data_ptr->enc_part);
    }
}

static void _f__seqof1(OssGlobal * _g, _seqof1 * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct _seqof1 * _tempa = *_data_ptr;
	    struct _seqof1 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_oss_dec_free(_g, _tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_PrincipalName(OssGlobal * _g, PrincipalName * _data_ptr)
{
    if (_data_ptr) {
	_f__seqof1(_g, &_data_ptr->name_string);
    }
}

static void _f_HostAddress(OssGlobal * _g, HostAddress * _data_ptr)
{
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->address.value);
    }
}

static void _f_HostAddresses(OssGlobal * _g, HostAddresses * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct HostAddresses * _tempa = *_data_ptr;
	    struct HostAddresses * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_HostAddress(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_AuthorizationData(OssGlobal * _g, AuthorizationData * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct AuthorizationData * _tempa = *_data_ptr;
	    struct AuthorizationData * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		    _oss_dec_free(_g, _tempa->value.ad_data.value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_PA_DATA(OssGlobal * _g, PA_DATA * _data_ptr)
{
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->padata_value.value);
    }
}

static void _f_EncryptedData(OssGlobal * _g, EncryptedData * _data_ptr)
{
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->cipher.value);
    }
}

static void _f_EncryptionKey(OssGlobal * _g, EncryptionKey * _data_ptr)
{
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->keyvalue.value);
    }
}

static void _f_Checksum(OssGlobal * _g, Checksum * _data_ptr)
{
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->checksum.value);
    }
}

static void _f__seqof2(OssGlobal * _g, _seqof2 * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct _seqof2 * _tempa = *_data_ptr;
	    struct _seqof2 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f__seqof3(OssGlobal * _g, _seqof3 * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct _seqof3 * _tempa = *_data_ptr;
	    struct _seqof3 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_Ticket(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_KDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * _data_ptr)
{
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->kdc_options.value);
	if (_data_ptr->bit_mask & KDC_REQ_BODY_cname_present) {
	    _f_PrincipalName(_g, &_data_ptr->cname);
	}
	_oss_dec_free(_g, _data_ptr->realm);
	if (_data_ptr->bit_mask & KDC_REQ_BODY_sname_present) {
	    _f_PrincipalName(_g, &_data_ptr->sname);
	}
	_f__seqof2(_g, &_data_ptr->etype);
	if (_data_ptr->bit_mask & addresses_present) {
	    _f_HostAddresses(_g, &_data_ptr->addresses);
	}
	if (_data_ptr->bit_mask & enc_authorization_data_present) {
	    _f_EncryptedData(_g, &_data_ptr->enc_authorization_data);
	}
	if (_data_ptr->bit_mask & additional_tickets_present) {
	    _f__seqof3(_g, &_data_ptr->additional_tickets);
	}
    }
}

static void _f__seqof4(OssGlobal * _g, _seqof4 * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct _seqof4 * _tempa = *_data_ptr;
	    struct _seqof4 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_PA_DATA(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_KDC_REQ(OssGlobal * _g, KDC_REQ * _data_ptr)
{
    if (_data_ptr) {
	if (_data_ptr->bit_mask & KDC_REQ_padata_present) {
	    _f__seqof4(_g, &_data_ptr->padata);
	}
	_f_KDC_REQ_BODY(_g, &_data_ptr->req_body);
    }
}

static void _f__1(OssGlobal * _g, struct _seqof4 ** _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct _seqof4 * _tempa = *_data_ptr;
	    struct _seqof4 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_PA_DATA(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_KDC_REP(OssGlobal * _g, KDC_REP * _data_ptr)
{
    if (_data_ptr) {
	if (_data_ptr->bit_mask & KDC_REP_padata_present) {
	    _f__1(_g, &_data_ptr->padata);
	}
	_oss_dec_free(_g, _data_ptr->crealm);
	_f_PrincipalName(_g, &_data_ptr->cname);
	_f_Ticket(_g, &_data_ptr->ticket);
	_f_EncryptedData(_g, &_data_ptr->enc_part);
    }
}

static void _f__2(OssGlobal * _g, struct _seqof4 ** _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct _seqof4 * _tempa = *_data_ptr;
	    struct _seqof4 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_PA_DATA(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _f_EncKDCRepPart(OssGlobal * _g, EncKDCRepPart * _data_ptr)
{
    if (_data_ptr) {
	_f_EncryptionKey(_g, &_data_ptr->key);
	_f_LastReq(_g, &_data_ptr->last_req);
	    _oss_dec_free(_g, _data_ptr->flags.value);
	_oss_dec_free(_g, _data_ptr->srealm);
	_f_PrincipalName(_g, &_data_ptr->sname);
	if (_data_ptr->bit_mask & EncKDCRepPart_caddr_present) {
	    _f_HostAddresses(_g, &_data_ptr->caddr);
	}
	if (_data_ptr->bit_mask & encrypted_pa_data_present) {
	    _f__2(_g, &_data_ptr->encrypted_pa_data);
	}
    }
}

static void _f_LastReq(OssGlobal * _g, LastReq * _data_ptr)
{
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct LastReq * _tempa = *_data_ptr;
	    struct LastReq * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
}

static void _fTicket(OssGlobal * _g, void * _data)
{
    Ticket	*_data_ptr;
    _data_ptr = (Ticket *)_data;
    _f_Ticket(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fEncTicketPart(OssGlobal * _g, void * _data)
{
    EncTicketPart	*_data_ptr;
    _data_ptr = (EncTicketPart *)_data;
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->flags.value);
	_f_EncryptionKey(_g, &_data_ptr->key);
	_oss_dec_free(_g, _data_ptr->crealm);
	_f_PrincipalName(_g, &_data_ptr->cname);
	    _oss_dec_free(_g, _data_ptr->transited.contents.value);
	if (_data_ptr->bit_mask & EncTicketPart_caddr_present) {
	    _f_HostAddresses(_g, &_data_ptr->caddr);
	}
	if (_data_ptr->bit_mask & EncTicketPart_authorization_data_present) {
	    _f_AuthorizationData(_g, &_data_ptr->authorization_data);
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fAS_REQ(OssGlobal * _g, void * _data)
{
    AS_REQ	*_data_ptr;
    _data_ptr = (AS_REQ *)_data;
    _f_KDC_REQ(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fTGS_REQ(OssGlobal * _g, void * _data)
{
    TGS_REQ	*_data_ptr;
    _data_ptr = (TGS_REQ *)_data;
    _f_KDC_REQ(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fAS_REP(OssGlobal * _g, void * _data)
{
    AS_REP	*_data_ptr;
    _data_ptr = (AS_REP *)_data;
    _f_KDC_REP(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fTGS_REP(OssGlobal * _g, void * _data)
{
    TGS_REP	*_data_ptr;
    _data_ptr = (TGS_REP *)_data;
    _f_KDC_REP(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fEncASRepPart(OssGlobal * _g, void * _data)
{
    EncASRepPart	*_data_ptr;
    _data_ptr = (EncASRepPart *)_data;
    _f_EncKDCRepPart(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fEncTGSRepPart(OssGlobal * _g, void * _data)
{
    EncTGSRepPart	*_data_ptr;
    _data_ptr = (EncTGSRepPart *)_data;
    _f_EncKDCRepPart(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fAP_REQ(OssGlobal * _g, void * _data)
{
    AP_REQ	*_data_ptr;
    _data_ptr = (AP_REQ *)_data;
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->ap_options.value);
	_f_Ticket(_g, &_data_ptr->ticket);
	_f_EncryptedData(_g, &_data_ptr->authenticator);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fAuthenticator(OssGlobal * _g, void * _data)
{
    Authenticator	*_data_ptr;
    _data_ptr = (Authenticator *)_data;
    if (_data_ptr) {
	_oss_dec_free(_g, _data_ptr->crealm);
	_f_PrincipalName(_g, &_data_ptr->cname);
	if (_data_ptr->bit_mask & cksum_present) {
	    _f_Checksum(_g, &_data_ptr->cksum);
	}
	if (_data_ptr->bit_mask & Authenticator_subkey_present) {
	    _f_EncryptionKey(_g, &_data_ptr->subkey);
	}
	if (_data_ptr->bit_mask & Authenticator_authorization_data_present) {
	    _f_AuthorizationData(_g, &_data_ptr->authorization_data);
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fAP_REP(OssGlobal * _g, void * _data)
{
    AP_REP	*_data_ptr;
    _data_ptr = (AP_REP *)_data;
    if (_data_ptr) {
	_f_EncryptedData(_g, &_data_ptr->enc_part);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fEncAPRepPart(OssGlobal * _g, void * _data)
{
    EncAPRepPart	*_data_ptr;
    _data_ptr = (EncAPRepPart *)_data;
    if (_data_ptr) {
	if (_data_ptr->bit_mask & EncAPRepPart_subkey_present) {
	    _f_EncryptionKey(_g, &_data_ptr->subkey);
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fKRB_SAFE(OssGlobal * _g, void * _data)
{
    KRB_SAFE	*_data_ptr;
    _data_ptr = (KRB_SAFE *)_data;
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->safe_body.user_data.value);
	_f_HostAddress(_g, &_data_ptr->safe_body.s_address);
	if (_data_ptr->safe_body.bit_mask & KRB_SAFE_BODY_r_address_present) {
	    _f_HostAddress(_g, &_data_ptr->safe_body.r_address);
	}
	_f_Checksum(_g, &_data_ptr->cksum);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fKRB_PRIV(OssGlobal * _g, void * _data)
{
    KRB_PRIV	*_data_ptr;
    _data_ptr = (KRB_PRIV *)_data;
    if (_data_ptr) {
	_f_EncryptedData(_g, &_data_ptr->enc_part);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fEncKrbPrivPart(OssGlobal * _g, void * _data)
{
    EncKrbPrivPart	*_data_ptr;
    _data_ptr = (EncKrbPrivPart *)_data;
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->user_data.value);
	_f_HostAddress(_g, &_data_ptr->s_address);
	if (_data_ptr->bit_mask & EncKrbPrivPart_r_address_present) {
	    _f_HostAddress(_g, &_data_ptr->r_address);
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fKRB_CRED(OssGlobal * _g, void * _data)
{
    KRB_CRED	*_data_ptr;
    _data_ptr = (KRB_CRED *)_data;
    if (_data_ptr) {
	if (_data_ptr->tickets) {
	    struct _seqof3 * _tempa = _data_ptr->tickets;
	    struct _seqof3 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_Ticket(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
	_f_EncryptedData(_g, &_data_ptr->enc_part);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fEncKrbCredPart(OssGlobal * _g, void * _data)
{
    EncKrbCredPart	*_data_ptr;
    _data_ptr = (EncKrbCredPart *)_data;
    if (_data_ptr) {
	if (_data_ptr->ticket_info) {
	    struct _seqof5 * _tempa = _data_ptr->ticket_info;
	    struct _seqof5 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_EncryptionKey(_g, &_tempa->value.key);
		_oss_dec_free(_g, _tempa->value.prealm);
		if (_tempa->value.bit_mask & pname_present) {
		    _f_PrincipalName(_g, &_tempa->value.pname);
		}
		if (_tempa->value.bit_mask & flags_present) {
			_oss_dec_free(_g, _tempa->value.flags.value);
		}
		_oss_dec_free(_g, _tempa->value.srealm);
		if (_tempa->value.bit_mask & KrbCredInfo_sname_present) {
		    _f_PrincipalName(_g, &_tempa->value.sname);
		}
		if (_tempa->value.bit_mask & KrbCredInfo_caddr_present) {
		    _f_HostAddresses(_g, &_tempa->value.caddr);
		}
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
	if (_data_ptr->bit_mask & s_address_present) {
	    _f_HostAddress(_g, &_data_ptr->s_address);
	}
	if (_data_ptr->bit_mask & EncKrbCredPart_r_address_present) {
	    _f_HostAddress(_g, &_data_ptr->r_address);
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fKRB_ERROR(OssGlobal * _g, void * _data)
{
    KRB_ERROR	*_data_ptr;
    _data_ptr = (KRB_ERROR *)_data;
    if (_data_ptr) {
	_oss_dec_free(_g, _data_ptr->crealm);
	if (_data_ptr->bit_mask & KRB_ERROR_cname_present) {
	    _f_PrincipalName(_g, &_data_ptr->cname);
	}
	_oss_dec_free(_g, _data_ptr->realm);
	_f_PrincipalName(_g, &_data_ptr->sname);
	_oss_dec_free(_g, _data_ptr->e_text);
	if (_data_ptr->bit_mask & e_data_present) {
		_oss_dec_free(_g, _data_ptr->e_data.value);
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fMETHOD_DATA(OssGlobal * _g, void * _data)
{
    METHOD_DATA	*_data_ptr;
    _data_ptr = (METHOD_DATA *)_data;
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct METHOD_DATA * _tempa = *_data_ptr;
	    struct METHOD_DATA * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_f_PA_DATA(_g, &_tempa->value);
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fTYPED_DATA(OssGlobal * _g, void * _data)
{
    TYPED_DATA	*_data_ptr;
    _data_ptr = (TYPED_DATA *)_data;
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct TYPED_DATA * _tempa = *_data_ptr;
	    struct TYPED_DATA * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		if (_tempa->value.bit_mask & data_value_present) {
			_oss_dec_free(_g, _tempa->value.data_value.value);
		}
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fPA_ENC_TIMESTAMP(OssGlobal * _g, void * _data)
{
    PA_ENC_TIMESTAMP	*_data_ptr;
    _data_ptr = (PA_ENC_TIMESTAMP *)_data;
    _f_EncryptedData(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fPA_ENC_TS_ENC(OssGlobal * _g, void * _data)
{
    PA_ENC_TS_ENC	*_data_ptr;
    _data_ptr = (PA_ENC_TS_ENC *)_data;
    _oss_dec_free(_g, _data_ptr);
}

static void _fETYPE_INFO(OssGlobal * _g, void * _data)
{
    ETYPE_INFO	*_data_ptr;
    _data_ptr = (ETYPE_INFO *)_data;
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct ETYPE_INFO * _tempa = *_data_ptr;
	    struct ETYPE_INFO * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		if (_tempa->value.bit_mask & salt_present) {
			_oss_dec_free(_g, _tempa->value.salt.value);
		}
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fETYPE_INFO2(OssGlobal * _g, void * _data)
{
    ETYPE_INFO2	*_data_ptr;
    _data_ptr = (ETYPE_INFO2 *)_data;
    if (_data_ptr) {
	if (*_data_ptr) {
	    struct ETYPE_INFO2 * _tempa = *_data_ptr;
	    struct ETYPE_INFO2 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_oss_dec_free(_g, _tempa->value.salt);
		if (_tempa->value.bit_mask & s2kparams_present) {
			_oss_dec_free(_g, _tempa->value.s2kparams.value);
		}
		_oss_dec_free(_g, _tempa);
		_tempa = _tempb;
	    }
	}
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fAD_IF_RELEVANT(OssGlobal * _g, void * _data)
{
    AD_IF_RELEVANT	*_data_ptr;
    _data_ptr = (AD_IF_RELEVANT *)_data;
    _f_AuthorizationData(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fAD_KDCIssued(OssGlobal * _g, void * _data)
{
    AD_KDCIssued	*_data_ptr;
    _data_ptr = (AD_KDCIssued *)_data;
    if (_data_ptr) {
	_f_Checksum(_g, &_data_ptr->ad_checksum);
	_oss_dec_free(_g, _data_ptr->i_realm);
	if (_data_ptr->bit_mask & i_sname_present) {
	    _f_PrincipalName(_g, &_data_ptr->i_sname);
	}
	_f_AuthorizationData(_g, &_data_ptr->elements);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fAD_AND_OR(OssGlobal * _g, void * _data)
{
    AD_AND_OR	*_data_ptr;
    _data_ptr = (AD_AND_OR *)_data;
    if (_data_ptr) {
	_f_AuthorizationData(_g, &_data_ptr->elements);
    }
    _oss_dec_free(_g, _data_ptr);
}

static void _fAD_MANDATORY_FOR_KDC(OssGlobal * _g, void * _data)
{
    AD_MANDATORY_FOR_KDC	*_data_ptr;
    _data_ptr = (AD_MANDATORY_FOR_KDC *)_data;
    _f_AuthorizationData(_g, _data_ptr);
    _oss_dec_free(_g, _data_ptr);
}

static void _fKERB_PA_PAC_REQUEST(OssGlobal * _g, void * _data)
{
    KERB_PA_PAC_REQUEST	*_data_ptr;
    _data_ptr = (KERB_PA_PAC_REQUEST *)_data;
    _oss_dec_free(_g, _data_ptr);
}

static void _fChangePasswdData(OssGlobal * _g, void * _data)
{
    ChangePasswdData	*_data_ptr;
    _data_ptr = (ChangePasswdData *)_data;
    if (_data_ptr) {
	    _oss_dec_free(_g, _data_ptr->newpasswd.value);
	if (_data_ptr->bit_mask & targname_present) {
	    _f_PrincipalName(_g, &_data_ptr->targname);
	}
	_oss_dec_free(_g, _data_ptr->targrealm);
    }
    _oss_dec_free(_g, _data_ptr);
}

int DLL_ENTRY_FDEF _fmKerberosV5Spec2(struct ossGlobal * _g, int _pdunum, void * _data)
{
    if (_pdunum < 1 || _pdunum > 30)
	return PDU_RANGE;
    else
	_FreePDU[_pdunum - 1](_g, _data);

    return PDU_FREED;
}

#endif
#ifdef OSSPRINT
static void _p_Ticket(OssGlobal * _g, Ticket * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "tkt-vno ");
	{
	    ULONG_LONG value = _data_ptr->tkt_vno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "realm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->realm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->realm);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "sname ");
	_p_PrincipalName(_g, &_data_ptr->sname);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "enc-part ");
	_p_EncryptedData(_g, &_data_ptr->enc_part);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p__seqof1(OssGlobal * _g, _seqof1 * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct _seqof1 * _tempa = *_data_ptr;
	struct _seqof1 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _oss_indent(_g, 0);
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_tempa->value == NULL)
		ossPrint(_g, "<<<<<<NULL>>>>>>");
	    else
#endif
		_oss_prt_nchar(_g, (char *)_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_PrincipalName(OssGlobal * _g, PrincipalName * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "name-type ");
	{
	    LONG_LONG value = _data_ptr->name_type;

	    ossPrint(_g, LLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "name-string ");
	_p__seqof1(_g, &_data_ptr->name_string);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p_HostAddress(OssGlobal * _g, HostAddress * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "addr-type ");
	{
	    LONG_LONG value = _data_ptr->addr_type;

	    ossPrint(_g, LLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "address ");
	_oss_prt_oct(_g, _data_ptr->address.value, _data_ptr->address.length);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p_HostAddresses(OssGlobal * _g, HostAddresses * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct HostAddresses * _tempa = *_data_ptr;
	struct HostAddresses * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _p_HostAddress(_g, &_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_AuthorizationData(OssGlobal * _g, AuthorizationData * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct AuthorizationData * _tempa = *_data_ptr;
	struct AuthorizationData * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    {
		_oss_indent(_g, 1);
		ossPrint(_g, "{");
		_oss_indent(_g, 0);
		ossPrint(_g, "ad-type ");
		{
		    LONG_LONG value = _tempa->value.ad_type;

		    ossPrint(_g, LLONG_FMT, value);
		}
		ossPrint(_g, ",");
		_oss_indent(_g, 0);
		ossPrint(_g, "ad-data ");
		_oss_prt_oct(_g, _tempa->value.ad_data.value, _tempa->value.ad_data.length);
		_oss_indent(_g, -1);
		ossPrint(_g, "}");
	    }
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_PA_DATA(OssGlobal * _g, PA_DATA * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "padata-type ");
	{
	    LONG_LONG value = _data_ptr->padata_type;

	    ossPrint(_g, LLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "padata-value ");
	_oss_prt_oct(_g, _data_ptr->padata_value.value, _data_ptr->padata_value.length);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p_EncryptedData(OssGlobal * _g, EncryptedData * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "etype ");
	{
	    LONG_LONG value = _data_ptr->etype;

	    ossPrint(_g, LLONG_FMT, value);
	}
	if (_data_ptr->bit_mask & kvno_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "kvno ");
	    {
		ULONG_LONG value = _data_ptr->kvno;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cipher ");
	_oss_prt_oct(_g, _data_ptr->cipher.value, _data_ptr->cipher.length);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p_EncryptionKey(OssGlobal * _g, EncryptionKey * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "keytype ");
	{
	    LONG_LONG value = _data_ptr->keytype;

	    ossPrint(_g, LLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "keyvalue ");
	_oss_prt_oct(_g, _data_ptr->keyvalue.value, _data_ptr->keyvalue.length);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p_Checksum(OssGlobal * _g, Checksum * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "cksumtype ");
	{
	    LONG_LONG value = _data_ptr->cksumtype;

	    ossPrint(_g, LLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "checksum ");
	_oss_prt_oct(_g, _data_ptr->checksum.value, _data_ptr->checksum.length);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p__seqof2(OssGlobal * _g, _seqof2 * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct _seqof2 * _tempa = *_data_ptr;
	struct _seqof2 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _oss_indent(_g, 0);
	    {
		LONG_LONG value = _tempa->value;

		ossPrint(_g, LLONG_FMT, value);
	    }
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p__seqof3(OssGlobal * _g, _seqof3 * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct _seqof3 * _tempa = *_data_ptr;
	struct _seqof3 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _p_Ticket(_g, &_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_KDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "kdc-options ");
	_oss_prt_bit(_g, _data_ptr->kdc_options.value, _data_ptr->kdc_options.length);
	if (_data_ptr->bit_mask & KDC_REQ_BODY_cname_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "cname ");
	    _p_PrincipalName(_g, &_data_ptr->cname);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "realm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->realm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->realm);
	if (_data_ptr->bit_mask & KDC_REQ_BODY_sname_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "sname ");
	    _p_PrincipalName(_g, &_data_ptr->sname);
	}
	if (_data_ptr->bit_mask & from_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "from ");
	    _oss_prt_gentime(_g, &_data_ptr->from);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "till ");
	_oss_prt_gentime(_g, &_data_ptr->till);
	if (_data_ptr->bit_mask & rtime_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "rtime ");
	    _oss_prt_gentime(_g, &_data_ptr->rtime);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "nonce ");
	{
	    ULONG_LONG value = _data_ptr->nonce;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "etype ");
	_p__seqof2(_g, &_data_ptr->etype);
	if (_data_ptr->bit_mask & addresses_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "addresses ");
	    _p_HostAddresses(_g, &_data_ptr->addresses);
	}
	if (_data_ptr->bit_mask & enc_authorization_data_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "enc-authorization-data ");
	    _p_EncryptedData(_g, &_data_ptr->enc_authorization_data);
	}
	if (_data_ptr->bit_mask & additional_tickets_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "additional-tickets ");
	    _p__seqof3(_g, &_data_ptr->additional_tickets);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p__seqof4(OssGlobal * _g, _seqof4 * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct _seqof4 * _tempa = *_data_ptr;
	struct _seqof4 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _p_PA_DATA(_g, &_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_KDC_REQ(OssGlobal * _g, KDC_REQ * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	if (_data_ptr->bit_mask & KDC_REQ_padata_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "padata ");
	    _p__seqof4(_g, &_data_ptr->padata);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "req-body ");
	_p_KDC_REQ_BODY(_g, &_data_ptr->req_body);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p__1(OssGlobal * _g, struct _seqof4 ** _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct _seqof4 * _tempa = *_data_ptr;
	struct _seqof4 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _p_PA_DATA(_g, &_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_KDC_REP(OssGlobal * _g, KDC_REP * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	if (_data_ptr->bit_mask & KDC_REP_padata_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "padata ");
	    _p__1(_g, &_data_ptr->padata);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "crealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->crealm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->crealm);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cname ");
	_p_PrincipalName(_g, &_data_ptr->cname);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "ticket ");
	_p_Ticket(_g, &_data_ptr->ticket);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "enc-part ");
	_p_EncryptedData(_g, &_data_ptr->enc_part);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p__2(OssGlobal * _g, struct _seqof4 ** _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct _seqof4 * _tempa = *_data_ptr;
	struct _seqof4 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _p_PA_DATA(_g, &_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static void _p_EncKDCRepPart(OssGlobal * _g, EncKDCRepPart * _data_ptr)
{
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "key ");
	_p_EncryptionKey(_g, &_data_ptr->key);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "last-req ");
	_p_LastReq(_g, &_data_ptr->last_req);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "nonce ");
	{
	    ULONG_LONG value = _data_ptr->nonce;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	if (_data_ptr->bit_mask & key_expiration_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "key-expiration ");
	    _oss_prt_gentime(_g, &_data_ptr->key_expiration);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "flags ");
	_oss_prt_bit(_g, _data_ptr->flags.value, _data_ptr->flags.length);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "authtime ");
	_oss_prt_gentime(_g, &_data_ptr->authtime);
	if (_data_ptr->bit_mask & EncKDCRepPart_starttime_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "starttime ");
	    _oss_prt_gentime(_g, &_data_ptr->starttime);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "endtime ");
	_oss_prt_gentime(_g, &_data_ptr->endtime);
	if (_data_ptr->bit_mask & EncKDCRepPart_renew_till_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "renew-till ");
	    _oss_prt_gentime(_g, &_data_ptr->renew_till);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "srealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->srealm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->srealm);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "sname ");
	_p_PrincipalName(_g, &_data_ptr->sname);
	if (_data_ptr->bit_mask & EncKDCRepPart_caddr_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "caddr ");
	    _p_HostAddresses(_g, &_data_ptr->caddr);
	}
	if (_data_ptr->bit_mask & encrypted_pa_data_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "encrypted-pa-data ");
	    _p__2(_g, &_data_ptr->encrypted_pa_data);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

}

static void _p_LastReq(OssGlobal * _g, LastReq * _data_ptr)
{
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct LastReq * _tempa = *_data_ptr;
	struct LastReq * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    {
		_oss_indent(_g, 1);
		ossPrint(_g, "{");
		_oss_indent(_g, 0);
		ossPrint(_g, "lr-type ");
		{
		    LONG_LONG value = _tempa->value.lr_type;

		    ossPrint(_g, LLONG_FMT, value);
		}
		ossPrint(_g, ",");
		_oss_indent(_g, 0);
		ossPrint(_g, "lr-value ");
		_oss_prt_gentime(_g, &_tempa->value.lr_value);
		_oss_indent(_g, -1);
		ossPrint(_g, "}");
	    }
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

}

static int _pTicket(OssGlobal * _g, void * _data)
{
    Ticket	*_data_ptr;
    _data_ptr = (Ticket *)_data;
    _p_Ticket(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pEncTicketPart(OssGlobal * _g, void * _data)
{
    EncTicketPart	*_data_ptr;
    _data_ptr = (EncTicketPart *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "flags ");
	_oss_prt_bit(_g, _data_ptr->flags.value, _data_ptr->flags.length);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "key ");
	_p_EncryptionKey(_g, &_data_ptr->key);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "crealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->crealm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->crealm);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cname ");
	_p_PrincipalName(_g, &_data_ptr->cname);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "transited ");
	{
	    _oss_indent(_g, 1);
	    ossPrint(_g, "{");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "tr-type ");
	    {
		LONG_LONG value = _data_ptr->transited.tr_type;

		ossPrint(_g, LLONG_FMT, value);
	    }
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "contents ");
	    _oss_prt_oct(_g, _data_ptr->transited.contents.value, _data_ptr->transited.contents.length);
	    _oss_indent(_g, -1);
	    ossPrint(_g, "}");
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "authtime ");
	_oss_prt_gentime(_g, &_data_ptr->authtime);
	if (_data_ptr->bit_mask & EncTicketPart_starttime_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "starttime ");
	    _oss_prt_gentime(_g, &_data_ptr->starttime);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "endtime ");
	_oss_prt_gentime(_g, &_data_ptr->endtime);
	if (_data_ptr->bit_mask & EncTicketPart_renew_till_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "renew-till ");
	    _oss_prt_gentime(_g, &_data_ptr->renew_till);
	}
	if (_data_ptr->bit_mask & EncTicketPart_caddr_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "caddr ");
	    _p_HostAddresses(_g, &_data_ptr->caddr);
	}
	if (_data_ptr->bit_mask & EncTicketPart_authorization_data_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "authorization-data ");
	    _p_AuthorizationData(_g, &_data_ptr->authorization_data);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pAS_REQ(OssGlobal * _g, void * _data)
{
    AS_REQ	*_data_ptr;
    _data_ptr = (AS_REQ *)_data;
    _p_KDC_REQ(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pTGS_REQ(OssGlobal * _g, void * _data)
{
    TGS_REQ	*_data_ptr;
    _data_ptr = (TGS_REQ *)_data;
    _p_KDC_REQ(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pAS_REP(OssGlobal * _g, void * _data)
{
    AS_REP	*_data_ptr;
    _data_ptr = (AS_REP *)_data;
    _p_KDC_REP(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pTGS_REP(OssGlobal * _g, void * _data)
{
    TGS_REP	*_data_ptr;
    _data_ptr = (TGS_REP *)_data;
    _p_KDC_REP(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pEncASRepPart(OssGlobal * _g, void * _data)
{
    EncASRepPart	*_data_ptr;
    _data_ptr = (EncASRepPart *)_data;
    _p_EncKDCRepPart(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pEncTGSRepPart(OssGlobal * _g, void * _data)
{
    EncTGSRepPart	*_data_ptr;
    _data_ptr = (EncTGSRepPart *)_data;
    _p_EncKDCRepPart(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pAP_REQ(OssGlobal * _g, void * _data)
{
    AP_REQ	*_data_ptr;
    _data_ptr = (AP_REQ *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "ap-options ");
	_oss_prt_bit(_g, _data_ptr->ap_options.value, _data_ptr->ap_options.length);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "ticket ");
	_p_Ticket(_g, &_data_ptr->ticket);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "authenticator ");
	_p_EncryptedData(_g, &_data_ptr->authenticator);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pAuthenticator(OssGlobal * _g, void * _data)
{
    Authenticator	*_data_ptr;
    _data_ptr = (Authenticator *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "authenticator-vno ");
	{
	    ULONG_LONG value = _data_ptr->authenticator_vno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "crealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->crealm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->crealm);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cname ");
	_p_PrincipalName(_g, &_data_ptr->cname);
	if (_data_ptr->bit_mask & cksum_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "cksum ");
	    _p_Checksum(_g, &_data_ptr->cksum);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cusec ");
	{
	    ULONG_LONG value = _data_ptr->cusec;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "ctime ");
	_oss_prt_gentime(_g, &_data_ptr->ctime);
	if (_data_ptr->bit_mask & Authenticator_subkey_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "subkey ");
	    _p_EncryptionKey(_g, &_data_ptr->subkey);
	}
	if (_data_ptr->bit_mask & Authenticator_seq_number_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "seq-number ");
	    {
		ULONG_LONG value = _data_ptr->seq_number;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	if (_data_ptr->bit_mask & Authenticator_authorization_data_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "authorization-data ");
	    _p_AuthorizationData(_g, &_data_ptr->authorization_data);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pAP_REP(OssGlobal * _g, void * _data)
{
    AP_REP	*_data_ptr;
    _data_ptr = (AP_REP *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "enc-part ");
	_p_EncryptedData(_g, &_data_ptr->enc_part);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pEncAPRepPart(OssGlobal * _g, void * _data)
{
    EncAPRepPart	*_data_ptr;
    _data_ptr = (EncAPRepPart *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "ctime ");
	_oss_prt_gentime(_g, &_data_ptr->ctime);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cusec ");
	{
	    ULONG_LONG value = _data_ptr->cusec;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	if (_data_ptr->bit_mask & EncAPRepPart_subkey_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "subkey ");
	    _p_EncryptionKey(_g, &_data_ptr->subkey);
	}
	if (_data_ptr->bit_mask & EncAPRepPart_seq_number_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "seq-number ");
	    {
		ULONG_LONG value = _data_ptr->seq_number;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pKRB_SAFE(OssGlobal * _g, void * _data)
{
    KRB_SAFE	*_data_ptr;
    _data_ptr = (KRB_SAFE *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "safe-body ");
	{
	    _oss_indent(_g, 1);
	    ossPrint(_g, "{");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "user-data ");
	    _oss_prt_oct(_g, _data_ptr->safe_body.user_data.value, _data_ptr->safe_body.user_data.length);
	    if (_data_ptr->safe_body.bit_mask & KRB_SAFE_BODY_timestamp_present) {
		ossPrint(_g, ",");
		_oss_indent(_g, 0);
		ossPrint(_g, "timestamp ");
		_oss_prt_gentime(_g, &_data_ptr->safe_body.timestamp);
	    }
	    if (_data_ptr->safe_body.bit_mask & KRB_SAFE_BODY_usec_present) {
		ossPrint(_g, ",");
		_oss_indent(_g, 0);
		ossPrint(_g, "usec ");
		{
		    ULONG_LONG value = _data_ptr->safe_body.usec;
		    ossPrint(_g, ULLONG_FMT, value);
		}
	    }
	    if (_data_ptr->safe_body.bit_mask & KRB_SAFE_BODY_seq_number_present) {
		ossPrint(_g, ",");
		_oss_indent(_g, 0);
		ossPrint(_g, "seq-number ");
		{
		    ULONG_LONG value = _data_ptr->safe_body.seq_number;
		    ossPrint(_g, ULLONG_FMT, value);
		}
	    }
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "s-address ");
	    _p_HostAddress(_g, &_data_ptr->safe_body.s_address);
	    if (_data_ptr->safe_body.bit_mask & KRB_SAFE_BODY_r_address_present) {
		ossPrint(_g, ",");
		_oss_indent(_g, 0);
		ossPrint(_g, "r-address ");
		_p_HostAddress(_g, &_data_ptr->safe_body.r_address);
	    }
	    _oss_indent(_g, -1);
	    ossPrint(_g, "}");
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "cksum ");
	_p_Checksum(_g, &_data_ptr->cksum);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pKRB_PRIV(OssGlobal * _g, void * _data)
{
    KRB_PRIV	*_data_ptr;
    _data_ptr = (KRB_PRIV *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "enc-part ");
	_p_EncryptedData(_g, &_data_ptr->enc_part);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pEncKrbPrivPart(OssGlobal * _g, void * _data)
{
    EncKrbPrivPart	*_data_ptr;
    _data_ptr = (EncKrbPrivPart *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "user-data ");
	_oss_prt_oct(_g, _data_ptr->user_data.value, _data_ptr->user_data.length);
	if (_data_ptr->bit_mask & EncKrbPrivPart_timestamp_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "timestamp ");
	    _oss_prt_gentime(_g, &_data_ptr->timestamp);
	}
	if (_data_ptr->bit_mask & EncKrbPrivPart_usec_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "usec ");
	    {
		ULONG_LONG value = _data_ptr->usec;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	if (_data_ptr->bit_mask & EncKrbPrivPart_seq_number_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "seq-number ");
	    {
		ULONG_LONG value = _data_ptr->seq_number;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "s-address ");
	_p_HostAddress(_g, &_data_ptr->s_address);
	if (_data_ptr->bit_mask & EncKrbPrivPart_r_address_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "r-address ");
	    _p_HostAddress(_g, &_data_ptr->r_address);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pKRB_CRED(OssGlobal * _g, void * _data)
{
    KRB_CRED	*_data_ptr;
    _data_ptr = (KRB_CRED *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "tickets ");
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	if (_data_ptr->tickets) {
	    struct _seqof3 * _tempa = _data_ptr->tickets;
	    struct _seqof3 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		_p_Ticket(_g, &_tempa->value);
		_tempa = _tempb;
		if (_tempa)
		    ossPrint(_g, ",");
	    }
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "enc-part ");
	_p_EncryptedData(_g, &_data_ptr->enc_part);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pEncKrbCredPart(OssGlobal * _g, void * _data)
{
    EncKrbCredPart	*_data_ptr;
    _data_ptr = (EncKrbCredPart *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "ticket-info ");
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	if (_data_ptr->ticket_info) {
	    struct _seqof5 * _tempa = _data_ptr->ticket_info;
	    struct _seqof5 * _tempb;
	    while (_tempa) {
		_tempb = _tempa->next;
		{
		    _oss_indent(_g, 1);
		    ossPrint(_g, "{");
		    _oss_indent(_g, 0);
		    ossPrint(_g, "key ");
		    _p_EncryptionKey(_g, &_tempa->value.key);
		    if (_tempa->value.prealm) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "prealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
			if (_tempa->value.prealm == NULL)
			    ossPrint(_g, "<<<<<<NULL>>>>>>");
			else
#endif
			    _oss_prt_nchar(_g, (char *)_tempa->value.prealm);
		    }
		    if (_tempa->value.bit_mask & pname_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "pname ");
			_p_PrincipalName(_g, &_tempa->value.pname);
		    }
		    if (_tempa->value.bit_mask & flags_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "flags ");
			_oss_prt_bit(_g, _tempa->value.flags.value, _tempa->value.flags.length);
		    }
		    if (_tempa->value.bit_mask & authtime_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "authtime ");
			_oss_prt_gentime(_g, &_tempa->value.authtime);
		    }
		    if (_tempa->value.bit_mask & KrbCredInfo_starttime_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "starttime ");
			_oss_prt_gentime(_g, &_tempa->value.starttime);
		    }
		    if (_tempa->value.bit_mask & endtime_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "endtime ");
			_oss_prt_gentime(_g, &_tempa->value.endtime);
		    }
		    if (_tempa->value.bit_mask & KrbCredInfo_renew_till_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "renew-till ");
			_oss_prt_gentime(_g, &_tempa->value.renew_till);
		    }
		    if (_tempa->value.srealm) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "srealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
			if (_tempa->value.srealm == NULL)
			    ossPrint(_g, "<<<<<<NULL>>>>>>");
			else
#endif
			    _oss_prt_nchar(_g, (char *)_tempa->value.srealm);
		    }
		    if (_tempa->value.bit_mask & KrbCredInfo_sname_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "sname ");
			_p_PrincipalName(_g, &_tempa->value.sname);
		    }
		    if (_tempa->value.bit_mask & KrbCredInfo_caddr_present) {
			ossPrint(_g, ",");
			_oss_indent(_g, 0);
			ossPrint(_g, "caddr ");
			_p_HostAddresses(_g, &_tempa->value.caddr);
		    }
		    _oss_indent(_g, -1);
		    ossPrint(_g, "}");
		}
		_tempa = _tempb;
		if (_tempa)
		    ossPrint(_g, ",");
	    }
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
	if (_data_ptr->bit_mask & nonce_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "nonce ");
	    {
		ULONG_LONG value = _data_ptr->nonce;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	if (_data_ptr->bit_mask & EncKrbCredPart_timestamp_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "timestamp ");
	    _oss_prt_gentime(_g, &_data_ptr->timestamp);
	}
	if (_data_ptr->bit_mask & EncKrbCredPart_usec_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "usec ");
	    {
		ULONG_LONG value = _data_ptr->usec;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	if (_data_ptr->bit_mask & s_address_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "s-address ");
	    _p_HostAddress(_g, &_data_ptr->s_address);
	}
	if (_data_ptr->bit_mask & EncKrbCredPart_r_address_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "r-address ");
	    _p_HostAddress(_g, &_data_ptr->r_address);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pKRB_ERROR(OssGlobal * _g, void * _data)
{
    KRB_ERROR	*_data_ptr;
    _data_ptr = (KRB_ERROR *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "pvno ");
	{
	    ULONG_LONG value = _data_ptr->pvno;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "msg-type ");
	{
	    ULONG_LONG value = _data_ptr->msg_type;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	if (_data_ptr->bit_mask & ctime_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "ctime ");
	    _oss_prt_gentime(_g, &_data_ptr->ctime);
	}
	if (_data_ptr->bit_mask & cusec_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "cusec ");
	    {
		ULONG_LONG value = _data_ptr->cusec;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "stime ");
	_oss_prt_gentime(_g, &_data_ptr->stime);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "susec ");
	{
	    ULONG_LONG value = _data_ptr->susec;
	    ossPrint(_g, ULLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "error-code ");
	{
	    LONG_LONG value = _data_ptr->error_code;

	    ossPrint(_g, LLONG_FMT, value);
	}
	if (_data_ptr->crealm) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "crealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_data_ptr->crealm == NULL)
		ossPrint(_g, "<<<<<<NULL>>>>>>");
	    else
#endif
		_oss_prt_nchar(_g, (char *)_data_ptr->crealm);
	}
	if (_data_ptr->bit_mask & KRB_ERROR_cname_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "cname ");
	    _p_PrincipalName(_g, &_data_ptr->cname);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "realm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	if (_data_ptr->realm == NULL)
	    ossPrint(_g, "<<<<<<NULL>>>>>>");
	else
#endif
	    _oss_prt_nchar(_g, (char *)_data_ptr->realm);
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "sname ");
	_p_PrincipalName(_g, &_data_ptr->sname);
	if (_data_ptr->e_text) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "e-text ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_data_ptr->e_text == NULL)
		ossPrint(_g, "<<<<<<NULL>>>>>>");
	    else
#endif
		_oss_prt_nchar(_g, (char *)_data_ptr->e_text);
	}
	if (_data_ptr->bit_mask & e_data_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "e-data ");
	    _oss_prt_oct(_g, _data_ptr->e_data.value, _data_ptr->e_data.length);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pMETHOD_DATA(OssGlobal * _g, void * _data)
{
    METHOD_DATA	*_data_ptr;
    _data_ptr = (METHOD_DATA *)_data;
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct METHOD_DATA * _tempa = *_data_ptr;
	struct METHOD_DATA * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    _p_PA_DATA(_g, &_tempa->value);
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

    return PDU_PRINTED;
}

static int _pTYPED_DATA(OssGlobal * _g, void * _data)
{
    TYPED_DATA	*_data_ptr;
    _data_ptr = (TYPED_DATA *)_data;
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct TYPED_DATA * _tempa = *_data_ptr;
	struct TYPED_DATA * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    {
		_oss_indent(_g, 1);
		ossPrint(_g, "{");
		_oss_indent(_g, 0);
		ossPrint(_g, "data-type ");
		{
		    LONG_LONG value = _tempa->value.data_type;

		    ossPrint(_g, LLONG_FMT, value);
		}
		if (_tempa->value.bit_mask & data_value_present) {
		    ossPrint(_g, ",");
		    _oss_indent(_g, 0);
		    ossPrint(_g, "data-value ");
		    _oss_prt_oct(_g, _tempa->value.data_value.value, _tempa->value.data_value.length);
		}
		_oss_indent(_g, -1);
		ossPrint(_g, "}");
	    }
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

    return PDU_PRINTED;
}

static int _pPA_ENC_TIMESTAMP(OssGlobal * _g, void * _data)
{
    PA_ENC_TIMESTAMP	*_data_ptr;
    _data_ptr = (PA_ENC_TIMESTAMP *)_data;
    _p_EncryptedData(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pPA_ENC_TS_ENC(OssGlobal * _g, void * _data)
{
    PA_ENC_TS_ENC	*_data_ptr;
    _data_ptr = (PA_ENC_TS_ENC *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "patimestamp ");
	_oss_prt_gentime(_g, &_data_ptr->patimestamp);
	if (_data_ptr->bit_mask & pausec_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "pausec ");
	    {
		ULONG_LONG value = _data_ptr->pausec;
		ossPrint(_g, ULLONG_FMT, value);
	    }
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pETYPE_INFO(OssGlobal * _g, void * _data)
{
    ETYPE_INFO	*_data_ptr;
    _data_ptr = (ETYPE_INFO *)_data;
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct ETYPE_INFO * _tempa = *_data_ptr;
	struct ETYPE_INFO * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    {
		_oss_indent(_g, 1);
		ossPrint(_g, "{");
		_oss_indent(_g, 0);
		ossPrint(_g, "etype ");
		{
		    LONG_LONG value = _tempa->value.etype;

		    ossPrint(_g, LLONG_FMT, value);
		}
		if (_tempa->value.bit_mask & salt_present) {
		    ossPrint(_g, ",");
		    _oss_indent(_g, 0);
		    ossPrint(_g, "salt ");
		    _oss_prt_oct(_g, _tempa->value.salt.value, _tempa->value.salt.length);
		}
		_oss_indent(_g, -1);
		ossPrint(_g, "}");
	    }
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

    return PDU_PRINTED;
}

static int _pETYPE_INFO2(OssGlobal * _g, void * _data)
{
    ETYPE_INFO2	*_data_ptr;
    _data_ptr = (ETYPE_INFO2 *)_data;
    _oss_indent(_g, 1);
    ossPrint(_g, "{");
    if (*_data_ptr) {
	struct ETYPE_INFO2 * _tempa = *_data_ptr;
	struct ETYPE_INFO2 * _tempb;
	while (_tempa) {
	    _tempb = _tempa->next;
	    {
		_oss_indent(_g, 1);
		ossPrint(_g, "{");
		_oss_indent(_g, 0);
		ossPrint(_g, "etype ");
		{
		    LONG_LONG value = _tempa->value.etype;

		    ossPrint(_g, LLONG_FMT, value);
		}
		if (_tempa->value.salt) {
		    ossPrint(_g, ",");
		    _oss_indent(_g, 0);
		    ossPrint(_g, "salt ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
		    if (_tempa->value.salt == NULL)
			ossPrint(_g, "<<<<<<NULL>>>>>>");
		    else
#endif
			_oss_prt_nchar(_g, (char *)_tempa->value.salt);
		}
		if (_tempa->value.bit_mask & s2kparams_present) {
		    ossPrint(_g, ",");
		    _oss_indent(_g, 0);
		    ossPrint(_g, "s2kparams ");
		    _oss_prt_oct(_g, _tempa->value.s2kparams.value, _tempa->value.s2kparams.length);
		}
		_oss_indent(_g, -1);
		ossPrint(_g, "}");
	    }
	    _tempa = _tempb;
	    if (_tempa)
		ossPrint(_g, ",");
	}
    }
    _oss_indent(_g, -1);
    ossPrint(_g, "}");

    return PDU_PRINTED;
}

static int _pAD_IF_RELEVANT(OssGlobal * _g, void * _data)
{
    AD_IF_RELEVANT	*_data_ptr;
    _data_ptr = (AD_IF_RELEVANT *)_data;
    _p_AuthorizationData(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pAD_KDCIssued(OssGlobal * _g, void * _data)
{
    AD_KDCIssued	*_data_ptr;
    _data_ptr = (AD_KDCIssued *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "ad-checksum ");
	_p_Checksum(_g, &_data_ptr->ad_checksum);
	if (_data_ptr->i_realm) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "i-realm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_data_ptr->i_realm == NULL)
		ossPrint(_g, "<<<<<<NULL>>>>>>");
	    else
#endif
		_oss_prt_nchar(_g, (char *)_data_ptr->i_realm);
	}
	if (_data_ptr->bit_mask & i_sname_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "i-sname ");
	    _p_PrincipalName(_g, &_data_ptr->i_sname);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "elements ");
	_p_AuthorizationData(_g, &_data_ptr->elements);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pAD_AND_OR(OssGlobal * _g, void * _data)
{
    AD_AND_OR	*_data_ptr;
    _data_ptr = (AD_AND_OR *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "condition-count ");
	{
	    LONG_LONG value = _data_ptr->condition_count;

	    ossPrint(_g, LLONG_FMT, value);
	}
	ossPrint(_g, ",");
	_oss_indent(_g, 0);
	ossPrint(_g, "elements ");
	_p_AuthorizationData(_g, &_data_ptr->elements);
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pAD_MANDATORY_FOR_KDC(OssGlobal * _g, void * _data)
{
    AD_MANDATORY_FOR_KDC	*_data_ptr;
    _data_ptr = (AD_MANDATORY_FOR_KDC *)_data;
    _p_AuthorizationData(_g, _data_ptr);

    return PDU_PRINTED;
}

static int _pKERB_PA_PAC_REQUEST(OssGlobal * _g, void * _data)
{
    KERB_PA_PAC_REQUEST	*_data_ptr;
    _data_ptr = (KERB_PA_PAC_REQUEST *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "include-pac ");
	ossPrint(_g, _data_ptr->include_pac ? "TRUE" : "FALSE");
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

static int _pChangePasswdData(OssGlobal * _g, void * _data)
{
    ChangePasswdData	*_data_ptr;
    _data_ptr = (ChangePasswdData *)_data;
    {
	_oss_indent(_g, 1);
	ossPrint(_g, "{");
	_oss_indent(_g, 0);
	ossPrint(_g, "newpasswd ");
	_oss_prt_oct(_g, _data_ptr->newpasswd.value, _data_ptr->newpasswd.length);
	if (_data_ptr->bit_mask & targname_present) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "targname ");
	    _p_PrincipalName(_g, &_data_ptr->targname);
	}
	if (_data_ptr->targrealm) {
	    ossPrint(_g, ",");
	    _oss_indent(_g, 0);
	    ossPrint(_g, "targrealm ");
#ifndef OSS_DO_NOT_CHECK_POINTERS
	    if (_data_ptr->targrealm == NULL)
		ossPrint(_g, "<<<<<<NULL>>>>>>");
	    else
#endif
		_oss_prt_nchar(_g, (char *)_data_ptr->targrealm);
	}
	_oss_indent(_g, -1);
	ossPrint(_g, "}");
    }

    return PDU_PRINTED;
}

int DLL_ENTRY_FDEF _pmKerberosV5Spec2(struct ossGlobal * _g, int _pdunum, void * _data)
{
    int _rc = _pdunum < 0;

    if (_rc)
	_pdunum = -_pdunum;
    if (_pdunum < 1 || _pdunum > 30 || !_PrintPDU[_pdunum - 1]._pf)
	return PDU_RANGE;
    else {
	if (_rc) {
	    ossPrint(_g, "%s : ", _PrintPDU[_pdunum - 1]._name);
	    _rc = _PrintPDU[_pdunum - 1]._pf(_g, _data);
	} else {
	    ossPrint(_g, "value %s ::= ", _PrintPDU[_pdunum - 1]._name);
	    _rc = _PrintPDU[_pdunum - 1]._pf(_g, _data);
	    ossPrint(_g, "\n");
	}
    }

    return _rc;
}

#endif

#ifdef OSS_COPY_VALUE
#define _oss_c ((_EncDecGlobals*)_g->encDecVar)

static Ticket * _cpTicket(OssGlobal * _g, Ticket * psVal, Ticket * pdVal)
{
    if (!pdVal) {
	pdVal = (Ticket *)_oss_dec_const_alloc(_g, sizeof(Ticket));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	size_t  len_1 = (size_t)sizeof(char) * (strlen((*psVal).realm) + 1);

	(*pdVal).realm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
	strcpy((*pdVal).realm, (*psVal).realm);
    }
    {
	_cpPrincipalName(_g, &((*psVal).sname), &((*pdVal).sname));
    }
    {
	_cpEncryptedData(_g, &((*psVal).enc_part), &((*pdVal).enc_part));
    }
    return pdVal;
}


static _seqof1 * _cp_seqof1(OssGlobal * _g, _seqof1 * psVal, _seqof1 * pdVal)
{
    if (!pdVal) {
	pdVal = (_seqof1 *)_oss_dec_const_alloc(_g, sizeof(_seqof1));
    }
    *pdVal = NULL;
    if (*psVal) {
	struct _seqof1 *  s_oss_tmp_1 = *psVal;
	struct _seqof1 *  d_oss_tmp_1;

	*pdVal = d_oss_tmp_1 = (struct _seqof1 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof1));
	do {
	    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct _seqof1));
	    {
		size_t  len_1 = (size_t)sizeof(char) * (strlen(s_oss_tmp_1->value) + 1);

		d_oss_tmp_1->value = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy(d_oss_tmp_1->value, s_oss_tmp_1->value);
	    }
	    if (s_oss_tmp_1->next)
		d_oss_tmp_1->next = (struct _seqof1 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof1));
	    s_oss_tmp_1 = s_oss_tmp_1->next;
	    d_oss_tmp_1 = d_oss_tmp_1->next;
	} while (s_oss_tmp_1);
    }
    return pdVal;
}


static PrincipalName * _cpPrincipalName(OssGlobal * _g, PrincipalName * psVal, PrincipalName * pdVal)
{
    if (!pdVal) {
	pdVal = (PrincipalName *)_oss_dec_const_alloc(_g, sizeof(PrincipalName));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_cp_seqof1(_g, &((*psVal).name_string), &((*pdVal).name_string));
    }
    return pdVal;
}


static HostAddress * _cpHostAddress(OssGlobal * _g, HostAddress * psVal, HostAddress * pdVal)
{
    if (!pdVal) {
	pdVal = (HostAddress *)_oss_dec_const_alloc(_g, sizeof(HostAddress));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).address), &((*pdVal).address), sizeof(((*pdVal).address).length), sizeof(((*pdVal).address).value[0]), (unsigned int)((char *)&((*psVal).address).value - (char *)&((*psVal).address)));
    }
    return pdVal;
}


static HostAddresses * _cpHostAddresses(OssGlobal * _g, HostAddresses * psVal, HostAddresses * pdVal)
{
    if (!pdVal) {
	pdVal = (HostAddresses *)_oss_dec_const_alloc(_g, sizeof(HostAddresses));
    }
    *pdVal = NULL;
    if (*psVal) {
	struct HostAddresses *  s_oss_tmp_1 = *psVal;
	struct HostAddresses *  d_oss_tmp_1;

	*pdVal = d_oss_tmp_1 = (struct HostAddresses *)_oss_dec_getmem_internal(_g, sizeof(struct HostAddresses));
	do {
	    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct HostAddresses));
	    {
		_cpHostAddress(_g, &(s_oss_tmp_1->value), &(d_oss_tmp_1->value));
	    }
	    if (s_oss_tmp_1->next)
		d_oss_tmp_1->next = (struct HostAddresses *)_oss_dec_getmem_internal(_g, sizeof(struct HostAddresses));
	    s_oss_tmp_1 = s_oss_tmp_1->next;
	    d_oss_tmp_1 = d_oss_tmp_1->next;
	} while (s_oss_tmp_1);
    }
    return pdVal;
}


static AuthorizationData * _cpAuthorizationData(OssGlobal * _g, AuthorizationData * psVal, AuthorizationData * pdVal)
{
    if (!pdVal) {
	pdVal = (AuthorizationData *)_oss_dec_const_alloc(_g, sizeof(AuthorizationData));
    }
    *pdVal = NULL;
    if (*psVal) {
	struct AuthorizationData *  s_oss_tmp_1 = *psVal;
	struct AuthorizationData *  d_oss_tmp_1;

	*pdVal = d_oss_tmp_1 = (struct AuthorizationData *)_oss_dec_getmem_internal(_g, sizeof(struct AuthorizationData));
	do {
	    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct AuthorizationData));
	    {
		{
		    _oss_cpy_unbnd_octet_ia(_g, &((s_oss_tmp_1->value).ad_data), &((d_oss_tmp_1->value).ad_data), sizeof(((d_oss_tmp_1->value).ad_data).length), sizeof(((d_oss_tmp_1->value).ad_data).value[0]), (unsigned int)((char *)&((s_oss_tmp_1->value).ad_data).value - (char *)&((s_oss_tmp_1->value).ad_data)));
		}
	    }
	    if (s_oss_tmp_1->next)
		d_oss_tmp_1->next = (struct AuthorizationData *)_oss_dec_getmem_internal(_g, sizeof(struct AuthorizationData));
	    s_oss_tmp_1 = s_oss_tmp_1->next;
	    d_oss_tmp_1 = d_oss_tmp_1->next;
	} while (s_oss_tmp_1);
    }
    return pdVal;
}


static PA_DATA * _cpPA_DATA(OssGlobal * _g, PA_DATA * psVal, PA_DATA * pdVal)
{
    if (!pdVal) {
	pdVal = (PA_DATA *)_oss_dec_const_alloc(_g, sizeof(PA_DATA));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).padata_value), &((*pdVal).padata_value), sizeof(((*pdVal).padata_value).length), sizeof(((*pdVal).padata_value).value[0]), (unsigned int)((char *)&((*psVal).padata_value).value - (char *)&((*psVal).padata_value)));
    }
    return pdVal;
}


static EncryptedData * _cpEncryptedData(OssGlobal * _g, EncryptedData * psVal, EncryptedData * pdVal)
{
    if (!pdVal) {
	pdVal = (EncryptedData *)_oss_dec_const_alloc(_g, sizeof(EncryptedData));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).cipher), &((*pdVal).cipher), sizeof(((*pdVal).cipher).length), sizeof(((*pdVal).cipher).value[0]), (unsigned int)((char *)&((*psVal).cipher).value - (char *)&((*psVal).cipher)));
    }
    return pdVal;
}


static EncryptionKey * _cpEncryptionKey(OssGlobal * _g, EncryptionKey * psVal, EncryptionKey * pdVal)
{
    if (!pdVal) {
	pdVal = (EncryptionKey *)_oss_dec_const_alloc(_g, sizeof(EncryptionKey));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).keyvalue), &((*pdVal).keyvalue), sizeof(((*pdVal).keyvalue).length), sizeof(((*pdVal).keyvalue).value[0]), (unsigned int)((char *)&((*psVal).keyvalue).value - (char *)&((*psVal).keyvalue)));
    }
    return pdVal;
}


static Checksum * _cpChecksum(OssGlobal * _g, Checksum * psVal, Checksum * pdVal)
{
    if (!pdVal) {
	pdVal = (Checksum *)_oss_dec_const_alloc(_g, sizeof(Checksum));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).checksum), &((*pdVal).checksum), sizeof(((*pdVal).checksum).length), sizeof(((*pdVal).checksum).value[0]), (unsigned int)((char *)&((*psVal).checksum).value - (char *)&((*psVal).checksum)));
    }
    return pdVal;
}


static _seqof3 * _cp_seqof3(OssGlobal * _g, _seqof3 * psVal, _seqof3 * pdVal)
{
    if (!pdVal) {
	pdVal = (_seqof3 *)_oss_dec_const_alloc(_g, sizeof(_seqof3));
    }
    *pdVal = NULL;
    if (*psVal) {
	struct _seqof3 *  s_oss_tmp_1 = *psVal;
	struct _seqof3 *  d_oss_tmp_1;

	*pdVal = d_oss_tmp_1 = (struct _seqof3 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof3));
	do {
	    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct _seqof3));
	    {
		_cpTicket(_g, &(s_oss_tmp_1->value), &(d_oss_tmp_1->value));
	    }
	    if (s_oss_tmp_1->next)
		d_oss_tmp_1->next = (struct _seqof3 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof3));
	    s_oss_tmp_1 = s_oss_tmp_1->next;
	    d_oss_tmp_1 = d_oss_tmp_1->next;
	} while (s_oss_tmp_1);
    }
    return pdVal;
}


static KDC_REQ_BODY * _cpKDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * psVal, KDC_REQ_BODY * pdVal)
{
    if (!pdVal) {
	pdVal = (KDC_REQ_BODY *)_oss_dec_const_alloc(_g, sizeof(KDC_REQ_BODY));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).kdc_options), &((*pdVal).kdc_options), sizeof(((*pdVal).kdc_options).length), -1L, (unsigned int)((char *)&((*psVal).kdc_options).value - (char *)&((*psVal).kdc_options)));
    }
    if ((*psVal).bit_mask & KDC_REQ_BODY_cname_present) {
	_cpPrincipalName(_g, &((*psVal).cname), &((*pdVal).cname));
    }
    {
	size_t  len_1 = (size_t)sizeof(char) * (strlen((*psVal).realm) + 1);

	(*pdVal).realm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
	strcpy((*pdVal).realm, (*psVal).realm);
    }
    if ((*psVal).bit_mask & KDC_REQ_BODY_sname_present) {
	_cpPrincipalName(_g, &((*psVal).sname), &((*pdVal).sname));
    }
    {
	_oss_cpy_link_obj(_g, (void**)(&((*psVal).etype)), (void**)(&((*pdVal).etype)), sizeof(struct _seqof2));
    }
    if ((*psVal).bit_mask & addresses_present) {
	_cpHostAddresses(_g, &((*psVal).addresses), &((*pdVal).addresses));
    }
    if ((*psVal).bit_mask & enc_authorization_data_present) {
	_cpEncryptedData(_g, &((*psVal).enc_authorization_data), &((*pdVal).enc_authorization_data));
    }
    if ((*psVal).bit_mask & additional_tickets_present) {
	_cp_seqof3(_g, &((*psVal).additional_tickets), &((*pdVal).additional_tickets));
    }
    return pdVal;
}


static _seqof4 * _cp_seqof4(OssGlobal * _g, _seqof4 * psVal, _seqof4 * pdVal)
{
    if (!pdVal) {
	pdVal = (_seqof4 *)_oss_dec_const_alloc(_g, sizeof(_seqof4));
    }
    *pdVal = NULL;
    if (*psVal) {
	struct _seqof4 *  s_oss_tmp_1 = *psVal;
	struct _seqof4 *  d_oss_tmp_1;

	*pdVal = d_oss_tmp_1 = (struct _seqof4 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof4));
	do {
	    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct _seqof4));
	    {
		_cpPA_DATA(_g, &(s_oss_tmp_1->value), &(d_oss_tmp_1->value));
	    }
	    if (s_oss_tmp_1->next)
		d_oss_tmp_1->next = (struct _seqof4 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof4));
	    s_oss_tmp_1 = s_oss_tmp_1->next;
	    d_oss_tmp_1 = d_oss_tmp_1->next;
	} while (s_oss_tmp_1);
    }
    return pdVal;
}


static KDC_REQ * _cpKDC_REQ(OssGlobal * _g, KDC_REQ * psVal, KDC_REQ * pdVal)
{
    if (!pdVal) {
	pdVal = (KDC_REQ *)_oss_dec_const_alloc(_g, sizeof(KDC_REQ));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    if ((*psVal).bit_mask & KDC_REQ_padata_present) {
	_cp_seqof4(_g, &((*psVal).padata), &((*pdVal).padata));
    }
    {
	_cpKDC_REQ_BODY(_g, &((*psVal).req_body), &((*pdVal).req_body));
    }
    return pdVal;
}


static KDC_REP * _cpKDC_REP(OssGlobal * _g, KDC_REP * psVal, KDC_REP * pdVal)
{
    if (!pdVal) {
	pdVal = (KDC_REP *)_oss_dec_const_alloc(_g, sizeof(KDC_REP));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    if ((*psVal).bit_mask & KDC_REP_padata_present) {
	_cp_seqof4(_g, &((*psVal).padata), &((*pdVal).padata));
    }
    {
	size_t  len_1 = (size_t)sizeof(char) * (strlen((*psVal).crealm) + 1);

	(*pdVal).crealm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
	strcpy((*pdVal).crealm, (*psVal).crealm);
    }
    {
	_cpPrincipalName(_g, &((*psVal).cname), &((*pdVal).cname));
    }
    {
	_cpTicket(_g, &((*psVal).ticket), &((*pdVal).ticket));
    }
    {
	_cpEncryptedData(_g, &((*psVal).enc_part), &((*pdVal).enc_part));
    }
    return pdVal;
}


static EncKDCRepPart * _cpEncKDCRepPart(OssGlobal * _g, EncKDCRepPart * psVal, EncKDCRepPart * pdVal)
{
    if (!pdVal) {
	pdVal = (EncKDCRepPart *)_oss_dec_const_alloc(_g, sizeof(EncKDCRepPart));
    }
    memcpy(pdVal, psVal, sizeof(*pdVal));
    {
	_cpEncryptionKey(_g, &((*psVal).key), &((*pdVal).key));
    }
    {
	_oss_cpy_link_obj(_g, (void**)(&((*psVal).last_req)), (void**)(&((*pdVal).last_req)), sizeof(struct LastReq));
    }
    {
	_oss_cpy_unbnd_octet_ia(_g, &((*psVal).flags), &((*pdVal).flags), sizeof(((*pdVal).flags).length), -1L, (unsigned int)((char *)&((*psVal).flags).value - (char *)&((*psVal).flags)));
    }
    {
	size_t  len_1 = (size_t)sizeof(char) * (strlen((*psVal).srealm) + 1);

	(*pdVal).srealm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
	strcpy((*pdVal).srealm, (*psVal).srealm);
    }
    {
	_cpPrincipalName(_g, &((*psVal).sname), &((*pdVal).sname));
    }
    if ((*psVal).bit_mask & EncKDCRepPart_caddr_present) {
	_cpHostAddresses(_g, &((*psVal).caddr), &((*pdVal).caddr));
    }
    if ((*psVal).bit_mask & encrypted_pa_data_present) {
	_cp_seqof4(_g, &((*psVal).encrypted_pa_data), &((*pdVal).encrypted_pa_data));
    }
    return pdVal;
}


int DLL_ENTRY_FDEF _CPKerberosV5Spec2(struct ossGlobal * _g, int pduNum, void * src, void ** pdst)
{
    int res = 0;
    void *pdVal = NULL;

    if (pduNum <= 0 || pduNum > 31)
	return PDU_RANGE;
    switch (pduNum) {
	case 1: {
	    pdVal = _cpTicket(_g, (Ticket *)src, (Ticket *)pdVal);
	} break;
	case 2: {
	    pdVal = (EncTicketPart *)_oss_dec_const_alloc(_g, sizeof(EncTicketPart));
	    memcpy((EncTicketPart *)pdVal, (EncTicketPart *)src, sizeof(*(EncTicketPart *)pdVal));
	    {
		_oss_cpy_unbnd_octet_ia(_g, &((*(EncTicketPart *)src).flags), &((*(EncTicketPart *)pdVal).flags), sizeof(((*(EncTicketPart *)pdVal).flags).length), -1L, (unsigned int)((char *)&((*(EncTicketPart *)src).flags).value - (char *)&((*(EncTicketPart *)src).flags)));
	    }
	    {
		_cpEncryptionKey(_g, &((*(EncTicketPart *)src).key), &((*(EncTicketPart *)pdVal).key));
	    }
	    {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(EncTicketPart *)src).crealm) + 1);

		(*(EncTicketPart *)pdVal).crealm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(EncTicketPart *)pdVal).crealm, (*(EncTicketPart *)src).crealm);
	    }
	    {
		_cpPrincipalName(_g, &((*(EncTicketPart *)src).cname), &((*(EncTicketPart *)pdVal).cname));
	    }
	    {
		{
		    _oss_cpy_unbnd_octet_ia(_g, &(((*(EncTicketPart *)src).transited).contents), &(((*(EncTicketPart *)pdVal).transited).contents), sizeof((((*(EncTicketPart *)pdVal).transited).contents).length), sizeof((((*(EncTicketPart *)pdVal).transited).contents).value[0]), (unsigned int)((char *)&(((*(EncTicketPart *)src).transited).contents).value - (char *)&(((*(EncTicketPart *)src).transited).contents)));
		}
	    }
	    if ((*(EncTicketPart *)src).bit_mask & EncTicketPart_caddr_present) {
		_cpHostAddresses(_g, &((*(EncTicketPart *)src).caddr), &((*(EncTicketPart *)pdVal).caddr));
	    }
	    if ((*(EncTicketPart *)src).bit_mask & EncTicketPart_authorization_data_present) {
		_cpAuthorizationData(_g, &((*(EncTicketPart *)src).authorization_data), &((*(EncTicketPart *)pdVal).authorization_data));
	    }
	} break;
	case 3: {
	    pdVal = _cpKDC_REQ(_g, (KDC_REQ *)src, (KDC_REQ *)pdVal);
	} break;
	case 4: {
	    pdVal = _cpKDC_REQ(_g, (KDC_REQ *)src, (KDC_REQ *)pdVal);
	} break;
	case 5: {
	    pdVal = _cpKDC_REP(_g, (KDC_REP *)src, (KDC_REP *)pdVal);
	} break;
	case 6: {
	    pdVal = _cpKDC_REP(_g, (KDC_REP *)src, (KDC_REP *)pdVal);
	} break;
	case 7: {
	    pdVal = _cpEncKDCRepPart(_g, (EncKDCRepPart *)src, (EncKDCRepPart *)pdVal);
	} break;
	case 8: {
	    pdVal = _cpEncKDCRepPart(_g, (EncKDCRepPart *)src, (EncKDCRepPart *)pdVal);
	} break;
	case 9: {
	    pdVal = (AP_REQ *)_oss_dec_const_alloc(_g, sizeof(AP_REQ));
	    memcpy((AP_REQ *)pdVal, (AP_REQ *)src, sizeof(*(AP_REQ *)pdVal));
	    {
		_oss_cpy_unbnd_octet_ia(_g, &((*(AP_REQ *)src).ap_options), &((*(AP_REQ *)pdVal).ap_options), sizeof(((*(AP_REQ *)pdVal).ap_options).length), -1L, (unsigned int)((char *)&((*(AP_REQ *)src).ap_options).value - (char *)&((*(AP_REQ *)src).ap_options)));
	    }
	    {
		_cpTicket(_g, &((*(AP_REQ *)src).ticket), &((*(AP_REQ *)pdVal).ticket));
	    }
	    {
		_cpEncryptedData(_g, &((*(AP_REQ *)src).authenticator), &((*(AP_REQ *)pdVal).authenticator));
	    }
	} break;
	case 10: {
	    pdVal = (Authenticator *)_oss_dec_const_alloc(_g, sizeof(Authenticator));
	    memcpy((Authenticator *)pdVal, (Authenticator *)src, sizeof(*(Authenticator *)pdVal));
	    {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(Authenticator *)src).crealm) + 1);

		(*(Authenticator *)pdVal).crealm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(Authenticator *)pdVal).crealm, (*(Authenticator *)src).crealm);
	    }
	    {
		_cpPrincipalName(_g, &((*(Authenticator *)src).cname), &((*(Authenticator *)pdVal).cname));
	    }
	    if ((*(Authenticator *)src).bit_mask & cksum_present) {
		_cpChecksum(_g, &((*(Authenticator *)src).cksum), &((*(Authenticator *)pdVal).cksum));
	    }
	    if ((*(Authenticator *)src).bit_mask & Authenticator_subkey_present) {
		_cpEncryptionKey(_g, &((*(Authenticator *)src).subkey), &((*(Authenticator *)pdVal).subkey));
	    }
	    if ((*(Authenticator *)src).bit_mask & Authenticator_authorization_data_present) {
		_cpAuthorizationData(_g, &((*(Authenticator *)src).authorization_data), &((*(Authenticator *)pdVal).authorization_data));
	    }
	} break;
	case 11: {
	    pdVal = (AP_REP *)_oss_dec_const_alloc(_g, sizeof(AP_REP));
	    memcpy((AP_REP *)pdVal, (AP_REP *)src, sizeof(*(AP_REP *)pdVal));
	    {
		_cpEncryptedData(_g, &((*(AP_REP *)src).enc_part), &((*(AP_REP *)pdVal).enc_part));
	    }
	} break;
	case 12: {
	    pdVal = (EncAPRepPart *)_oss_dec_const_alloc(_g, sizeof(EncAPRepPart));
	    memcpy((EncAPRepPart *)pdVal, (EncAPRepPart *)src, sizeof(*(EncAPRepPart *)pdVal));
	    if ((*(EncAPRepPart *)src).bit_mask & EncAPRepPart_subkey_present) {
		_cpEncryptionKey(_g, &((*(EncAPRepPart *)src).subkey), &((*(EncAPRepPart *)pdVal).subkey));
	    }
	} break;
	case 13: {
	    pdVal = (KRB_SAFE *)_oss_dec_const_alloc(_g, sizeof(KRB_SAFE));
	    memcpy((KRB_SAFE *)pdVal, (KRB_SAFE *)src, sizeof(*(KRB_SAFE *)pdVal));
	    {
		{
		    _oss_cpy_unbnd_octet_ia(_g, &(((*(KRB_SAFE *)src).safe_body).user_data), &(((*(KRB_SAFE *)pdVal).safe_body).user_data), sizeof((((*(KRB_SAFE *)pdVal).safe_body).user_data).length), sizeof((((*(KRB_SAFE *)pdVal).safe_body).user_data).value[0]), (unsigned int)((char *)&(((*(KRB_SAFE *)src).safe_body).user_data).value - (char *)&(((*(KRB_SAFE *)src).safe_body).user_data)));
		}
		{
		    _cpHostAddress(_g, &(((*(KRB_SAFE *)src).safe_body).s_address), &(((*(KRB_SAFE *)pdVal).safe_body).s_address));
		}
		if (((*(KRB_SAFE *)src).safe_body).bit_mask & KRB_SAFE_BODY_r_address_present) {
		    _cpHostAddress(_g, &(((*(KRB_SAFE *)src).safe_body).r_address), &(((*(KRB_SAFE *)pdVal).safe_body).r_address));
		}
	    }
	    {
		_cpChecksum(_g, &((*(KRB_SAFE *)src).cksum), &((*(KRB_SAFE *)pdVal).cksum));
	    }
	} break;
	case 14: {
	    pdVal = (KRB_PRIV *)_oss_dec_const_alloc(_g, sizeof(KRB_PRIV));
	    memcpy((KRB_PRIV *)pdVal, (KRB_PRIV *)src, sizeof(*(KRB_PRIV *)pdVal));
	    {
		_cpEncryptedData(_g, &((*(KRB_PRIV *)src).enc_part), &((*(KRB_PRIV *)pdVal).enc_part));
	    }
	} break;
	case 15: {
	    pdVal = (EncKrbPrivPart *)_oss_dec_const_alloc(_g, sizeof(EncKrbPrivPart));
	    memcpy((EncKrbPrivPart *)pdVal, (EncKrbPrivPart *)src, sizeof(*(EncKrbPrivPart *)pdVal));
	    {
		_oss_cpy_unbnd_octet_ia(_g, &((*(EncKrbPrivPart *)src).user_data), &((*(EncKrbPrivPart *)pdVal).user_data), sizeof(((*(EncKrbPrivPart *)pdVal).user_data).length), sizeof(((*(EncKrbPrivPart *)pdVal).user_data).value[0]), (unsigned int)((char *)&((*(EncKrbPrivPart *)src).user_data).value - (char *)&((*(EncKrbPrivPart *)src).user_data)));
	    }
	    {
		_cpHostAddress(_g, &((*(EncKrbPrivPart *)src).s_address), &((*(EncKrbPrivPart *)pdVal).s_address));
	    }
	    if ((*(EncKrbPrivPart *)src).bit_mask & EncKrbPrivPart_r_address_present) {
		_cpHostAddress(_g, &((*(EncKrbPrivPart *)src).r_address), &((*(EncKrbPrivPart *)pdVal).r_address));
	    }
	} break;
	case 16: {
	    pdVal = (KRB_CRED *)_oss_dec_const_alloc(_g, sizeof(KRB_CRED));
	    memcpy((KRB_CRED *)pdVal, (KRB_CRED *)src, sizeof(*(KRB_CRED *)pdVal));
	    {
		_cp_seqof3(_g, &((*(KRB_CRED *)src).tickets), &((*(KRB_CRED *)pdVal).tickets));
	    }
	    {
		_cpEncryptedData(_g, &((*(KRB_CRED *)src).enc_part), &((*(KRB_CRED *)pdVal).enc_part));
	    }
	} break;
	case 17: {
	    pdVal = (EncKrbCredPart *)_oss_dec_const_alloc(_g, sizeof(EncKrbCredPart));
	    memcpy((EncKrbCredPart *)pdVal, (EncKrbCredPart *)src, sizeof(*(EncKrbCredPart *)pdVal));
	    {
		(*(EncKrbCredPart *)pdVal).ticket_info = NULL;
		if ((*(EncKrbCredPart *)src).ticket_info) {
		    struct _seqof5 *  s_oss_tmp_2 = (*(EncKrbCredPart *)src).ticket_info;
		    struct _seqof5 *  d_oss_tmp_2;

		    (*(EncKrbCredPart *)pdVal).ticket_info = d_oss_tmp_2 = (struct _seqof5 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof5));
		    do {
			memcpy(d_oss_tmp_2, s_oss_tmp_2, sizeof(struct _seqof5));
			{
			    {
				_cpEncryptionKey(_g, &((s_oss_tmp_2->value).key), &((d_oss_tmp_2->value).key));
			    }
			    if ((s_oss_tmp_2->value).prealm) {
				KerberosString * src_3 = &((s_oss_tmp_2->value).prealm);
				KerberosString * dst_3 = &((d_oss_tmp_2->value).prealm);
				size_t  len_3 = (size_t)sizeof(char) * (strlen(*src_3) + 1);

				*dst_3 = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_3);
				strcpy(*dst_3, *src_3);
			    }
			    if ((s_oss_tmp_2->value).bit_mask & pname_present) {
				_cpPrincipalName(_g, &((s_oss_tmp_2->value).pname), &((d_oss_tmp_2->value).pname));
			    }
			    if ((s_oss_tmp_2->value).bit_mask & flags_present) {
				_oss_cpy_unbnd_octet_ia(_g, &((s_oss_tmp_2->value).flags), &((d_oss_tmp_2->value).flags), sizeof(((d_oss_tmp_2->value).flags).length), -1L, (unsigned int)((char *)&((s_oss_tmp_2->value).flags).value - (char *)&((s_oss_tmp_2->value).flags)));
			    }
			    if ((s_oss_tmp_2->value).srealm) {
				KerberosString * src_3 = &((s_oss_tmp_2->value).srealm);
				KerberosString * dst_3 = &((d_oss_tmp_2->value).srealm);
				size_t  len_3 = (size_t)sizeof(char) * (strlen(*src_3) + 1);

				*dst_3 = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_3);
				strcpy(*dst_3, *src_3);
			    }
			    if ((s_oss_tmp_2->value).bit_mask & KrbCredInfo_sname_present) {
				_cpPrincipalName(_g, &((s_oss_tmp_2->value).sname), &((d_oss_tmp_2->value).sname));
			    }
			    if ((s_oss_tmp_2->value).bit_mask & KrbCredInfo_caddr_present) {
				_cpHostAddresses(_g, &((s_oss_tmp_2->value).caddr), &((d_oss_tmp_2->value).caddr));
			    }
			}
			if (s_oss_tmp_2->next)
			    d_oss_tmp_2->next = (struct _seqof5 *)_oss_dec_getmem_internal(_g, sizeof(struct _seqof5));
			s_oss_tmp_2 = s_oss_tmp_2->next;
			d_oss_tmp_2 = d_oss_tmp_2->next;
		    } while (s_oss_tmp_2);
		}
	    }
	    if ((*(EncKrbCredPart *)src).bit_mask & s_address_present) {
		_cpHostAddress(_g, &((*(EncKrbCredPart *)src).s_address), &((*(EncKrbCredPart *)pdVal).s_address));
	    }
	    if ((*(EncKrbCredPart *)src).bit_mask & EncKrbCredPart_r_address_present) {
		_cpHostAddress(_g, &((*(EncKrbCredPart *)src).r_address), &((*(EncKrbCredPart *)pdVal).r_address));
	    }
	} break;
	case 18: {
	    pdVal = (KRB_ERROR *)_oss_dec_const_alloc(_g, sizeof(KRB_ERROR));
	    memcpy((KRB_ERROR *)pdVal, (KRB_ERROR *)src, sizeof(*(KRB_ERROR *)pdVal));
	    if ((*(KRB_ERROR *)src).crealm) {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(KRB_ERROR *)src).crealm) + 1);

		(*(KRB_ERROR *)pdVal).crealm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(KRB_ERROR *)pdVal).crealm, (*(KRB_ERROR *)src).crealm);
	    }
	    if ((*(KRB_ERROR *)src).bit_mask & KRB_ERROR_cname_present) {
		_cpPrincipalName(_g, &((*(KRB_ERROR *)src).cname), &((*(KRB_ERROR *)pdVal).cname));
	    }
	    {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(KRB_ERROR *)src).realm) + 1);

		(*(KRB_ERROR *)pdVal).realm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(KRB_ERROR *)pdVal).realm, (*(KRB_ERROR *)src).realm);
	    }
	    {
		_cpPrincipalName(_g, &((*(KRB_ERROR *)src).sname), &((*(KRB_ERROR *)pdVal).sname));
	    }
	    if ((*(KRB_ERROR *)src).e_text) {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(KRB_ERROR *)src).e_text) + 1);

		(*(KRB_ERROR *)pdVal).e_text = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(KRB_ERROR *)pdVal).e_text, (*(KRB_ERROR *)src).e_text);
	    }
	    if ((*(KRB_ERROR *)src).bit_mask & e_data_present) {
		_oss_cpy_unbnd_octet_ia(_g, &((*(KRB_ERROR *)src).e_data), &((*(KRB_ERROR *)pdVal).e_data), sizeof(((*(KRB_ERROR *)pdVal).e_data).length), sizeof(((*(KRB_ERROR *)pdVal).e_data).value[0]), (unsigned int)((char *)&((*(KRB_ERROR *)src).e_data).value - (char *)&((*(KRB_ERROR *)src).e_data)));
	    }
	} break;
	case 19: {
	    pdVal = (METHOD_DATA *)_oss_dec_const_alloc(_g, sizeof(METHOD_DATA));
	    *(METHOD_DATA *)pdVal = NULL;
	    if (*(METHOD_DATA *)src) {
		struct METHOD_DATA *  s_oss_tmp_1 = *(METHOD_DATA *)src;
		struct METHOD_DATA *  d_oss_tmp_1;

		*(METHOD_DATA *)pdVal = d_oss_tmp_1 = (struct METHOD_DATA *)_oss_dec_getmem_internal(_g, sizeof(struct METHOD_DATA));
		do {
		    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct METHOD_DATA));
		    {
			_cpPA_DATA(_g, &(s_oss_tmp_1->value), &(d_oss_tmp_1->value));
		    }
		    if (s_oss_tmp_1->next)
			d_oss_tmp_1->next = (struct METHOD_DATA *)_oss_dec_getmem_internal(_g, sizeof(struct METHOD_DATA));
		    s_oss_tmp_1 = s_oss_tmp_1->next;
		    d_oss_tmp_1 = d_oss_tmp_1->next;
		} while (s_oss_tmp_1);
	    }
	} break;
	case 20: {
	    pdVal = (TYPED_DATA *)_oss_dec_const_alloc(_g, sizeof(TYPED_DATA));
	    *(TYPED_DATA *)pdVal = NULL;
	    if (*(TYPED_DATA *)src) {
		struct TYPED_DATA *  s_oss_tmp_1 = *(TYPED_DATA *)src;
		struct TYPED_DATA *  d_oss_tmp_1;

		*(TYPED_DATA *)pdVal = d_oss_tmp_1 = (struct TYPED_DATA *)_oss_dec_getmem_internal(_g, sizeof(struct TYPED_DATA));
		do {
		    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct TYPED_DATA));
		    {
			if ((s_oss_tmp_1->value).bit_mask & data_value_present) {
			    _oss_cpy_unbnd_octet_ia(_g, &((s_oss_tmp_1->value).data_value), &((d_oss_tmp_1->value).data_value), sizeof(((d_oss_tmp_1->value).data_value).length), sizeof(((d_oss_tmp_1->value).data_value).value[0]), (unsigned int)((char *)&((s_oss_tmp_1->value).data_value).value - (char *)&((s_oss_tmp_1->value).data_value)));
			}
		    }
		    if (s_oss_tmp_1->next)
			d_oss_tmp_1->next = (struct TYPED_DATA *)_oss_dec_getmem_internal(_g, sizeof(struct TYPED_DATA));
		    s_oss_tmp_1 = s_oss_tmp_1->next;
		    d_oss_tmp_1 = d_oss_tmp_1->next;
		} while (s_oss_tmp_1);
	    }
	} break;
	case 21: {
	    pdVal = _cpEncryptedData(_g, (EncryptedData *)src, (EncryptedData *)pdVal);
	} break;
	case 22: {
	    pdVal = (PA_ENC_TS_ENC *)_oss_dec_const_alloc(_g, sizeof(PA_ENC_TS_ENC));
	    memcpy((PA_ENC_TS_ENC *)pdVal, (PA_ENC_TS_ENC *)src, sizeof(*(PA_ENC_TS_ENC *)pdVal));
	} break;
	case 23: {
	    pdVal = (ETYPE_INFO *)_oss_dec_const_alloc(_g, sizeof(ETYPE_INFO));
	    *(ETYPE_INFO *)pdVal = NULL;
	    if (*(ETYPE_INFO *)src) {
		struct ETYPE_INFO *  s_oss_tmp_1 = *(ETYPE_INFO *)src;
		struct ETYPE_INFO *  d_oss_tmp_1;

		*(ETYPE_INFO *)pdVal = d_oss_tmp_1 = (struct ETYPE_INFO *)_oss_dec_getmem_internal(_g, sizeof(struct ETYPE_INFO));
		do {
		    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct ETYPE_INFO));
		    {
			if ((s_oss_tmp_1->value).bit_mask & salt_present) {
			    _oss_cpy_unbnd_octet_ia(_g, &((s_oss_tmp_1->value).salt), &((d_oss_tmp_1->value).salt), sizeof(((d_oss_tmp_1->value).salt).length), sizeof(((d_oss_tmp_1->value).salt).value[0]), (unsigned int)((char *)&((s_oss_tmp_1->value).salt).value - (char *)&((s_oss_tmp_1->value).salt)));
			}
		    }
		    if (s_oss_tmp_1->next)
			d_oss_tmp_1->next = (struct ETYPE_INFO *)_oss_dec_getmem_internal(_g, sizeof(struct ETYPE_INFO));
		    s_oss_tmp_1 = s_oss_tmp_1->next;
		    d_oss_tmp_1 = d_oss_tmp_1->next;
		} while (s_oss_tmp_1);
	    }
	} break;
	case 24: {
	    pdVal = (ETYPE_INFO2 *)_oss_dec_const_alloc(_g, sizeof(ETYPE_INFO2));
	    *(ETYPE_INFO2 *)pdVal = NULL;
	    if (*(ETYPE_INFO2 *)src) {
		struct ETYPE_INFO2 *  s_oss_tmp_1 = *(ETYPE_INFO2 *)src;
		struct ETYPE_INFO2 *  d_oss_tmp_1;

		*(ETYPE_INFO2 *)pdVal = d_oss_tmp_1 = (struct ETYPE_INFO2 *)_oss_dec_getmem_internal(_g, sizeof(struct ETYPE_INFO2));
		do {
		    memcpy(d_oss_tmp_1, s_oss_tmp_1, sizeof(struct ETYPE_INFO2));
		    {
			if ((s_oss_tmp_1->value).salt) {
			    size_t  len_2 = (size_t)sizeof(char) * (strlen((s_oss_tmp_1->value).salt) + 1);

			    (d_oss_tmp_1->value).salt = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_2);
			    strcpy((d_oss_tmp_1->value).salt, (s_oss_tmp_1->value).salt);
			}
			if ((s_oss_tmp_1->value).bit_mask & s2kparams_present) {
			    _oss_cpy_unbnd_octet_ia(_g, &((s_oss_tmp_1->value).s2kparams), &((d_oss_tmp_1->value).s2kparams), sizeof(((d_oss_tmp_1->value).s2kparams).length), sizeof(((d_oss_tmp_1->value).s2kparams).value[0]), (unsigned int)((char *)&((s_oss_tmp_1->value).s2kparams).value - (char *)&((s_oss_tmp_1->value).s2kparams)));
			}
		    }
		    if (s_oss_tmp_1->next)
			d_oss_tmp_1->next = (struct ETYPE_INFO2 *)_oss_dec_getmem_internal(_g, sizeof(struct ETYPE_INFO2));
		    s_oss_tmp_1 = s_oss_tmp_1->next;
		    d_oss_tmp_1 = d_oss_tmp_1->next;
		} while (s_oss_tmp_1);
	    }
	} break;
	case 25: {
	    pdVal = _cpAuthorizationData(_g, (AuthorizationData *)src, (AuthorizationData *)pdVal);
	} break;
	case 26: {
	    pdVal = (AD_KDCIssued *)_oss_dec_const_alloc(_g, sizeof(AD_KDCIssued));
	    memcpy((AD_KDCIssued *)pdVal, (AD_KDCIssued *)src, sizeof(*(AD_KDCIssued *)pdVal));
	    {
		_cpChecksum(_g, &((*(AD_KDCIssued *)src).ad_checksum), &((*(AD_KDCIssued *)pdVal).ad_checksum));
	    }
	    if ((*(AD_KDCIssued *)src).i_realm) {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(AD_KDCIssued *)src).i_realm) + 1);

		(*(AD_KDCIssued *)pdVal).i_realm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(AD_KDCIssued *)pdVal).i_realm, (*(AD_KDCIssued *)src).i_realm);
	    }
	    if ((*(AD_KDCIssued *)src).bit_mask & i_sname_present) {
		_cpPrincipalName(_g, &((*(AD_KDCIssued *)src).i_sname), &((*(AD_KDCIssued *)pdVal).i_sname));
	    }
	    {
		_cpAuthorizationData(_g, &((*(AD_KDCIssued *)src).elements), &((*(AD_KDCIssued *)pdVal).elements));
	    }
	} break;
	case 27: {
	    pdVal = (AD_AND_OR *)_oss_dec_const_alloc(_g, sizeof(AD_AND_OR));
	    memcpy((AD_AND_OR *)pdVal, (AD_AND_OR *)src, sizeof(*(AD_AND_OR *)pdVal));
	    {
		_cpAuthorizationData(_g, &((*(AD_AND_OR *)src).elements), &((*(AD_AND_OR *)pdVal).elements));
	    }
	} break;
	case 28: {
	    pdVal = _cpAuthorizationData(_g, (AuthorizationData *)src, (AuthorizationData *)pdVal);
	} break;
	case 29: {
	    pdVal = (KERB_PA_PAC_REQUEST *)_oss_dec_const_alloc(_g, sizeof(KERB_PA_PAC_REQUEST));
	    memcpy((KERB_PA_PAC_REQUEST *)pdVal, (KERB_PA_PAC_REQUEST *)src, sizeof(*(KERB_PA_PAC_REQUEST *)pdVal));
	} break;
	case 30: {
	    pdVal = (ChangePasswdData *)_oss_dec_const_alloc(_g, sizeof(ChangePasswdData));
	    memcpy((ChangePasswdData *)pdVal, (ChangePasswdData *)src, sizeof(*(ChangePasswdData *)pdVal));
	    {
		_oss_cpy_unbnd_octet_ia(_g, &((*(ChangePasswdData *)src).newpasswd), &((*(ChangePasswdData *)pdVal).newpasswd), sizeof(((*(ChangePasswdData *)pdVal).newpasswd).length), sizeof(((*(ChangePasswdData *)pdVal).newpasswd).value[0]), (unsigned int)((char *)&((*(ChangePasswdData *)src).newpasswd).value - (char *)&((*(ChangePasswdData *)src).newpasswd)));
	    }
	    if ((*(ChangePasswdData *)src).bit_mask & targname_present) {
		_cpPrincipalName(_g, &((*(ChangePasswdData *)src).targname), &((*(ChangePasswdData *)pdVal).targname));
	    }
	    if ((*(ChangePasswdData *)src).targrealm) {
		size_t  len_1 = (size_t)sizeof(char) * (strlen((*(ChangePasswdData *)src).targrealm) + 1);

		(*(ChangePasswdData *)pdVal).targrealm = (KerberosString)_oss_dec_getmem_internal(_g, (long)len_1);
		strcpy((*(ChangePasswdData *)pdVal).targrealm, (*(ChangePasswdData *)src).targrealm);
	    }
	} break;
	default:
	    res = PDU_RANGE;
    }
    *pdst = pdVal;
    return res;
}
#undef _oss_c
#endif /* OSS_COPY_VALUE */

#ifdef OSS_COMPARE_VALUE
static int _cmTicket(OssGlobal * _g, Ticket * _odata, Ticket * _cdata)
{
    int _res = 0;

    if ((*_cdata).tkt_vno != (*_odata).tkt_vno)
	return 1;
    if (strcmp((*_cdata).realm, (*_odata).realm))
	return 1;
    _res = _cmPrincipalName(_g, &((*_odata).sname), &((*_cdata).sname));
    if (_res)
	return _res;
    _res = _cmEncryptedData(_g, &((*_odata).enc_part), &((*_cdata).enc_part));
    if (_res)
	return _res;

    return _res;
}


static int _cm_seqof1(OssGlobal * _g, _seqof1 * _odata, _seqof1 * _cdata)
{
    int _res = 0;

    {
	struct _seqof1 *  _s_oss_tmp_1 = *_odata;
	struct _seqof1 *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    if (strcmp(_d_oss_tmp_1->value, _s_oss_tmp_1->value))
		return 1;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


static int _cmPrincipalName(OssGlobal * _g, PrincipalName * _odata, PrincipalName * _cdata)
{
    int _res = 0;

    if ((*_cdata).name_type != (*_odata).name_type)
	return 1;
    _res = _cm_seqof1(_g, &((*_odata).name_string), &((*_cdata).name_string));
    if (_res)
	return _res;

    return _res;
}


static int _cmHostAddress(OssGlobal * _g, HostAddress * _odata, HostAddress * _cdata)
{
    int _res = 0;

    if ((*_cdata).addr_type != (*_odata).addr_type)
	return 1;
    if (_oss_cmp_unbnd_octet_ia(&((*_odata).address), &((*_cdata).address), sizeof(((*_cdata).address).length), sizeof(((*_cdata).address).value[0]), (unsigned int)((char *)&((*_odata).address).value - (char *)&((*_odata).address))))
	return 1;

    return _res;
}


static int _cmHostAddresses(OssGlobal * _g, HostAddresses * _odata, HostAddresses * _cdata)
{
    int _res = 0;

    {
	struct HostAddresses *  _s_oss_tmp_1 = *_odata;
	struct HostAddresses *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    _res = _cmHostAddress(_g, &(_s_oss_tmp_1->value), &(_d_oss_tmp_1->value));
	    if (_res)
		return _res;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


static int _cmAuthorizationData(OssGlobal * _g, AuthorizationData * _odata, AuthorizationData * _cdata)
{
    int _res = 0;

    {
	struct AuthorizationData *  _s_oss_tmp_1 = *_odata;
	struct AuthorizationData *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    if ((_d_oss_tmp_1->value).ad_type != (_s_oss_tmp_1->value).ad_type)
		return 1;
	    if (_oss_cmp_unbnd_octet_ia(&((_s_oss_tmp_1->value).ad_data), &((_d_oss_tmp_1->value).ad_data), sizeof(((_d_oss_tmp_1->value).ad_data).length), sizeof(((_d_oss_tmp_1->value).ad_data).value[0]), (unsigned int)((char *)&((_s_oss_tmp_1->value).ad_data).value - (char *)&((_s_oss_tmp_1->value).ad_data))))
		return 1;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


static int _cmPA_DATA(OssGlobal * _g, PA_DATA * _odata, PA_DATA * _cdata)
{
    int _res = 0;

    if ((*_cdata).padata_type != (*_odata).padata_type)
	return 1;
    if (_oss_cmp_unbnd_octet_ia(&((*_odata).padata_value), &((*_cdata).padata_value), sizeof(((*_cdata).padata_value).length), sizeof(((*_cdata).padata_value).value[0]), (unsigned int)((char *)&((*_odata).padata_value).value - (char *)&((*_odata).padata_value))))
	return 1;

    return _res;
}


static int _cmEncryptedData(OssGlobal * _g, EncryptedData * _odata, EncryptedData * _cdata)
{
    int _res = 0;

    if ((*_cdata).etype != (*_odata).etype)
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & kvno_present)
	return 1;
    if ((*_odata).bit_mask & kvno_present) {
	if ((*_cdata).kvno != (*_odata).kvno)
	    return 1;
    }
    if (_oss_cmp_unbnd_octet_ia(&((*_odata).cipher), &((*_cdata).cipher), sizeof(((*_cdata).cipher).length), sizeof(((*_cdata).cipher).value[0]), (unsigned int)((char *)&((*_odata).cipher).value - (char *)&((*_odata).cipher))))
	return 1;

    return _res;
}


static int _cmEncryptionKey(OssGlobal * _g, EncryptionKey * _odata, EncryptionKey * _cdata)
{
    int _res = 0;

    if ((*_cdata).keytype != (*_odata).keytype)
	return 1;
    if (_oss_cmp_unbnd_octet_ia(&((*_odata).keyvalue), &((*_cdata).keyvalue), sizeof(((*_cdata).keyvalue).length), sizeof(((*_cdata).keyvalue).value[0]), (unsigned int)((char *)&((*_odata).keyvalue).value - (char *)&((*_odata).keyvalue))))
	return 1;

    return _res;
}


static int _cmChecksum(OssGlobal * _g, Checksum * _odata, Checksum * _cdata)
{
    int _res = 0;

    if ((*_cdata).cksumtype != (*_odata).cksumtype)
	return 1;
    if (_oss_cmp_unbnd_octet_ia(&((*_odata).checksum), &((*_cdata).checksum), sizeof(((*_cdata).checksum).length), sizeof(((*_cdata).checksum).value[0]), (unsigned int)((char *)&((*_odata).checksum).value - (char *)&((*_odata).checksum))))
	return 1;

    return _res;
}


static int _cm_seqof2(OssGlobal * _g, _seqof2 * _odata, _seqof2 * _cdata)
{
    int _res = 0;

    {
	struct _seqof2 *  _s_oss_tmp_1 = *_odata;
	struct _seqof2 *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    if (_d_oss_tmp_1->value != _s_oss_tmp_1->value)
		return 1;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


static int _cm_seqof3(OssGlobal * _g, _seqof3 * _odata, _seqof3 * _cdata)
{
    int _res = 0;

    {
	struct _seqof3 *  _s_oss_tmp_1 = *_odata;
	struct _seqof3 *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    _res = _cmTicket(_g, &(_s_oss_tmp_1->value), &(_d_oss_tmp_1->value));
	    if (_res)
		return _res;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


static int _cmKDC_REQ_BODY(OssGlobal * _g, KDC_REQ_BODY * _odata, KDC_REQ_BODY * _cdata)
{
    int _res = 0;

    if (_oss_cmp_arrbits(((*_odata).kdc_options).value, ((*_cdata).kdc_options).value, ((*_odata).kdc_options).length, ((*_cdata).kdc_options).length))
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & KDC_REQ_BODY_cname_present)
	return 1;
    if ((*_odata).bit_mask & KDC_REQ_BODY_cname_present) {
	_res = _cmPrincipalName(_g, &((*_odata).cname), &((*_cdata).cname));
	if (_res)
	    return _res;
    }
    if (strcmp((*_cdata).realm, (*_odata).realm))
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & KDC_REQ_BODY_sname_present)
	return 1;
    if ((*_odata).bit_mask & KDC_REQ_BODY_sname_present) {
	_res = _cmPrincipalName(_g, &((*_odata).sname), &((*_cdata).sname));
	if (_res)
	    return _res;
    }
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & from_present)
	return 1;
    if ((*_odata).bit_mask & from_present) {
	if (memcmp(&((*_cdata).from), &((*_odata).from), sizeof(short)*8 + sizeof(ossBoolean)))
	    return 1;
    }
    if (memcmp(&((*_cdata).till), &((*_odata).till), sizeof(short)*8 + sizeof(ossBoolean)))
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & rtime_present)
	return 1;
    if ((*_odata).bit_mask & rtime_present) {
	if (memcmp(&((*_cdata).rtime), &((*_odata).rtime), sizeof(short)*8 + sizeof(ossBoolean)))
	    return 1;
    }
    if ((*_cdata).nonce != (*_odata).nonce)
	return 1;
    _res = _cm_seqof2(_g, &((*_odata).etype), &((*_cdata).etype));
    if (_res)
	return _res;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & addresses_present)
	return 1;
    if ((*_odata).bit_mask & addresses_present) {
	_res = _cmHostAddresses(_g, &((*_odata).addresses), &((*_cdata).addresses));
	if (_res)
	    return _res;
    }
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & enc_authorization_data_present)
	return 1;
    if ((*_odata).bit_mask & enc_authorization_data_present) {
	_res = _cmEncryptedData(_g, &((*_odata).enc_authorization_data), &((*_cdata).enc_authorization_data));
	if (_res)
	    return _res;
    }
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & additional_tickets_present)
	return 1;
    if ((*_odata).bit_mask & additional_tickets_present) {
	_res = _cm_seqof3(_g, &((*_odata).additional_tickets), &((*_cdata).additional_tickets));
	if (_res)
	    return _res;
    }

    return _res;
}


static int _cm_seqof4(OssGlobal * _g, _seqof4 * _odata, _seqof4 * _cdata)
{
    int _res = 0;

    {
	struct _seqof4 *  _s_oss_tmp_1 = *_odata;
	struct _seqof4 *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    _res = _cmPA_DATA(_g, &(_s_oss_tmp_1->value), &(_d_oss_tmp_1->value));
	    if (_res)
		return _res;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


static int _cmKDC_REQ(OssGlobal * _g, KDC_REQ * _odata, KDC_REQ * _cdata)
{
    int _res = 0;

    if ((*_cdata).pvno != (*_odata).pvno)
	return 1;
    if ((*_cdata).msg_type != (*_odata).msg_type)
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & KDC_REQ_padata_present)
	return 1;
    if ((*_odata).bit_mask & KDC_REQ_padata_present) {
	_res = _cm_seqof4(_g, &((*_odata).padata), &((*_cdata).padata));
	if (_res)
	    return _res;
    }
    _res = _cmKDC_REQ_BODY(_g, &((*_odata).req_body), &((*_cdata).req_body));
    if (_res)
	return _res;

    return _res;
}


static int _cmKDC_REP(OssGlobal * _g, KDC_REP * _odata, KDC_REP * _cdata)
{
    int _res = 0;

    if ((*_cdata).pvno != (*_odata).pvno)
	return 1;
    if ((*_cdata).msg_type != (*_odata).msg_type)
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & KDC_REP_padata_present)
	return 1;
    if ((*_odata).bit_mask & KDC_REP_padata_present) {
	_res = _cm_seqof4(_g, &((*_odata).padata), &((*_cdata).padata));
	if (_res)
	    return _res;
    }
    if (strcmp((*_cdata).crealm, (*_odata).crealm))
	return 1;
    _res = _cmPrincipalName(_g, &((*_odata).cname), &((*_cdata).cname));
    if (_res)
	return _res;
    _res = _cmTicket(_g, &((*_odata).ticket), &((*_cdata).ticket));
    if (_res)
	return _res;
    _res = _cmEncryptedData(_g, &((*_odata).enc_part), &((*_cdata).enc_part));
    if (_res)
	return _res;

    return _res;
}


static int _cmEncKDCRepPart(OssGlobal * _g, EncKDCRepPart * _odata, EncKDCRepPart * _cdata)
{
    int _res = 0;

    _res = _cmEncryptionKey(_g, &((*_odata).key), &((*_cdata).key));
    if (_res)
	return _res;
    _res = _cmLastReq(_g, &((*_odata).last_req), &((*_cdata).last_req));
    if (_res)
	return _res;
    if ((*_cdata).nonce != (*_odata).nonce)
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & key_expiration_present)
	return 1;
    if ((*_odata).bit_mask & key_expiration_present) {
	if (memcmp(&((*_cdata).key_expiration), &((*_odata).key_expiration), sizeof(short)*8 + sizeof(ossBoolean)))
	    return 1;
    }
    if (_oss_cmp_arrbits(((*_odata).flags).value, ((*_cdata).flags).value, ((*_odata).flags).length, ((*_cdata).flags).length))
	return 1;
    if (memcmp(&((*_cdata).authtime), &((*_odata).authtime), sizeof(short)*8 + sizeof(ossBoolean)))
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & EncKDCRepPart_starttime_present)
	return 1;
    if ((*_odata).bit_mask & EncKDCRepPart_starttime_present) {
	if (memcmp(&((*_cdata).starttime), &((*_odata).starttime), sizeof(short)*8 + sizeof(ossBoolean)))
	    return 1;
    }
    if (memcmp(&((*_cdata).endtime), &((*_odata).endtime), sizeof(short)*8 + sizeof(ossBoolean)))
	return 1;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & EncKDCRepPart_renew_till_present)
	return 1;
    if ((*_odata).bit_mask & EncKDCRepPart_renew_till_present) {
	if (memcmp(&((*_cdata).renew_till), &((*_odata).renew_till), sizeof(short)*8 + sizeof(ossBoolean)))
	    return 1;
    }
    if (strcmp((*_cdata).srealm, (*_odata).srealm))
	return 1;
    _res = _cmPrincipalName(_g, &((*_odata).sname), &((*_cdata).sname));
    if (_res)
	return _res;
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & EncKDCRepPart_caddr_present)
	return 1;
    if ((*_odata).bit_mask & EncKDCRepPart_caddr_present) {
	_res = _cmHostAddresses(_g, &((*_odata).caddr), &((*_cdata).caddr));
	if (_res)
	    return _res;
    }
    if (((*_odata).bit_mask ^ (*_cdata).bit_mask) & encrypted_pa_data_present)
	return 1;
    if ((*_odata).bit_mask & encrypted_pa_data_present) {
	_res = _cm_seqof4(_g, &((*_odata).encrypted_pa_data), &((*_cdata).encrypted_pa_data));
	if (_res)
	    return _res;
    }

    return _res;
}


static int _cmLastReq(OssGlobal * _g, LastReq * _odata, LastReq * _cdata)
{
    int _res = 0;

    {
	struct LastReq *  _s_oss_tmp_1 = *_odata;
	struct LastReq *  _d_oss_tmp_1 = *_cdata;

	while (_s_oss_tmp_1 && _d_oss_tmp_1) {
	    if ((_d_oss_tmp_1->value).lr_type != (_s_oss_tmp_1->value).lr_type)
		return 1;
	    if (memcmp(&((_d_oss_tmp_1->value).lr_value), &((_s_oss_tmp_1->value).lr_value), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    _s_oss_tmp_1 = _s_oss_tmp_1->next;
	    _d_oss_tmp_1 = _d_oss_tmp_1->next;
	}
	if (_s_oss_tmp_1 || _d_oss_tmp_1)
	    return 1;
    }

    return _res;
}


int DLL_ENTRY_FDEF _CMKerberosV5Spec2(struct ossGlobal * _g, int _pduNum, void * _odata, void * _cdata)
{
    int _res = 0;

    if (_pduNum <= 0 || _pduNum > 31)
	return PDU_RANGE;
    switch (_pduNum) {
	case 1: {
	    _res = _cmTicket(_g, (Ticket *)_odata, (Ticket *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 2: {
	    if (_oss_cmp_arrbits(((*(EncTicketPart *)_odata).flags).value, ((*(EncTicketPart *)_cdata).flags).value, ((*(EncTicketPart *)_odata).flags).length, ((*(EncTicketPart *)_cdata).flags).length))
		return 1;
	    _res = _cmEncryptionKey(_g, &((*(EncTicketPart *)_odata).key), &((*(EncTicketPart *)_cdata).key));
	    if (_res)
		return _res;
	    if (strcmp((*(EncTicketPart *)_cdata).crealm, (*(EncTicketPart *)_odata).crealm))
		return 1;
	    _res = _cmPrincipalName(_g, &((*(EncTicketPart *)_odata).cname), &((*(EncTicketPart *)_cdata).cname));
	    if (_res)
		return _res;
	    if (((*(EncTicketPart *)_cdata).transited).tr_type != ((*(EncTicketPart *)_odata).transited).tr_type)
		return 1;
	    if (_oss_cmp_unbnd_octet_ia(&(((*(EncTicketPart *)_odata).transited).contents), &(((*(EncTicketPart *)_cdata).transited).contents), sizeof((((*(EncTicketPart *)_cdata).transited).contents).length), sizeof((((*(EncTicketPart *)_cdata).transited).contents).value[0]), (unsigned int)((char *)&(((*(EncTicketPart *)_odata).transited).contents).value - (char *)&(((*(EncTicketPart *)_odata).transited).contents))))
		return 1;
	    if (memcmp(&((*(EncTicketPart *)_cdata).authtime), &((*(EncTicketPart *)_odata).authtime), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    if (((*(EncTicketPart *)_odata).bit_mask ^ (*(EncTicketPart *)_cdata).bit_mask) & EncTicketPart_starttime_present)
		return 1;
	    if ((*(EncTicketPart *)_odata).bit_mask & EncTicketPart_starttime_present) {
		if (memcmp(&((*(EncTicketPart *)_cdata).starttime), &((*(EncTicketPart *)_odata).starttime), sizeof(short)*8 + sizeof(ossBoolean)))
		    return 1;
	    }
	    if (memcmp(&((*(EncTicketPart *)_cdata).endtime), &((*(EncTicketPart *)_odata).endtime), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    if (((*(EncTicketPart *)_odata).bit_mask ^ (*(EncTicketPart *)_cdata).bit_mask) & EncTicketPart_renew_till_present)
		return 1;
	    if ((*(EncTicketPart *)_odata).bit_mask & EncTicketPart_renew_till_present) {
		if (memcmp(&((*(EncTicketPart *)_cdata).renew_till), &((*(EncTicketPart *)_odata).renew_till), sizeof(short)*8 + sizeof(ossBoolean)))
		    return 1;
	    }
	    if (((*(EncTicketPart *)_odata).bit_mask ^ (*(EncTicketPart *)_cdata).bit_mask) & EncTicketPart_caddr_present)
		return 1;
	    if ((*(EncTicketPart *)_odata).bit_mask & EncTicketPart_caddr_present) {
		_res = _cmHostAddresses(_g, &((*(EncTicketPart *)_odata).caddr), &((*(EncTicketPart *)_cdata).caddr));
		if (_res)
		    return _res;
	    }
	    if (((*(EncTicketPart *)_odata).bit_mask ^ (*(EncTicketPart *)_cdata).bit_mask) & EncTicketPart_authorization_data_present)
		return 1;
	    if ((*(EncTicketPart *)_odata).bit_mask & EncTicketPart_authorization_data_present) {
		_res = _cmAuthorizationData(_g, &((*(EncTicketPart *)_odata).authorization_data), &((*(EncTicketPart *)_cdata).authorization_data));
		if (_res)
		    return _res;
	    }
	} break;
	case 3: {
	    _res = _cmKDC_REQ(_g, (KDC_REQ *)_odata, (KDC_REQ *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 4: {
	    _res = _cmKDC_REQ(_g, (KDC_REQ *)_odata, (KDC_REQ *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 5: {
	    _res = _cmKDC_REP(_g, (KDC_REP *)_odata, (KDC_REP *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 6: {
	    _res = _cmKDC_REP(_g, (KDC_REP *)_odata, (KDC_REP *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 7: {
	    _res = _cmEncKDCRepPart(_g, (EncKDCRepPart *)_odata, (EncKDCRepPart *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 8: {
	    _res = _cmEncKDCRepPart(_g, (EncKDCRepPart *)_odata, (EncKDCRepPart *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 9: {
	    if ((*(AP_REQ *)_cdata).pvno != (*(AP_REQ *)_odata).pvno)
		return 1;
	    if ((*(AP_REQ *)_cdata).msg_type != (*(AP_REQ *)_odata).msg_type)
		return 1;
	    if (_oss_cmp_arrbits(((*(AP_REQ *)_odata).ap_options).value, ((*(AP_REQ *)_cdata).ap_options).value, ((*(AP_REQ *)_odata).ap_options).length, ((*(AP_REQ *)_cdata).ap_options).length))
		return 1;
	    _res = _cmTicket(_g, &((*(AP_REQ *)_odata).ticket), &((*(AP_REQ *)_cdata).ticket));
	    if (_res)
		return _res;
	    _res = _cmEncryptedData(_g, &((*(AP_REQ *)_odata).authenticator), &((*(AP_REQ *)_cdata).authenticator));
	    if (_res)
		return _res;
	} break;
	case 10: {
	    if ((*(Authenticator *)_cdata).authenticator_vno != (*(Authenticator *)_odata).authenticator_vno)
		return 1;
	    if (strcmp((*(Authenticator *)_cdata).crealm, (*(Authenticator *)_odata).crealm))
		return 1;
	    _res = _cmPrincipalName(_g, &((*(Authenticator *)_odata).cname), &((*(Authenticator *)_cdata).cname));
	    if (_res)
		return _res;
	    if (((*(Authenticator *)_odata).bit_mask ^ (*(Authenticator *)_cdata).bit_mask) & cksum_present)
		return 1;
	    if ((*(Authenticator *)_odata).bit_mask & cksum_present) {
		_res = _cmChecksum(_g, &((*(Authenticator *)_odata).cksum), &((*(Authenticator *)_cdata).cksum));
		if (_res)
		    return _res;
	    }
	    if ((*(Authenticator *)_cdata).cusec != (*(Authenticator *)_odata).cusec)
		return 1;
	    if (memcmp(&((*(Authenticator *)_cdata).ctime), &((*(Authenticator *)_odata).ctime), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    if (((*(Authenticator *)_odata).bit_mask ^ (*(Authenticator *)_cdata).bit_mask) & Authenticator_subkey_present)
		return 1;
	    if ((*(Authenticator *)_odata).bit_mask & Authenticator_subkey_present) {
		_res = _cmEncryptionKey(_g, &((*(Authenticator *)_odata).subkey), &((*(Authenticator *)_cdata).subkey));
		if (_res)
		    return _res;
	    }
	    if (((*(Authenticator *)_odata).bit_mask ^ (*(Authenticator *)_cdata).bit_mask) & Authenticator_seq_number_present)
		return 1;
	    if ((*(Authenticator *)_odata).bit_mask & Authenticator_seq_number_present) {
		if ((*(Authenticator *)_cdata).seq_number != (*(Authenticator *)_odata).seq_number)
		    return 1;
	    }
	    if (((*(Authenticator *)_odata).bit_mask ^ (*(Authenticator *)_cdata).bit_mask) & Authenticator_authorization_data_present)
		return 1;
	    if ((*(Authenticator *)_odata).bit_mask & Authenticator_authorization_data_present) {
		_res = _cmAuthorizationData(_g, &((*(Authenticator *)_odata).authorization_data), &((*(Authenticator *)_cdata).authorization_data));
		if (_res)
		    return _res;
	    }
	} break;
	case 11: {
	    if ((*(AP_REP *)_cdata).pvno != (*(AP_REP *)_odata).pvno)
		return 1;
	    if ((*(AP_REP *)_cdata).msg_type != (*(AP_REP *)_odata).msg_type)
		return 1;
	    _res = _cmEncryptedData(_g, &((*(AP_REP *)_odata).enc_part), &((*(AP_REP *)_cdata).enc_part));
	    if (_res)
		return _res;
	} break;
	case 12: {
	    if (memcmp(&((*(EncAPRepPart *)_cdata).ctime), &((*(EncAPRepPart *)_odata).ctime), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    if ((*(EncAPRepPart *)_cdata).cusec != (*(EncAPRepPart *)_odata).cusec)
		return 1;
	    if (((*(EncAPRepPart *)_odata).bit_mask ^ (*(EncAPRepPart *)_cdata).bit_mask) & EncAPRepPart_subkey_present)
		return 1;
	    if ((*(EncAPRepPart *)_odata).bit_mask & EncAPRepPart_subkey_present) {
		_res = _cmEncryptionKey(_g, &((*(EncAPRepPart *)_odata).subkey), &((*(EncAPRepPart *)_cdata).subkey));
		if (_res)
		    return _res;
	    }
	    if (((*(EncAPRepPart *)_odata).bit_mask ^ (*(EncAPRepPart *)_cdata).bit_mask) & EncAPRepPart_seq_number_present)
		return 1;
	    if ((*(EncAPRepPart *)_odata).bit_mask & EncAPRepPart_seq_number_present) {
		if ((*(EncAPRepPart *)_cdata).seq_number != (*(EncAPRepPart *)_odata).seq_number)
		    return 1;
	    }
	} break;
	case 13: {
	    if ((*(KRB_SAFE *)_cdata).pvno != (*(KRB_SAFE *)_odata).pvno)
		return 1;
	    if ((*(KRB_SAFE *)_cdata).msg_type != (*(KRB_SAFE *)_odata).msg_type)
		return 1;
	    if (_oss_cmp_unbnd_octet_ia(&(((*(KRB_SAFE *)_odata).safe_body).user_data), &(((*(KRB_SAFE *)_cdata).safe_body).user_data), sizeof((((*(KRB_SAFE *)_cdata).safe_body).user_data).length), sizeof((((*(KRB_SAFE *)_cdata).safe_body).user_data).value[0]), (unsigned int)((char *)&(((*(KRB_SAFE *)_odata).safe_body).user_data).value - (char *)&(((*(KRB_SAFE *)_odata).safe_body).user_data))))
		return 1;
	    if ((((*(KRB_SAFE *)_odata).safe_body).bit_mask ^ ((*(KRB_SAFE *)_cdata).safe_body).bit_mask) & KRB_SAFE_BODY_timestamp_present)
		return 1;
	    if (((*(KRB_SAFE *)_odata).safe_body).bit_mask & KRB_SAFE_BODY_timestamp_present) {
		if (memcmp(&(((*(KRB_SAFE *)_cdata).safe_body).timestamp), &(((*(KRB_SAFE *)_odata).safe_body).timestamp), sizeof(short)*8 + sizeof(ossBoolean)))
		    return 1;
	    }
	    if ((((*(KRB_SAFE *)_odata).safe_body).bit_mask ^ ((*(KRB_SAFE *)_cdata).safe_body).bit_mask) & KRB_SAFE_BODY_usec_present)
		return 1;
	    if (((*(KRB_SAFE *)_odata).safe_body).bit_mask & KRB_SAFE_BODY_usec_present) {
		if (((*(KRB_SAFE *)_cdata).safe_body).usec != ((*(KRB_SAFE *)_odata).safe_body).usec)
		    return 1;
	    }
	    if ((((*(KRB_SAFE *)_odata).safe_body).bit_mask ^ ((*(KRB_SAFE *)_cdata).safe_body).bit_mask) & KRB_SAFE_BODY_seq_number_present)
		return 1;
	    if (((*(KRB_SAFE *)_odata).safe_body).bit_mask & KRB_SAFE_BODY_seq_number_present) {
		if (((*(KRB_SAFE *)_cdata).safe_body).seq_number != ((*(KRB_SAFE *)_odata).safe_body).seq_number)
		    return 1;
	    }
	    _res = _cmHostAddress(_g, &(((*(KRB_SAFE *)_odata).safe_body).s_address), &(((*(KRB_SAFE *)_cdata).safe_body).s_address));
	    if (_res)
		return _res;
	    if ((((*(KRB_SAFE *)_odata).safe_body).bit_mask ^ ((*(KRB_SAFE *)_cdata).safe_body).bit_mask) & KRB_SAFE_BODY_r_address_present)
		return 1;
	    if (((*(KRB_SAFE *)_odata).safe_body).bit_mask & KRB_SAFE_BODY_r_address_present) {
		_res = _cmHostAddress(_g, &(((*(KRB_SAFE *)_odata).safe_body).r_address), &(((*(KRB_SAFE *)_cdata).safe_body).r_address));
		if (_res)
		    return _res;
	    }
	    _res = _cmChecksum(_g, &((*(KRB_SAFE *)_odata).cksum), &((*(KRB_SAFE *)_cdata).cksum));
	    if (_res)
		return _res;
	} break;
	case 14: {
	    if ((*(KRB_PRIV *)_cdata).pvno != (*(KRB_PRIV *)_odata).pvno)
		return 1;
	    if ((*(KRB_PRIV *)_cdata).msg_type != (*(KRB_PRIV *)_odata).msg_type)
		return 1;
	    _res = _cmEncryptedData(_g, &((*(KRB_PRIV *)_odata).enc_part), &((*(KRB_PRIV *)_cdata).enc_part));
	    if (_res)
		return _res;
	} break;
	case 15: {
	    if (_oss_cmp_unbnd_octet_ia(&((*(EncKrbPrivPart *)_odata).user_data), &((*(EncKrbPrivPart *)_cdata).user_data), sizeof(((*(EncKrbPrivPart *)_cdata).user_data).length), sizeof(((*(EncKrbPrivPart *)_cdata).user_data).value[0]), (unsigned int)((char *)&((*(EncKrbPrivPart *)_odata).user_data).value - (char *)&((*(EncKrbPrivPart *)_odata).user_data))))
		return 1;
	    if (((*(EncKrbPrivPart *)_odata).bit_mask ^ (*(EncKrbPrivPart *)_cdata).bit_mask) & EncKrbPrivPart_timestamp_present)
		return 1;
	    if ((*(EncKrbPrivPart *)_odata).bit_mask & EncKrbPrivPart_timestamp_present) {
		if (memcmp(&((*(EncKrbPrivPart *)_cdata).timestamp), &((*(EncKrbPrivPart *)_odata).timestamp), sizeof(short)*8 + sizeof(ossBoolean)))
		    return 1;
	    }
	    if (((*(EncKrbPrivPart *)_odata).bit_mask ^ (*(EncKrbPrivPart *)_cdata).bit_mask) & EncKrbPrivPart_usec_present)
		return 1;
	    if ((*(EncKrbPrivPart *)_odata).bit_mask & EncKrbPrivPart_usec_present) {
		if ((*(EncKrbPrivPart *)_cdata).usec != (*(EncKrbPrivPart *)_odata).usec)
		    return 1;
	    }
	    if (((*(EncKrbPrivPart *)_odata).bit_mask ^ (*(EncKrbPrivPart *)_cdata).bit_mask) & EncKrbPrivPart_seq_number_present)
		return 1;
	    if ((*(EncKrbPrivPart *)_odata).bit_mask & EncKrbPrivPart_seq_number_present) {
		if ((*(EncKrbPrivPart *)_cdata).seq_number != (*(EncKrbPrivPart *)_odata).seq_number)
		    return 1;
	    }
	    _res = _cmHostAddress(_g, &((*(EncKrbPrivPart *)_odata).s_address), &((*(EncKrbPrivPart *)_cdata).s_address));
	    if (_res)
		return _res;
	    if (((*(EncKrbPrivPart *)_odata).bit_mask ^ (*(EncKrbPrivPart *)_cdata).bit_mask) & EncKrbPrivPart_r_address_present)
		return 1;
	    if ((*(EncKrbPrivPart *)_odata).bit_mask & EncKrbPrivPart_r_address_present) {
		_res = _cmHostAddress(_g, &((*(EncKrbPrivPart *)_odata).r_address), &((*(EncKrbPrivPart *)_cdata).r_address));
		if (_res)
		    return _res;
	    }
	} break;
	case 16: {
	    if ((*(KRB_CRED *)_cdata).pvno != (*(KRB_CRED *)_odata).pvno)
		return 1;
	    if ((*(KRB_CRED *)_cdata).msg_type != (*(KRB_CRED *)_odata).msg_type)
		return 1;
	    _res = _cm_seqof3(_g, &((*(KRB_CRED *)_odata).tickets), &((*(KRB_CRED *)_cdata).tickets));
	    if (_res)
		return _res;
	    _res = _cmEncryptedData(_g, &((*(KRB_CRED *)_odata).enc_part), &((*(KRB_CRED *)_cdata).enc_part));
	    if (_res)
		return _res;
	} break;
	case 17: {
	    {
		struct _seqof5 *  _s_oss_tmp_2 = (*(EncKrbCredPart *)_odata).ticket_info;
		struct _seqof5 *  _d_oss_tmp_2 = (*(EncKrbCredPart *)_cdata).ticket_info;

		while (_s_oss_tmp_2 && _d_oss_tmp_2) {
		    _res = _cmEncryptionKey(_g, &((_s_oss_tmp_2->value).key), &((_d_oss_tmp_2->value).key));
		    if (_res)
			return _res;
		    if (!(_s_oss_tmp_2->value).prealm != !(_d_oss_tmp_2->value).prealm)
			return 1;
		    if ((_s_oss_tmp_2->value).prealm) {
			if (strcmp((_d_oss_tmp_2->value).prealm, (_s_oss_tmp_2->value).prealm))
			    return 1;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & pname_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & pname_present) {
			_res = _cmPrincipalName(_g, &((_s_oss_tmp_2->value).pname), &((_d_oss_tmp_2->value).pname));
			if (_res)
			    return _res;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & flags_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & flags_present) {
			if (_oss_cmp_arrbits(((_s_oss_tmp_2->value).flags).value, ((_d_oss_tmp_2->value).flags).value, ((_s_oss_tmp_2->value).flags).length, ((_d_oss_tmp_2->value).flags).length))
			    return 1;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & authtime_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & authtime_present) {
			if (memcmp(&((_d_oss_tmp_2->value).authtime), &((_s_oss_tmp_2->value).authtime), sizeof(short)*8 + sizeof(ossBoolean)))
			    return 1;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & KrbCredInfo_starttime_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & KrbCredInfo_starttime_present) {
			if (memcmp(&((_d_oss_tmp_2->value).starttime), &((_s_oss_tmp_2->value).starttime), sizeof(short)*8 + sizeof(ossBoolean)))
			    return 1;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & endtime_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & endtime_present) {
			if (memcmp(&((_d_oss_tmp_2->value).endtime), &((_s_oss_tmp_2->value).endtime), sizeof(short)*8 + sizeof(ossBoolean)))
			    return 1;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & KrbCredInfo_renew_till_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & KrbCredInfo_renew_till_present) {
			if (memcmp(&((_d_oss_tmp_2->value).renew_till), &((_s_oss_tmp_2->value).renew_till), sizeof(short)*8 + sizeof(ossBoolean)))
			    return 1;
		    }
		    if (!(_s_oss_tmp_2->value).srealm != !(_d_oss_tmp_2->value).srealm)
			return 1;
		    if ((_s_oss_tmp_2->value).srealm) {
			if (strcmp((_d_oss_tmp_2->value).srealm, (_s_oss_tmp_2->value).srealm))
			    return 1;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & KrbCredInfo_sname_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & KrbCredInfo_sname_present) {
			_res = _cmPrincipalName(_g, &((_s_oss_tmp_2->value).sname), &((_d_oss_tmp_2->value).sname));
			if (_res)
			    return _res;
		    }
		    if (((_s_oss_tmp_2->value).bit_mask ^ (_d_oss_tmp_2->value).bit_mask) & KrbCredInfo_caddr_present)
			return 1;
		    if ((_s_oss_tmp_2->value).bit_mask & KrbCredInfo_caddr_present) {
			_res = _cmHostAddresses(_g, &((_s_oss_tmp_2->value).caddr), &((_d_oss_tmp_2->value).caddr));
			if (_res)
			    return _res;
		    }
		    _s_oss_tmp_2 = _s_oss_tmp_2->next;
		    _d_oss_tmp_2 = _d_oss_tmp_2->next;
		}
		if (_s_oss_tmp_2 || _d_oss_tmp_2)
		    return 1;
	    }
	    if (((*(EncKrbCredPart *)_odata).bit_mask ^ (*(EncKrbCredPart *)_cdata).bit_mask) & nonce_present)
		return 1;
	    if ((*(EncKrbCredPart *)_odata).bit_mask & nonce_present) {
		if ((*(EncKrbCredPart *)_cdata).nonce != (*(EncKrbCredPart *)_odata).nonce)
		    return 1;
	    }
	    if (((*(EncKrbCredPart *)_odata).bit_mask ^ (*(EncKrbCredPart *)_cdata).bit_mask) & EncKrbCredPart_timestamp_present)
		return 1;
	    if ((*(EncKrbCredPart *)_odata).bit_mask & EncKrbCredPart_timestamp_present) {
		if (memcmp(&((*(EncKrbCredPart *)_cdata).timestamp), &((*(EncKrbCredPart *)_odata).timestamp), sizeof(short)*8 + sizeof(ossBoolean)))
		    return 1;
	    }
	    if (((*(EncKrbCredPart *)_odata).bit_mask ^ (*(EncKrbCredPart *)_cdata).bit_mask) & EncKrbCredPart_usec_present)
		return 1;
	    if ((*(EncKrbCredPart *)_odata).bit_mask & EncKrbCredPart_usec_present) {
		if ((*(EncKrbCredPart *)_cdata).usec != (*(EncKrbCredPart *)_odata).usec)
		    return 1;
	    }
	    if (((*(EncKrbCredPart *)_odata).bit_mask ^ (*(EncKrbCredPart *)_cdata).bit_mask) & s_address_present)
		return 1;
	    if ((*(EncKrbCredPart *)_odata).bit_mask & s_address_present) {
		_res = _cmHostAddress(_g, &((*(EncKrbCredPart *)_odata).s_address), &((*(EncKrbCredPart *)_cdata).s_address));
		if (_res)
		    return _res;
	    }
	    if (((*(EncKrbCredPart *)_odata).bit_mask ^ (*(EncKrbCredPart *)_cdata).bit_mask) & EncKrbCredPart_r_address_present)
		return 1;
	    if ((*(EncKrbCredPart *)_odata).bit_mask & EncKrbCredPart_r_address_present) {
		_res = _cmHostAddress(_g, &((*(EncKrbCredPart *)_odata).r_address), &((*(EncKrbCredPart *)_cdata).r_address));
		if (_res)
		    return _res;
	    }
	} break;
	case 18: {
	    if ((*(KRB_ERROR *)_cdata).pvno != (*(KRB_ERROR *)_odata).pvno)
		return 1;
	    if ((*(KRB_ERROR *)_cdata).msg_type != (*(KRB_ERROR *)_odata).msg_type)
		return 1;
	    if (((*(KRB_ERROR *)_odata).bit_mask ^ (*(KRB_ERROR *)_cdata).bit_mask) & ctime_present)
		return 1;
	    if ((*(KRB_ERROR *)_odata).bit_mask & ctime_present) {
		if (memcmp(&((*(KRB_ERROR *)_cdata).ctime), &((*(KRB_ERROR *)_odata).ctime), sizeof(short)*8 + sizeof(ossBoolean)))
		    return 1;
	    }
	    if (((*(KRB_ERROR *)_odata).bit_mask ^ (*(KRB_ERROR *)_cdata).bit_mask) & cusec_present)
		return 1;
	    if ((*(KRB_ERROR *)_odata).bit_mask & cusec_present) {
		if ((*(KRB_ERROR *)_cdata).cusec != (*(KRB_ERROR *)_odata).cusec)
		    return 1;
	    }
	    if (memcmp(&((*(KRB_ERROR *)_cdata).stime), &((*(KRB_ERROR *)_odata).stime), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    if ((*(KRB_ERROR *)_cdata).susec != (*(KRB_ERROR *)_odata).susec)
		return 1;
	    if ((*(KRB_ERROR *)_cdata).error_code != (*(KRB_ERROR *)_odata).error_code)
		return 1;
	    if (!(*(KRB_ERROR *)_odata).crealm != !(*(KRB_ERROR *)_cdata).crealm)
		return 1;
	    if ((*(KRB_ERROR *)_odata).crealm) {
		if (strcmp((*(KRB_ERROR *)_cdata).crealm, (*(KRB_ERROR *)_odata).crealm))
		    return 1;
	    }
	    if (((*(KRB_ERROR *)_odata).bit_mask ^ (*(KRB_ERROR *)_cdata).bit_mask) & KRB_ERROR_cname_present)
		return 1;
	    if ((*(KRB_ERROR *)_odata).bit_mask & KRB_ERROR_cname_present) {
		_res = _cmPrincipalName(_g, &((*(KRB_ERROR *)_odata).cname), &((*(KRB_ERROR *)_cdata).cname));
		if (_res)
		    return _res;
	    }
	    if (strcmp((*(KRB_ERROR *)_cdata).realm, (*(KRB_ERROR *)_odata).realm))
		return 1;
	    _res = _cmPrincipalName(_g, &((*(KRB_ERROR *)_odata).sname), &((*(KRB_ERROR *)_cdata).sname));
	    if (_res)
		return _res;
	    if (!(*(KRB_ERROR *)_odata).e_text != !(*(KRB_ERROR *)_cdata).e_text)
		return 1;
	    if ((*(KRB_ERROR *)_odata).e_text) {
		if (strcmp((*(KRB_ERROR *)_cdata).e_text, (*(KRB_ERROR *)_odata).e_text))
		    return 1;
	    }
	    if (((*(KRB_ERROR *)_odata).bit_mask ^ (*(KRB_ERROR *)_cdata).bit_mask) & e_data_present)
		return 1;
	    if ((*(KRB_ERROR *)_odata).bit_mask & e_data_present) {
		if (_oss_cmp_unbnd_octet_ia(&((*(KRB_ERROR *)_odata).e_data), &((*(KRB_ERROR *)_cdata).e_data), sizeof(((*(KRB_ERROR *)_cdata).e_data).length), sizeof(((*(KRB_ERROR *)_cdata).e_data).value[0]), (unsigned int)((char *)&((*(KRB_ERROR *)_odata).e_data).value - (char *)&((*(KRB_ERROR *)_odata).e_data))))
		    return 1;
	    }
	} break;
	case 19: {
	    {
		struct METHOD_DATA *  _s_oss_tmp_1 = *(METHOD_DATA *)_odata;
		struct METHOD_DATA *  _d_oss_tmp_1 = *(METHOD_DATA *)_cdata;

		while (_s_oss_tmp_1 && _d_oss_tmp_1) {
		    _res = _cmPA_DATA(_g, &(_s_oss_tmp_1->value), &(_d_oss_tmp_1->value));
		    if (_res)
			return _res;
		    _s_oss_tmp_1 = _s_oss_tmp_1->next;
		    _d_oss_tmp_1 = _d_oss_tmp_1->next;
		}
		if (_s_oss_tmp_1 || _d_oss_tmp_1)
		    return 1;
	    }
	} break;
	case 20: {
	    {
		struct TYPED_DATA *  _s_oss_tmp_1 = *(TYPED_DATA *)_odata;
		struct TYPED_DATA *  _d_oss_tmp_1 = *(TYPED_DATA *)_cdata;

		while (_s_oss_tmp_1 && _d_oss_tmp_1) {
		    if ((_d_oss_tmp_1->value).data_type != (_s_oss_tmp_1->value).data_type)
			return 1;
		    if (((_s_oss_tmp_1->value).bit_mask ^ (_d_oss_tmp_1->value).bit_mask) & data_value_present)
			return 1;
		    if ((_s_oss_tmp_1->value).bit_mask & data_value_present) {
			if (_oss_cmp_unbnd_octet_ia(&((_s_oss_tmp_1->value).data_value), &((_d_oss_tmp_1->value).data_value), sizeof(((_d_oss_tmp_1->value).data_value).length), sizeof(((_d_oss_tmp_1->value).data_value).value[0]), (unsigned int)((char *)&((_s_oss_tmp_1->value).data_value).value - (char *)&((_s_oss_tmp_1->value).data_value))))
			    return 1;
		    }
		    _s_oss_tmp_1 = _s_oss_tmp_1->next;
		    _d_oss_tmp_1 = _d_oss_tmp_1->next;
		}
		if (_s_oss_tmp_1 || _d_oss_tmp_1)
		    return 1;
	    }
	} break;
	case 21: {
	    _res = _cmEncryptedData(_g, (EncryptedData *)_odata, (EncryptedData *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 22: {
	    if (memcmp(&((*(PA_ENC_TS_ENC *)_cdata).patimestamp), &((*(PA_ENC_TS_ENC *)_odata).patimestamp), sizeof(short)*8 + sizeof(ossBoolean)))
		return 1;
	    if (((*(PA_ENC_TS_ENC *)_odata).bit_mask ^ (*(PA_ENC_TS_ENC *)_cdata).bit_mask) & pausec_present)
		return 1;
	    if ((*(PA_ENC_TS_ENC *)_odata).bit_mask & pausec_present) {
		if ((*(PA_ENC_TS_ENC *)_cdata).pausec != (*(PA_ENC_TS_ENC *)_odata).pausec)
		    return 1;
	    }
	} break;
	case 23: {
	    {
		struct ETYPE_INFO *  _s_oss_tmp_1 = *(ETYPE_INFO *)_odata;
		struct ETYPE_INFO *  _d_oss_tmp_1 = *(ETYPE_INFO *)_cdata;

		while (_s_oss_tmp_1 && _d_oss_tmp_1) {
		    if ((_d_oss_tmp_1->value).etype != (_s_oss_tmp_1->value).etype)
			return 1;
		    if (((_s_oss_tmp_1->value).bit_mask ^ (_d_oss_tmp_1->value).bit_mask) & salt_present)
			return 1;
		    if ((_s_oss_tmp_1->value).bit_mask & salt_present) {
			if (_oss_cmp_unbnd_octet_ia(&((_s_oss_tmp_1->value).salt), &((_d_oss_tmp_1->value).salt), sizeof(((_d_oss_tmp_1->value).salt).length), sizeof(((_d_oss_tmp_1->value).salt).value[0]), (unsigned int)((char *)&((_s_oss_tmp_1->value).salt).value - (char *)&((_s_oss_tmp_1->value).salt))))
			    return 1;
		    }
		    _s_oss_tmp_1 = _s_oss_tmp_1->next;
		    _d_oss_tmp_1 = _d_oss_tmp_1->next;
		}
		if (_s_oss_tmp_1 || _d_oss_tmp_1)
		    return 1;
	    }
	} break;
	case 24: {
	    {
		struct ETYPE_INFO2 *  _s_oss_tmp_1 = *(ETYPE_INFO2 *)_odata;
		struct ETYPE_INFO2 *  _d_oss_tmp_1 = *(ETYPE_INFO2 *)_cdata;

		while (_s_oss_tmp_1 && _d_oss_tmp_1) {
		    if ((_d_oss_tmp_1->value).etype != (_s_oss_tmp_1->value).etype)
			return 1;
		    if (!(_s_oss_tmp_1->value).salt != !(_d_oss_tmp_1->value).salt)
			return 1;
		    if ((_s_oss_tmp_1->value).salt) {
			if (strcmp((_d_oss_tmp_1->value).salt, (_s_oss_tmp_1->value).salt))
			    return 1;
		    }
		    if (((_s_oss_tmp_1->value).bit_mask ^ (_d_oss_tmp_1->value).bit_mask) & s2kparams_present)
			return 1;
		    if ((_s_oss_tmp_1->value).bit_mask & s2kparams_present) {
			if (_oss_cmp_unbnd_octet_ia(&((_s_oss_tmp_1->value).s2kparams), &((_d_oss_tmp_1->value).s2kparams), sizeof(((_d_oss_tmp_1->value).s2kparams).length), sizeof(((_d_oss_tmp_1->value).s2kparams).value[0]), (unsigned int)((char *)&((_s_oss_tmp_1->value).s2kparams).value - (char *)&((_s_oss_tmp_1->value).s2kparams))))
			    return 1;
		    }
		    _s_oss_tmp_1 = _s_oss_tmp_1->next;
		    _d_oss_tmp_1 = _d_oss_tmp_1->next;
		}
		if (_s_oss_tmp_1 || _d_oss_tmp_1)
		    return 1;
	    }
	} break;
	case 25: {
	    _res = _cmAuthorizationData(_g, (AuthorizationData *)_odata, (AuthorizationData *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 26: {
	    _res = _cmChecksum(_g, &((*(AD_KDCIssued *)_odata).ad_checksum), &((*(AD_KDCIssued *)_cdata).ad_checksum));
	    if (_res)
		return _res;
	    if (!(*(AD_KDCIssued *)_odata).i_realm != !(*(AD_KDCIssued *)_cdata).i_realm)
		return 1;
	    if ((*(AD_KDCIssued *)_odata).i_realm) {
		if (strcmp((*(AD_KDCIssued *)_cdata).i_realm, (*(AD_KDCIssued *)_odata).i_realm))
		    return 1;
	    }
	    if (((*(AD_KDCIssued *)_odata).bit_mask ^ (*(AD_KDCIssued *)_cdata).bit_mask) & i_sname_present)
		return 1;
	    if ((*(AD_KDCIssued *)_odata).bit_mask & i_sname_present) {
		_res = _cmPrincipalName(_g, &((*(AD_KDCIssued *)_odata).i_sname), &((*(AD_KDCIssued *)_cdata).i_sname));
		if (_res)
		    return _res;
	    }
	    _res = _cmAuthorizationData(_g, &((*(AD_KDCIssued *)_odata).elements), &((*(AD_KDCIssued *)_cdata).elements));
	    if (_res)
		return _res;
	} break;
	case 27: {
	    if ((*(AD_AND_OR *)_cdata).condition_count != (*(AD_AND_OR *)_odata).condition_count)
		return 1;
	    _res = _cmAuthorizationData(_g, &((*(AD_AND_OR *)_odata).elements), &((*(AD_AND_OR *)_cdata).elements));
	    if (_res)
		return _res;
	} break;
	case 28: {
	    _res = _cmAuthorizationData(_g, (AuthorizationData *)_odata, (AuthorizationData *)_cdata);
	    if (_res)
		return _res;
	} break;
	case 29: {
	    if (((*(KERB_PA_PAC_REQUEST *)_cdata).include_pac ^ (*(KERB_PA_PAC_REQUEST *)_odata).include_pac) & 0x01)
		return 1;
	} break;
	case 30: {
	    if (_oss_cmp_unbnd_octet_ia(&((*(ChangePasswdData *)_odata).newpasswd), &((*(ChangePasswdData *)_cdata).newpasswd), sizeof(((*(ChangePasswdData *)_cdata).newpasswd).length), sizeof(((*(ChangePasswdData *)_cdata).newpasswd).value[0]), (unsigned int)((char *)&((*(ChangePasswdData *)_odata).newpasswd).value - (char *)&((*(ChangePasswdData *)_odata).newpasswd))))
		return 1;
	    if (((*(ChangePasswdData *)_odata).bit_mask ^ (*(ChangePasswdData *)_cdata).bit_mask) & targname_present)
		return 1;
	    if ((*(ChangePasswdData *)_odata).bit_mask & targname_present) {
		_res = _cmPrincipalName(_g, &((*(ChangePasswdData *)_odata).targname), &((*(ChangePasswdData *)_cdata).targname));
		if (_res)
		    return _res;
	    }
	    if (!(*(ChangePasswdData *)_odata).targrealm != !(*(ChangePasswdData *)_cdata).targrealm)
		return 1;
	    if ((*(ChangePasswdData *)_odata).targrealm) {
		if (strcmp((*(ChangePasswdData *)_cdata).targrealm, (*(ChangePasswdData *)_odata).targrealm))
		    return 1;
	    }
	} break;
	default:
	    return PDU_RANGE;
    }
    return _res;
}
#endif /* OSS_COMPARE_VALUE */

/* Entry points */
static const _entry_point_struct _entry_points = {_ossinit_kull_m_kerberos_asn1, _emKerberosV5Spec2, _dmKerberosV5Spec2, 
#if (OSS_TOED_API_LEVEL < 22 ) || !defined(OSSNOFREEPDU)
_fmKerberosV5Spec2,
#else
NULL, 
#endif
17,
 NULL, NULL, 0, 0, NULL,
#ifdef OSSPRINT
_pmKerberosV5Spec2
#else
NULL
#endif
};
static void _oss_post_init(struct ossGlobal *world) {
    static const unsigned char _oss_typeinfo[] = {
        0x00, 0x9b, 0x34, 0x39, 0xf8, 0x5e, 0x13, 0xa4, 0x1a, 0x58,
        0x31, 0xa6, 0x1a, 0x5b, 0x31, 0x8e, 0x08, 0x82, 0xf4, 0x72,
        0xbd, 0x83, 0x33, 0x13, 0x8b, 0x68, 0x90, 0xa4, 0x81, 0x9c,
        0x01, 0x84, 0xe1, 0x36, 0xd8, 0x30, 0x6a, 0x26, 0xdc, 0x38,
        0x34, 0x53, 0x8f, 0xa4, 0xaf, 0xb0, 0xfd, 0x15, 0xc3, 0xf4,
        0x69, 0x33, 0x4b, 0x09, 0x41, 0x51, 0xf0, 0xf0, 0xaa, 0x8e,
        0x25, 0xc1, 0x49, 0xdd, 0x72, 0x4a, 0xfc, 0x06, 0x9d, 0x41,
        0x7b, 0x27, 0x9d, 0x38, 0xa9, 0xc2, 0xfa, 0x9f, 0x37, 0x42,
        0x48, 0xe8, 0xb8, 0xf0, 0x9f, 0xef, 0xb1, 0x74, 0xc4, 0x3a,
        0xb8, 0x1f, 0x7c, 0x12, 0x5b, 0x3f, 0xec, 0xcb, 0xad, 0xea,
        0xf7, 0x38, 0xfd, 0x84, 0xa7, 0x17, 0xd6, 0x3a, 0x81, 0x15,
        0xb5, 0x06, 0x3b, 0x0d, 0x75, 0xad, 0x81, 0x37, 0x05, 0xe8,
        0x9f, 0x0c, 0x0d, 0xf8, 0x77, 0x64, 0xc7, 0x91, 0x43, 0x94,
        0xaf, 0x2a, 0x71, 0x39, 0xb3, 0xc2, 0x42, 0x8a, 0xb5, 0x03,
        0x23, 0xbc, 0xf1, 0x0d, 0x46, 0x18, 0x9a, 0x23, 0x86, 0xe1,
        0xaf, 0xdb, 0x30, 0xd5, 0x21, 0x19, 0xfa
    };
    ossInitRootContext1(world, (unsigned char *)_oss_typeinfo);
}

#ifdef _OSSGETHEADER
void *DLL_ENTRY_FDEF ossGetHeader()
{
    return (void *)&_entry_points;
}
#endif /* _OSSGETHEADER */

void * const kull_m_kerberos_asn1 = (void *)&_entry_points;
