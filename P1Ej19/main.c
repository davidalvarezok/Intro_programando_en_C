#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, res,puntos=0;
    for (int i=1; i<=4; i++){
        srand(time(NULL));
        a = rand()%(100+1); b = rand()%(100+1);
        printf("%d + %d\n",a,b);
        fflush(stdin);
        scanf("%d\n",&res);
        if(a+b==res){
            puntos++;
        }
    }
    switch (puntos){
        case 4: printf("Calificacion A\n"); break;
        case 3: printf("Calificacion B\n"); break;
        case 2: printf("Calificacion C\n"); break;
        case 1: printf("Calificacion D\n"); break;
        case 0: printf("Calificacion E\n"); break;
        default: printf("Sin calificacion\n");
    }
    return 0;
}
