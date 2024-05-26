#include <stdio.h>
#include <stdlib.h>

int invertir(int n) {
    int dig, aux = 0;
    while (n != 0){
        dig = n%10;
        if (n != 0) {
            n/=10;
        }
        (aux = aux*10 + dig);
    }
    return aux;
}

int main()
{
    int n = rand()%400;
    printf("El numero original es %d\n",n);
    printf("El numero invertido es %d\n",invertir(n));
    return 0;
}
