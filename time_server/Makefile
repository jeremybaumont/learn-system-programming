#
# Makefile for unix_list
#

CLEANFILES	 = time_server time_server_dual
CFLAGS		+= -O2 -Werror -Wall -Wextra -m64 -fno-omit-frame-pointer -std=c11
LDFLAGS		+=

time_server: time_server.c
	$(CC) -o $@ $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $^

time_server_dual: time_server_dual.c
	$(CC) -o $@ $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $^

clean:
	rm -f $(CLEANFILES)
