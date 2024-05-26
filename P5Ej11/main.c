#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

int main()
{
    Stack s = s_create();
    int n, valor, longitud = 0;
    printf("Lee un numero: ");
    scanf("%d",&n);
    while (n != 0){
        s_push(&s,n);
        printf("Lee un numero: ");
        scanf("%d",&n);
        longitud++;
    }
    for (int i=0; i<longitud; i++){
        valor = s_pop(&s);
        printf("valor a borrar: %d\n",valor);
    }
    return 0;
}
