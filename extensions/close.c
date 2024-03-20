#include <unistd.h>
#include <errno.h>
#include "syscall_ret.h"

long pico_close(int sockfd);

int close(int fd)
{
	int r = pico_close(fd);
	if (r == -EINTR) r = 0;
	return __syscall_ret(r);
}