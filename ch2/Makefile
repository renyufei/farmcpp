ROOT=..
EXTRALIBS=
include $(ROOT)/Make.defines

PROGS= myref constref

all: $(PROGS)

myref: myref.cc
constref: constref.cc

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

