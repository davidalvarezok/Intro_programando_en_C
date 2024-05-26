#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char c; int n, aux = 0,pri, cond;
    printf("Tirar dados ingresar T: ");
    scanf("%c",&c);
    for (int j=0; j<2; j++){
        srand(time(NULL));
        n=rand()%10 + 2;
        aux += n;
    }
    switch (aux)
    {
        case 2: { printf("Perdio"); break; }
        case 12: { printf("Perdio"); break; }
        case 7: { printf("Gano"); break; }
        case 1: { printf("Gano"); break; }
        default: {
            pri = aux;
            printf("Tirar dados ingresar T: ");
            scanf(" %c",&c);
            cond = 0;
        }
    }

    while (cond == 0){
        for (int j=0; j<2; j++){
            srand(time(NULL));
            n=rand()%10 + 2;
            aux += n;
        }
        if (aux == pri){
            printf("Gano");
            cond = 1;
        }
        else {
            aux = 0;
            printf("Tirar dados ingresar T: ");
            scanf(" %c",&c);
        }
    }
    return 0;
}
