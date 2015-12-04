
#include <stdio.h>

#include <mlibc/ensure.h>

FILE *stderr;
FILE *stdin;
FILE *stdout;

int remove(const char *filename) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int rename(const char *old_path, const char *new_path) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
FILE *tmpfile(void) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
char *tmpnam(char *buffer) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

int fclose(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int fflush(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
FILE *fopen(const char *__restrict filename, const char *__restrict mode) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
FILE *freopen(const char *__restrict filename, const char *__restrict mode, FILE *__restrict stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
void setbuf(FILE *__restrict stream, char *__restrict buffer) {
	__ensure(!"Not implemented");
}
void setvbuf(FILE *__restrict stream, char *__restrict buffer, int mode, size_t size) {
	__ensure(!"Not implemented");
}

int fprintf(FILE *__restrict stream, const char *__restrict format, ...) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int fscanf(FILE *__restrict stream, const char *__restrict format, ...) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int printf(const char *__restrict format, ...) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int scanf(const char *__restrict format, ...) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int snprintf(char *__restrict buffer, size_t max_size, const char *__restrict format, ...) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int sprintf(char *__restrict buffer, const char *__restrict format, ...) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vfprintf(FILE *__restrict stream, const char *__restrict format, __gnuc_va_list args) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vfscanf(FILE *__restrict stream, const char *__restrict format, __gnuc_va_list args) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vprintf(const char *__restrict format, __gnuc_va_list args){
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vscanf(const char *__restrict format, __gnuc_va_list args) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vsnprintf(char *__restrict buffer, size_t max_size,
		const char *__restrict format, __gnuc_va_list args) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vsprintf(char *__restrict buffer, const char *__restrict format, __gnuc_va_list args) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int vsscanf(const char *__restrict buffer, const char *__restrict format, __gnuc_va_list args) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

int fgetc(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
char *fgets(char *__restrict buffer, size_t max_size, FILE *__restrict stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int fputc(int c, FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int fputs(const char *__restrict string, FILE *__restrict stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int getc(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int getchar(void) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int putc(int c, FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int putchar(int c) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int puts(const char *string) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int ungetc(int c, FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

size_t fread(void *__restrict buffer, size_t max_size, size_t count, FILE *__restrict stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
size_t fwrite(const void *__restrict buffer, size_t size, size_t count, FILE *__restrict stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

int fgetpos(FILE *__restrict stream, fpos_t *__restrict position) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int fseek(FILE *stream, long offset, int whence) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int fsetpos(FILE *stream, const fpos_t *position) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
long ftell(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
void rewind(FILE *stream) {
	__ensure(!"Not implemented");
}

void clearerr(FILE *stream) {
	__ensure(!"Not implemented");
}
int feof(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int ferror(FILE *stream) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
int perror(const char *string) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
