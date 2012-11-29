#include <fcntl.h>
#include <errno.h>
#include <math.h>
#include <poll.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>


int main (int argc, char *argv[])
{
	struct timespec t_start;
//	t_start.tv_sec = t_start.tv_nsec = 0;
	clock_gettime(CLOCK_MONOTONIC, &t_start);
	int64_t nsec1 = ((int64_t)(t_start.tv_sec)*1000000000LL + t_start.tv_nsec);
	sleep(1);
	clock_gettime(CLOCK_MONOTONIC, &t_start);
	int64_t nsec2 = (int64_t)(t_start.tv_sec)*1000000000LL + t_start.tv_nsec;
	printf("%ld\n", nsec1 - nsec2);
	return 0;
}
