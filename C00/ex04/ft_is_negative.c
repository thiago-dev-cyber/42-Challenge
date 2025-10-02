/*
 **********************************************************
 * Program: ft_is_negative.c
 * By:      thiago-dev-cyber <thiagof@tutamail.com>
 * Data: 25-09-2025
 * Description: This function check if number "n" is negative
 **********************************************************
*/

#include <unistd.h>

/*Verify if int "n" is negative*/
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
	}
	if (n >= 0)
	{
		write(1, "P\n", 2);
	}
}
