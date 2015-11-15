
#ifndef _STDIO_H
#define _STDIO_H

#ifdef __cplusplus
extern "C" {
#endif

// This mechanism provides __gnu_va_list which is equivalent to va_list
// We have to do this because stdio.h is not supposed to define va_list
#define __need___va_list
#include <stdarg.h>

// [C11-7.21.1] I/O related types

#define __need_size_t
#include <stddef.h>

struct _MlibcFile { };

typedef struct _MlibcFile FILE;
typedef size_t fpos_t;

// [C11-7.21.1] I/O related macros

#define NULL 0

#define _IOFBF 1
#define _IOLBF 2
#define _IONBF 3

#define BUFSIZ 512

#define EOF (-1)

#define FOPEN_MAX 1024
#define FILENAME_MAX 256
#define L_tmpnam 256

#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_SET 3

#define TMP_MAX 1024

extern FILE *stderr;
extern FILE *stdin;
extern FILE *stdout;

// [C11-7.21.4] Operations on files

int remove(const char *filename);
int rename(const char *old_path, const char *new_path);
FILE *tmpfile(void);
char *tmpnam(char *buffer);

// [C11-7.21.5] File access functions

int fclose(FILE *stream);
int fflush(FILE *stream);
FILE *fopen(const char *__restrict filename, const char *__restrict mode);
FILE *freopen(const char *__restrict filename, const char *__restrict mode, FILE *__restrict stream);
void setbuf(FILE *__restrict stream, char *__restrict buffer);
void setvbuf(FILE *__restrict stream, char *__restrict buffer, int mode, size_t size);

// [C11-7.21.6] Formatted input/output functions

int fprintf(FILE *__restrict stream, const char *__restrict format, ...);
int fscanf(FILE *__restrict stream, const char *__restrict format, ...);
int printf(const char *__restrict format, ...);
int scanf(const char *__restrict format, ...);
int snprintf(char *__restrict buffer, size_t max_size, const char *__restrict format, ...);
int sprintf(char *__restrict buffer, const char *__restrict format, ...);
int vfprintf(FILE *__restrict stream, const char *__restrict format, __gnuc_va_list args);
int vfscanf(FILE *__restrict stream, const char *__restrict format, __gnuc_va_list args);
int vprintf(const char *__restrict format, __gnuc_va_list args);
int vscanf(const char *__restrict format, __gnuc_va_list args);
int vsnprintf(char *__restrict buffer, size_t max_size,
		const char *__restrict format, __gnuc_va_list args);
int vsprintf(char *__restrict buffer, const char *__restrict format, __gnuc_va_list args);
int vsscanf(const char *__restrict buffer, const char *__restrict format, __gnuc_va_list args);

// [C11-7.21.7] Character input/output functions

int fgetc(FILE *stream);
char *fgets(char *__restrict buffer, size_t max_size, FILE *__restrict stream);
int fputc(int c, FILE *stream);
int fputs(const char *__restrict string, FILE *__restrict stream);
int getc(FILE *stream);
int getchar(void);
int putc(int c, FILE *stream);
int putchar(int c);
int puts(const char *string);
int ungetc(int c, FILE *stream);

// [C11-7.21.8] Direct input/output functions

size_t fread(void *__restrict buffer, size_t max_size, size_t count, FILE *__restrict stream);
size_t fwrite(const void *__restrict buffer, size_t size, size_t count, FILE *__restrict stream);

// [C11-7.21.9] File positioning functions

int fgetpos(FILE *__restrict stream, fpos_t *__restrict position);
int fseek(FILE *stream, long offset, int whence);
int fsetpos(FILE *stream, const fpos_t *position);
long ftell(FILE *stream);
void rewind(FILE *stream);

// [C11-7.21.10] Error handling functions

void clearerr(FILE *stream);
int feof(FILE *stream);
int ferror(FILE *stream);
int perror(const char *string);

#ifdef __cplusplus
}
#endif

#endif // _STDIO_H
