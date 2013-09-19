ROOT=..
EXTRALIBS=
include $(ROOT)/Make.defines

PROGS= myref

all: $(PROGS)

myref: myref.cc


$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

