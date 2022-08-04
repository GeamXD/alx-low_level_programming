#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_int(va_list ap);
void print_char(va_list ap);
void print_float(va_list ap);
void print_strinf(va_list ap);

/**
 * struct print_anyStruct - structure definition
 * @type: type
 * @printfunc: function to print;
 */
typedef struct print_anyStruct
{
	char *type;
	void (*printfunc)(va_list);
} print_anyStruct;

#endif
