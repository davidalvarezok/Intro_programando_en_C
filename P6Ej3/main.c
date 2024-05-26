#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int a, b;
    char ope;
    if (argc != 4){
        printf("Argumentos insuficientes oi demasioados\n");
    } else {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        ope = *argv[3];
        printf("El valor del operador es: %c\n",ope);
        switch(ope){
            case '+': {printf("%d + %d = %d\n",a,b,a+b);
                break; }
            case '-': {printf("%d - %d = %d\n",a,b,a-b);
                break; }
            case '/': {printf("%d / %d = %.1f\n",a,b,(float)a/b);
                break; }
            case '.': {printf("%d x %d = %d\n",a,b,a*b);
                break; }
            default: {printf("El operador es invalido\n");
                break; }
        }
    }
    return 0;
}
