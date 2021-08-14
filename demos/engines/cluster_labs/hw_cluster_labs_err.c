 
/* hw_cluster_labs_err.c */
/* ====================================================================
 * Copyright (c) 1999-2002 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include "hw_cluster_labs_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
static ERR_STRING_DATA CL_str_functs[]=
	{
{ERR_PACK(0,CL_F_CLUSTER_LABS_CTRL,0),	"CLUSTER_LABS_CTRL"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_DSA_SIGN,0),	"CLUSTER_LABS_DSA_SIGN"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_DSA_VERIFY,0),	"CLUSTER_LABS_DSA_VERIFY"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_FINISH,0),	"CLUSTER_LABS_FINISH"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_INIT,0),	"CLUSTER_LABS_INIT"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_MOD_EXP,0),	"CLUSTER_LABS_MOD_EXP"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_MOD_EXP_CRT,0),	"CLUSTER_LABS_MOD_EXP_CRT"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_RAND_BYTES,0),	"CLUSTER_LABS_RAND_BYTES"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_RSA_MOD_EXP,0),	"CLUSTER_LABS_RSA_MOD_EXP"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_RSA_PRIV_DEC,0),	"CLUSTER_LABS_RSA_PRIV_DEC"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_RSA_PRIV_ENC,0),	"CLUSTER_LABS_RSA_PRIV_ENC"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_RSA_PUB_DEC,0),	"CLUSTER_LABS_RSA_PUB_DEC"},
{ERR_PACK(0,CL_F_CLUSTER_LABS_RSA_PUB_ENC,0),	"CLUSTER_LABS_RSA_PUB_ENC"},
{0,NULL}
	};

static ERR_STRING_DATA CL_str_reasons[]=
	{
{CL_R_ALREADY_LOADED                     ,"already loaded"},
{CL_R_COMMAND_NOT_IMPLEMENTED            ,"command not implemented"},
{CL_R_DSO_FAILURE                        ,"dso failure"},
{CL_R_FUNCTION_NOT_BINDED                ,"function not binded"},
{CL_R_INIT_FAILED                        ,"init failed"},
{CL_R_NOT_LOADED                         ,"not loaded"},
{0,NULL}
	};

#endif

#ifdef CL_LIB_NAME
static ERR_STRING_DATA CL_lib_name[]=
        {
{0	,CL_LIB_NAME},
{0,NULL}
	};
#endif


static int CL_lib_error_code=0;
static int CL_error_init=1;

static void ERR_load_CL_strings(void)
	{
	if (CL_lib_error_code == 0)
		CL_lib_error_code=ERR_get_next_error_library();

	if (CL_error_init)
		{
		CL_error_init=0;
#ifndef OPENSSL_NO_ERR
		ERR_load_strings(CL_lib_error_code,CL_str_functs);
		ERR_load_strings(CL_lib_error_code,CL_str_reasons);
#endif

#ifdef CL_LIB_NAME
		CL_lib_name->error = ERR_PACK(CL_lib_error_code,0,0);
		ERR_load_strings(0,CL_lib_name);
#endif
		}
	}

static void ERR_unload_CL_strings(void)
	{
	if (CL_error_init == 0)
		{
#ifndef OPENSSL_NO_ERR
		ERR_unload_strings(CL_lib_error_code,CL_str_functs);
		ERR_unload_strings(CL_lib_error_code,CL_str_reasons);
#endif

#ifdef CL_LIB_NAME
		ERR_unload_strings(0,CL_lib_name);
#endif
		CL_error_init=1;
		}
	}

static void ERR_CL_error(int function, int reason, char *file, int line)
	{
	if (CL_lib_error_code == 0)
		CL_lib_error_code=ERR_get_next_error_library();
	ERR_PUT_error(CL_lib_error_code,function,reason,file,line);
	}
