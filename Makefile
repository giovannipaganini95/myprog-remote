all: myprog-remote

CFLAGS = -g

myprog-remote: myprog.c
	$(CC) $(CFLAGS) myprog.c $(LDFLAGS) -o myprog-remote

clean:
	rm myprog-remote
