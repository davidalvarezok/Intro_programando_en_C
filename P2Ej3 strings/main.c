#include <stdio.h>
#include <stdlib.h>

char *reemplazar(char *, char, char);
size_t strlen(char *);
int main()
{
    char cadena[] = "Holanda";
    int n = strlen(cadena);
    printf("La longitud de la cadena %d\n",n);
    char *ptr; ptr = cadena;
    printf("%s\n",cadena);
    ptr = reemplazar(ptr,'a','x');
    printf ("%s\n",cadena);
    return 0;
}
char *reemplazar (char *cadena, char c, char b)
{
    while (*cadena != '\0') {
        if (*cadena == c) {
            *cadena = b;
        }
        cadena++;
    }
    return cadena;
}
size_t strlen (char *cadena)
{
    size_t cant = 0;
    while (*cadena != '\0'){
        cadena++;
        cant++;
    }
    return cant;
}
