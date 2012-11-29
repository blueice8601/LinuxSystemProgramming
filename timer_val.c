#include <fcntl.h>
#include <errno.h>
#include <math.h>
#include <poll.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/select.h>
#include <stdio.h>


int main (int argc, char *argv[])
{
    struct  timeval   event_time_begin,event_time_end;
    int64_t timeflew;

    while(1) {
        gettimeofday(&event_time_begin,0);
        sleep(1);
        gettimeofday(&event_time_end,0);
        timeflew = (int64_t)((int64_t)event_time_end.tv_sec*1000000000
                            + (int64_t)event_time_end.tv_usec*1000
                            -(int64_t)event_time_begin.tv_sec*1000000000
                            - (int64_t)event_time_begin.tv_usec*1000);
        printf("%ld\n", timeflew);
    }

    return 0;
}
