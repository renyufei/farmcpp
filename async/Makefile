ROOT=..
EXTRALIBS=-lpthread
include $(ROOT)/Make.defines

PROGS= future future2

all: $(PROGS)

future: future.cc
future2: future2.cc

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS) $(EXTRALIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

