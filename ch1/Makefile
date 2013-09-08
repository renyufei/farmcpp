ROOT=..
EXTRALIBS=-pthread
include $(ROOT)/Make.defines

PROGS= hello comment loop unknowninput count book

all: $(PROGS)

hello: hello.cc
comment: comment.cc
loop: loop.cc
unknowninput: unknowninput.cc
count: count.cc
book: book.cc Sales_item.h

$(PROGS):
	$(CC) $(CPPFLAGS) $@.cc -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

