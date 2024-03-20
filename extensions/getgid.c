#include <unistd.h>
#include <sys/types.h>

long pico_getgid(void);

gid_t getgid(void)
{
	return pico_getgid();
}