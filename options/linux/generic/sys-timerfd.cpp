
#include <errno.h>
#include <sys/timerfd.h>

#include <bits/ensure.h>
#include <mlibc/debug.hpp>
#include <mlibc/sysdeps.hpp>

int timerfd_create(int, int flags) {
	if(!mlibc::sys_timerfd_create) {
		MLIBC_MISSING_SYSDEP();
		errno = ENOSYS;
		return -1;
	}
	int fd;
	if(int e = mlibc::sys_timerfd_create(flags, &fd); e) {
		errno = e;
		return -1;
	}
	return fd;
}

int timerfd_settime(int fd, int flags, const struct itimerspec *value,
		struct itimerspec *oldvalue) {
	__ensure(!oldvalue);

	if(!mlibc::sys_timerfd_settime) {
		MLIBC_MISSING_SYSDEP();
		errno = ENOSYS;
		return -1;
	}
	if(int e = mlibc::sys_timerfd_settime(fd, flags, value); e) {
		errno = e;
		return -1;
	}
	return 0;
}

int timerfd_gettime(int, struct itimerspec *) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

