#include "main.h"

/**
* print_triangle - Prints a ...### triangle.
*
*@size: the triangle size
*
* Return: ######
**/

void print_triangle(int size)
{
	int alto, esp, num;

	if (size <= 0)
		_putchar('\n');
	else
		for (alto = 0; alto < size; alto++)
		{
			for (esp = 1; esp < (size - alto); esp++)
				_putchar(' ');
			for (num = 0; num <= alto; num++)
				_putchar('#');
			_putchar('\n');
		}
}
