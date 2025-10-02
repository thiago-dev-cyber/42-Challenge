/*
 **********************************************************
 * Program: ft_putchar.c
 * By:      thiago-dev-cyber <thiagof@tutamail.com>
 * Data:    25-09-2025
 * Description: This function write in display a character.
 **********************************************************
*/

#include <unistd.h>

/* Write numbers in display */
void	write_num(int unit, int ten, int hundred)
{
	if (hundred == '0' && ten == '1' && unit == '2')
	{
		write(1, "012", 3);
	}
	else
	{
		write(1, ", ", 2);
		write(1, &hundred, 1);
		write(1, &ten, 1);
		write(1, &unit, 1);
	}
}

/* Show on the screen all combinations for numbers with 3 digits */
void	ft_print_comb(void)
{
	char	unit;
	char	ten;
	char	hundred;

	unit = '0';
	ten = '0';
	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				write_num(unit, ten, hundred);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}
