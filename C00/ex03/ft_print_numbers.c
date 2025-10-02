/*                  
**********************************************************
* Program: ft_print_reverse_alphabet.c
* By:      thiago-dev-cyber <thiagof@tutamail.com>
* Data: 29-09-2025
* Description: Write in display a reverse alphabet.      
**********************************************************
*/

#include <unistd.h>

/* This function display numbers in a range from 0 to 9*/
void	ft_print_numbers(void)
{
	char	digit;

	digit = 0x30;
	while (digit < 0x3A)
	{
		write(1, &digit, 1);
		digit++;
	}
}
