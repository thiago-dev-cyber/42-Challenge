/*
 **********************************************************
 * Program: ft_putchar.c
 * By:      thiago-dev-cyber <thiagof@tutamail.com>
 * Data:    25-09-2025
 * Description: This function write in display a character.
 **********************************************************
*/
#include <unistd.h>

/* Display character 'c' on the screen*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
