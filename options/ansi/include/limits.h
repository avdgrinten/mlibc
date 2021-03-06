
#ifndef _LIMITS_H
#define _LIMITS_H

#define PATH_MAX 4096
#undef LLONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__

#define NAME_MAX 255

#define LINE_MAX 4096

#define CHAR_BIT 8
#define LONG_BIT (CHAR_BIT * sizeof(long))

#define PIPE_BUF 4096

#define _POSIX_ARG_MAX 4096

#endif // _LIMITS_H

