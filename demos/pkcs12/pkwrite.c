 
/* pkwrite.c */

#include <stdio.h>
#include <stdlib.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <openssl/pkcs12.h>

/* Simple PKCS#12 file creator */

int main(int argc, char **argv)
{
	FILE *fp;
	EVP_PKEY *pkey;
	X509 *cert;
	PKCS12 *p12;
	if (argc != 5) {
		fprintf(stderr, "Usage: pkwrite infile password name p12file\n");
		exit(1);
	}
	SSLeay_add_all_algorithms();
	ERR_load_crypto_strings();
	if (!(fp = fopen(argv[1], "r"))) {
		fprintf(stderr, "Error opening file %s\n", argv[1]);
		exit(1);
	}
	cert = PEM_read_X509(fp, NULL, NULL, NULL);
	rewind(fp);
	pkey = PEM_read_PrivateKey(fp, NULL, NULL, NULL);
	fclose(fp);
	p12 = PKCS12_create(argv[2], argv[3], pkey, cert, NULL, 0,0,0,0,0);
	if(!p12) {
		fprintf(stderr, "Error creating PKCS#12 structure\n");
		ERR_print_errors_fp(stderr);
		exit(1);
	}
	if (!(fp = fopen(argv[4], "wb"))) {
		fprintf(stderr, "Error opening file %s\n", argv[1]);
		ERR_print_errors_fp(stderr);
		exit(1);
	}
	i2d_PKCS12_fp(fp, p12);
	PKCS12_free(p12);
	fclose(fp);
	return 0;
}
