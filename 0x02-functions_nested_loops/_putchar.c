#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}