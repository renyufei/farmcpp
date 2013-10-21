ROOT=..
EXTRALIBS=
include $(ROOT)/Make.defines

PROGS= using s1 word mygetline stringlen newfor upperstr hex v1 \
	itercapstr binsearch

all: $(PROGS)

using: using.cc
s1: s1.cc
word: word.cc
mygetline: mygetline.cc
stringlen: stringlen.cc
newfor: newfor.cc
upperstr: upperstr.cc
hex: hex.cc
v1: v1.cc
itercapstr: itercapstr.cc
binsearch: binsearch.cc

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

