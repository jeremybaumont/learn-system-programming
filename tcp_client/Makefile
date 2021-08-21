CLEANFILES	 = tcp_client
CFLAGS		+= -O2 -Werror -Wall -Wextra -m64 -fno-omit-frame-pointer -std=c11
LDFLAGS		+=

tcp_client: tcp.h tcp_client.c
	$(CC) -o $@ $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $^

clean:
	rm -f $(CLEANFILES)
