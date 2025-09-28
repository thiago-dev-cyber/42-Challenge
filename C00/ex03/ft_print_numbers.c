#include <unistd.h>


void ft_print_numbers (void) {
    
    int i;
    char digit;

    digit = '0';


    for (i = 0; i <= 9; i++) {
        write(1, &digit, 1);
        digit++;
    }

}
