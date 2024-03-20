#include <unistd.h>
#include <sys/types.h>

long pico_getuid(void);

uid_t getuid(void)
{
	return pico_getuid();
}