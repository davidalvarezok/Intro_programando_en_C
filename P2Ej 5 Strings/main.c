#include <stdio.h>
#include <stdlib.h>

void strcpyy (char *c1, const char *c2);
int main()
{
    char cadena1 [] = "Holanda";
    char cadena2 [] = "Senior";
    printf("%s\n",cadena1);
    printf("%s\n",cadena2);
    strcpyy(cadena1,cadena2);
    printf("%s\n",cadena1);
    printf("%s\n",cadena2);
    return 0;
}
void strcpyy (char *c1, const char *c2)
{
    char *aux = c1;
    while (*c2 != '\0'){
        *aux++ = *c2++;
    }
    *aux = '\0';
    c1 = aux;
}
