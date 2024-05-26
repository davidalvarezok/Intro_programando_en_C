#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int esPalindroma(const char *);
int main()
{
    /*Usar indices, una funcion recibe un putero declarado como cte para no modificarlo
    busco la long de la palabra, uso un for long/2 pregunto si la primer pos es igual a la ultima
    Usando punteros, una funcion recibe un puntero del vector palabra, uso ptr aux para inicio y fin (como cte)
    while inicio < fin comparo 1 pos con ult pos*/
    char v[] = "neuquen";
    if (esPalindroma(v))
        printf("La palabra %s es palindroma\n",v);
    return 0;
}
int esPalindroma (const char *v)
{
    int log = strlen(v);
    for (int i = 0; i < log/2; i++){
        if (v[i] != v[log -1 -i]){
            return 0;
        }
    }
    return 1;
}
int esPalindroma (const char *v)
{

}
