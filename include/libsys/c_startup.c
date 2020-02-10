//
// startup code for C
//
#include <sys/ioctl.h>
#include <stdlib.h>

static const char *_argv[] = {
    "program",
    NULL
};

#define _argc (sizeof(_argv) / sizeof(_argv[0]))

void _c_startup()
{
    int r;
    _setrxtxflags(TTY_FLAG_ECHO); // make sure TTY_FLAG_CRNL is off
    r = main(_argc, _agv);
    _Exit(r);
}
