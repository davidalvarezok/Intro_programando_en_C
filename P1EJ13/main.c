#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int esPrimo(int n) {
    if (n < 3) {
        return 0;
    }
    for(int i=2; i<= sqrt(n); i++) {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int cond = 5;
    while (cond != 0) {
       int n = rand()%20;
       printf("El numero aleatorio es %d\n", n);
       if (esPrimo(n)) {
           printf("El numero es primo\n");
           cond--;
       }
       else {
           printf("El numero no es primo\n");
       }
    }
    return 0;
}
