#include <unistd.h>
#include <sys/types.h>

long pico_getpid(void);

pid_t getpid(void)
{
	return pico_getpid();
}