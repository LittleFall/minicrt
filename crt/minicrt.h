#progma once

// why
#ifdef _cplusplus
extern "c" {
#endif

//malloc
#ifndef NULL
#define NULL (0)
#endif

void free(void *ptr);
void *malloc(unsigned size);
static int brk(void *end_data_segment);
int mini_crt_init_heap();

// string
char *itoa(int n, char *str, int radix);
int strcmp(const char *src, const char *dst);
char *strcpy(char *dest, const char *src);
unsigned strlen(const char *str);

// File and IO
typedef int FILE;
#define EOF (-1)
#define stdin ((FILE*)0)
#define stdout ((FILE*)1)
#define stderr ((FILE*)2)

int mini_crt_init_io();
FILE *fopen(const char *filename, const char *mode);
int fread(void *buffer, int size, int count, FILE *stream);
int fclose(FILE *fp);
int fseek(FILE *fp, int offset, int set)

// printf
int fputc(int c, FILE *stream);
int fputs(cosnt char *str, FILE *stream);
int printf(const char *fromat, ...);
int fprintf(FILE *stream, const char *fromat, ...);

// internal
void do_global_ctors();
void mini_crt_call_exit_routine();

// atexit
typedef void (*atexit_func_t)(void); // using atexit_func_t = std::function<void(void)>;
int atexit(atexit_func_t func);

#ifdef _cplusplus
}
#endif