#
# Makefile for unix_list
#

CLEANFILES	 = unix_list
CFLAGS		+= -O2 -Werror -Wall -Wextra -m64 -fno-omit-frame-pointer
LDFLAGS		+=

unix_list: unix_list.c
	$(CC) -o $@ $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $^

clean:
	rm -f $(CLEANFILES)
