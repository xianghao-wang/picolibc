#include <sys/socket.h>

long pico_bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);

int bind(int fd, const struct sockaddr *addr, socklen_t len)
{
	return pico_bind(fd, addr, len);
}