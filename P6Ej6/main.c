#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.141592
#define AREA_CIRCULO(r) PI*r*r
#define MAX(a,b) (a > b) ? a : b
#define DEBUG 0

int main()
{
//    int x= 15,y= 0;
//    while (x<50){
//        #ifdef DEBUG
//            printf("x= %d", x);
//            y= y+1;
//        #endif
//        x++;
//        printf("x++ %d\n",x);
//     }
//    int a = 23, b = 19;
//    printf("El mayor entre %d y %d es %d",a,b,MAX(a,b));
    srand(time(NULL));
    for (int i=0; i<10; i++){
        int num = rand()%20 + 1;
        printf("Radio = %d Area %.3f\n",num, AREA_CIRCULO(num));
    }

    return 0;
}
