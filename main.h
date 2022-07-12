#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - A structure for functions and symbols
* @sym: The operator
* @f: pointer to a printer functions
*
* Description: struct that stores pointers to a
* printer functions.
*/

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int _printf(const char *format, ...);
}

#endif
