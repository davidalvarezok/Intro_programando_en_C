#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[] = "tronador";
    int frecuencia[26] = {0};
    int n = strlen(palabra);
    for (int i = 0; i < n; i++){
        if (palabra[i] >= 'a' && palabra[i] <= 'z'){
            frecuencia[palabra[i] - 'a']++;
        }
    }
    for (int j = 0; j < 26; j++){
        if (frecuencia[j] > 0){
            printf("La letra %c aparece %d\n",'a' + j, frecuencia[j]);
        }
    }
    return 0;
}
