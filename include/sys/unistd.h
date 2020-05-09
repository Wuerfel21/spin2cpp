#ifndef _SYS_UNISTD_H
#define _SYS_UNISTD_H

#include <sys/types.h>
#include <compiler.h>

#if defined(__cplusplus)
extern "C" {
#endif

/* Standard file descriptors */
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
    
#define _MAX_FILES 10
    
  typedef unsigned int useconds_t;

  int open(const char *name, int flags, mode_t mode) _IMPL("libc/unix/posixio.c");
  int write(int fd, const void *buf, int count) _IMPL("libc/unix/posixio.c");
  int read(int fd, void *buf, int count) _IMPL("libc/unix/posixio.c");
  int close(int fd) _IMPL("libc/unix/posixio.c");
  off_t lseek(int fd, off_t offset, int whence) _IMPL("libc/unix/posixio.c");
  int ioctl(int fd, unsigned long req, void *argp) _IMPL("libc/unix/ioctl.c");
  int access(const char *path, int mode) _IMPL("libc/unix/access.c");
    
  /* access mode bits */
#define F_OK (0)
#define R_OK (4)
#define W_OK (2)
#define X_OK (1)

  int isatty(int fd) _IMPL("libc/unix/isatty.c");

  char *getcwd(char *buf, int size) _IMPL("libc/unix/mount.c");
  int chdir(const char *path) _IMPL("libc/unix/mount.c");
  int rmdir(const char *path) _IMPL("libc/unix/posixio.c");
  int mkdir(const char *path, int mode) _IMPL("libc/unix/posixio.c");

  int unlink(const char *path) _IMPL("libc/unix/posixio.c");
  int chown(const char *pathname, uid_t owner, gid_t group) _IMPL("libc/unix/posixio.c");
  int chmod(const char *pathname, mode_t mode) _IMPL("libc/unix/posixio.c");
    
  unsigned int sleep(unsigned int seconds) _IMPL("libc/time/sleep.c");
  int usleep(useconds_t usec) _IMPL("libc/time/usleep.c");

  char *_mktemp(char *templ);
  char *mktemp(char *);

#define getuid() (0)
#define getgid() (0)
    
#if defined(__cplusplus)
}
#endif

#endif
