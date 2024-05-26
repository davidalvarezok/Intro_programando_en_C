#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[10] = {10,20,30,40,50,60,70,80,90,100};
    int * p = vector;
    for (int i=0; i<10; i++){
        *p += 3;
        printf("Vector[%d] = %d\n",i,*p);
        p++;
    }
    return 0;
}
