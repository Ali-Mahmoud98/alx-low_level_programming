#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	/* '*s' will point to location of 'to'*/
	*s = to;
	/*for char* s1 = "bla" and char* s2 = "foo"*/

	/* the &s1 means the location that the pointer that points*/
	/* to first char in s.*/
	/* pass sting to first param like that (&s1) => (**&s1) => (*s1)*/
}

