#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, dig, aux=0;
    printf("Ingrese un numero entero: ");
    scanf("%d",&n);
    while(n!=0){
        printf("--> %d",n);
        while(n>=10){
            while (n!=0){
                dig = n%10;
                n/=10;
                aux+= dig;
            }
            printf(" --> %d",aux);
            n = aux;
            aux = 0;
        }
        printf("\nIngrese un numero entero: ");
        fflush(stdin);
        scanf("%d\n",&n);
    }
    return 0;
}
