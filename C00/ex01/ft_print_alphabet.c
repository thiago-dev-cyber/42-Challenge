/*
 **********************************************************
 * Program: ft_print_alphabet.c
 * By:      thiago-dev-cyber <thiagof@tutamail.com>
 * Data: 25-09-2025
 * Description: This function write in display a alphabet.
 **********************************************************
*/

#include <unistd.h>


/*Display the alphabet on the screen*/
void ft_print_alphabet(void) {
    
    char letter;
    letter = 'a';

    for (int i = 0; i < 26; i++) {
        
        write(1, &letter, 1);
        letter++;
    }
}

