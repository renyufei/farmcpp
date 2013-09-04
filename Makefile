CPPFLAGS= -std=c++0x -Wall

PROGS = hello

SOURCE := ch1/hello.cc

OBJS = $(SOURCE:.cc=.o)

DIRS = ch1

all: 
	for i in $(DIRS); do \
		(cd $$i && echo "making $$i" && $(MAKE) ) || exit 1; \
	done

clean:
	for i in $(DIRS); do \
		(cd $$i && echo "cleaning $$i" && $(MAKE) clean) || exit 1; \
	done

