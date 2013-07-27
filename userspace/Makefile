CFLAGS+=-g -O -Wall

TARGETS = realtimeclock serial

all: $(TARGETS)

$(TARGETS):
	gcc ax25.c -l:libax25.so.0 -o ax25
	gcc $(CFLAGS) $@.c -o $@

clean:
	rm -vf $(TARGETS)
	rm -vf ax25

# End of file
