/*
 **********************************************************
 * Program: ft_print_comb2.c
 * By:      thiago-dev-cyber <thiagof@tutamail.com>
 * Data:    06-10-2025
 * Description: Display a comb in display.
 **********************************************************
*/

#include <unistd.h>

/* Display a character 'c' in terminal */
void	write_c(char c)
{
	write(1, &c, 1);
}

/* This function display a comb*/
void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			write_c(n1 / 10 + '0');
			write_c(n1 % 10 + '0');
			write_c(' ');
			write_c(n2 / 10 + '0');
			write_c(n2 % 10 + '0');
			if (!(n1 == 98 && n2 == 99))
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
