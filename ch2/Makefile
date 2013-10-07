ROOT=..
EXTRALIBS=
include $(ROOT)/Make.defines

PROGS= myref unsigned-test toplowconst constref

all: $(PROGS)

myref: myref.cc
constref: constref.cc
unsigned-test: unsigned-test.cc
toplowconst: toplowconst.cc

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

