#include <stdio.h>
#include <stdlib.h>
#define ANOS 10
#define MESES 12

void menosPre (int [][MESES][30]);
void menorProm (int [][MESES][30]);
int main()
{
    int valor;
    int pre[ANOS][MESES][30] = {0};
    for (int a = 0; a < ANOS; a++){
        for (int m = 0; m < MESES; m++){
            for (int d = 0; d < 30; d++){
                printf("Ingrese precipitacion en mm: ");
                scanf("%d",&valor);
                pre[a][m][d] = valor;
            }
        }
    }
    menorProm(pre);
    menosPre(pre);
    return 0;
}
void menosPre (int P[][MESES][30])
{
    int menorMes, min = 9999, acumu = 0;
    for (int a = 0; a < ANOS; a++){
        for (int m = 0; m < MESES; m++){
            for (int d = 0; d < 30; d++){
                acumu += P[a][m][d];
            }
            if (acumu < min){
                min = acumu;
                menorMes = m;
            }
            acumu = 0;
        }
        printf("Anio %d el mes con menor precipitacion %d", a, menorMes);
        min = 9999;
    }
}
void menorProm (int P[][MESES][30])
{
    double prom = 0, minProm = 9999; int total = 0; int minAnio = ' ';
    for (int a = 0; a < ANOS; a++){
        for (int m = 0; m < MESES; m++){
            for (int d = 0; d < 30; d++){
                total += P[a][m][d];
            }
        }
        prom = total/12.0;
        if (prom < minProm){
            minProm = prom;
            minAnio = a;
        }
        total = 0;
    }
    printf("El anio con el minimo promedio fue &d", minAnio);
}
