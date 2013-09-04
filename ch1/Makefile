ROOT=..
EXTRALIBS=-pthread
include $(ROOT)/Make.defines

PROGS= hello

all: $(PROGS)

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

