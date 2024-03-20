#include <time.h>
#include <errno.h>
#include <stdint.h>
#include <sys/types.h>
#include "syscall_ret.h"

long pico_clock_gettime(clockid_t clk_id, struct timespec *tp);

int clock_gettime(clockid_t clk, struct timespec *ts)
{
	int r;
	r = pico_clock_gettime(clk, ts);
	return __syscall_ret(r);
}