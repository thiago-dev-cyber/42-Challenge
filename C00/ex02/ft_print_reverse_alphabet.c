/*
 **********************************************************
 * Program: ft_print_reverse_alphabet.c
 * By:      thiago-dev-cyber <thiagof@tutamail.com>
 * Data: 29-09-2025
 * Description: Write in display a reverse alphabet.
 **********************************************************
*/

#include <unistd.h>

/*Display reverse alphabet*/
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 122;
	while (letter >= 97)
	{
		write(1, &letter, 1);
		letter--;
	}
}
