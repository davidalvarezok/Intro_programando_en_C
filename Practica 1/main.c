#include <stdio.h>
#include <stdlib.h>

int main()
{   short int num, aux; num = 1;
    while (num <= 50) {
       aux = num%5;
       if (aux == 0 ) {
         printf("El número es multiplo %d\n ", num);
       }
       num++;
    }
    return 0;
}
