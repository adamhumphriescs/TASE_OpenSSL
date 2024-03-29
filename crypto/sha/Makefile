#
# OpenSSL/crypto/sha/Makefile
#

DIR=    sha
TOP=    ../..
CC=     cc
CPP=    $(CC) -E
INCLUDES=
CFLAG=-g
MAKEFILE=       Makefile
AR=             ar r

SHA1_ASM_OBJ=

CFLAGS= $(INCLUDES) $(CFLAG)
ASFLAGS= $(INCLUDES) $(ASFLAG)
AFLAGS= $(ASFLAGS)

GENERAL=Makefile
TEST=shatest.c sha1test.c sha256t.c sha512t.c
APPS=

LIB=$(TOP)/libcrypto.a
LIBSRC=sha_dgst.c sha1dgst.c sha_one.c sha1_one.c sha256.c sha512.c
LIBOBJ=sha_dgst.o sha1dgst.o sha_one.o sha1_one.o sha256.o sha512.o $(SHA1_ASM_OBJ)

SRC= $(LIBSRC)

EXHEADER= sha.h
HEADER= sha_locl.h $(EXHEADER)

ALL=    $(GENERAL) $(SRC) $(HEADER)

top:
	(cd ../..; $(MAKE) DIRS=crypto SDIRS=$(DIR) sub_all)

all:    lib

lib:    $(LIBOBJ)
	$(AR) $(LIB) $(LIBOBJ)
	$(RANLIB) $(LIB) || echo Never mind.
	@touch lib

files:
	$(PERL) $(TOP)/util/files.pl Makefile >> $(TOP)/MINFO

links:
	@$(PERL) $(TOP)/util/mklink.pl ../../include/openssl $(EXHEADER)
	@$(PERL) $(TOP)/util/mklink.pl ../../test $(TEST)
	@$(PERL) $(TOP)/util/mklink.pl ../../apps $(APPS)

install:
	@[ -n "$(INSTALLTOP)" ] # should be set by top Makefile...
	@headerlist="$(EXHEADER)"; for i in $$headerlist ; \
	do  \
	(cp $$i $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i; \
	chmod 644 $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i ); \
	done;

tags:
	ctags $(SRC)

tests:

lint:
	lint -DLINT $(INCLUDES) $(SRC)>fluff

depend:
	@[ -n "$(MAKEDEPEND)" ] # should be set by upper Makefile...
	$(MAKEDEPEND) -- $(CFLAG) $(INCLUDES) $(DEPFLAG) -- $(PROGS) $(LIBSRC)

dclean:
	$(PERL) -pe 'if (/^# DO NOT DELETE THIS LINE/) {print; exit(0);}' $(MAKEFILE) >Makefile.new
	mv -f Makefile.new $(MAKEFILE)

clean:
	rm -f *.s *.o *.obj lib tags core .pure .nfs* *.old *.bak fluff

# DO NOT DELETE THIS LINE -- make depend depends on it.

sha1_one.o: ../../include/openssl/crypto.h ../../include/openssl/e_os2.h
sha1_one.o: ../../include/openssl/opensslconf.h
sha1_one.o: ../../include/openssl/opensslv.h ../../include/openssl/ossl_typ.h
sha1_one.o: ../../include/openssl/safestack.h ../../include/openssl/sha.h
sha1_one.o: ../../include/openssl/stack.h ../../include/openssl/symhacks.h
sha1_one.o: sha1_one.c
sha1dgst.o: ../../include/openssl/crypto.h ../../include/openssl/e_os2.h
sha1dgst.o: ../../include/openssl/opensslconf.h
sha1dgst.o: ../../include/openssl/opensslv.h ../../include/openssl/ossl_typ.h
sha1dgst.o: ../../include/openssl/safestack.h ../../include/openssl/sha.h
sha1dgst.o: ../../include/openssl/stack.h ../../include/openssl/symhacks.h
sha1dgst.o: ../md32_common.h sha1dgst.c sha_locl.h
sha256.o: ../../include/openssl/crypto.h ../../include/openssl/e_os2.h
sha256.o: ../../include/openssl/opensslconf.h ../../include/openssl/opensslv.h
sha256.o: ../../include/openssl/ossl_typ.h ../../include/openssl/safestack.h
sha256.o: ../../include/openssl/sha.h ../../include/openssl/stack.h
sha256.o: ../../include/openssl/symhacks.h ../md32_common.h sha256.c
sha512.o: ../../e_os.h ../../include/openssl/bio.h
sha512.o: ../../include/openssl/buffer.h ../../include/openssl/crypto.h
sha512.o: ../../include/openssl/e_os2.h ../../include/openssl/err.h
sha512.o: ../../include/openssl/lhash.h ../../include/openssl/opensslconf.h
sha512.o: ../../include/openssl/opensslv.h ../../include/openssl/ossl_typ.h
sha512.o: ../../include/openssl/safestack.h ../../include/openssl/sha.h
sha512.o: ../../include/openssl/stack.h ../../include/openssl/symhacks.h
sha512.o: ../cryptlib.h sha512.c
sha_dgst.o: ../../include/openssl/crypto.h ../../include/openssl/e_os2.h
sha_dgst.o: ../../include/openssl/opensslconf.h
sha_dgst.o: ../../include/openssl/opensslv.h ../../include/openssl/ossl_typ.h
sha_dgst.o: ../../include/openssl/safestack.h ../../include/openssl/sha.h
sha_dgst.o: ../../include/openssl/stack.h ../../include/openssl/symhacks.h
sha_dgst.o: ../md32_common.h sha_dgst.c sha_locl.h
sha_one.o: ../../include/openssl/crypto.h ../../include/openssl/e_os2.h
sha_one.o: ../../include/openssl/opensslconf.h ../../include/openssl/opensslv.h
sha_one.o: ../../include/openssl/ossl_typ.h ../../include/openssl/safestack.h
sha_one.o: ../../include/openssl/sha.h ../../include/openssl/stack.h
sha_one.o: ../../include/openssl/symhacks.h sha_one.c
