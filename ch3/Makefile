ROOT=..
EXTRALIBS=
include $(ROOT)/Make.defines

PROGS= using s1 word mygetline stringlen newfor upperstr hex v1 \
	arraybegend itercapstr binsearch formula test strempty \
	beginend multirow

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
arraybegend: arraybegend.cc
itercapstr: itercapstr.cc
binsearch: binsearch.cc
formula: formula.cc
strempty: strempty.cc
beginend: beginend.cc

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

