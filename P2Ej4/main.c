#include <stdio.h>
#include <stdlib.h>
#define COL 2
void transpuesta (int m[][COL]);
int main()
{
    int matriz[][COL] = {{1,2},{3,4}};
    transpuesta(matriz);
    return 0;
}

void transpuesta (int m[][COL])
{
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }
}
