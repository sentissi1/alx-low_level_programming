#include <unistd.h>
#include "main.h"
/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int _putchr(char c)
{
	return (write(1, &c, 1));
}

