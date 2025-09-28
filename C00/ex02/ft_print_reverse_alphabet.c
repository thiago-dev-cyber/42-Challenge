/*
 *******************************************************
 * Program: 
 * by: thiago-dev-cyber
 * Data: 27-09-2025
 * Description: function that displays the alphabet in lowercase.
 * Version: 
 ********************************************************
*/


#include <unistd.h>


/*print on screen the alphabet in descending order*/
void ft_print_reverse_alphabet(void) {
    
    char letter;
    letter = 'z';

    while (letter >= 'a') {
        write(1, &letter, 1);
        letter--;
    }
}

