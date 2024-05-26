#include <stdio.h>
#include <stdlib.h>
struct pun3D {
    float x;
    float y;
    float z;
};
typedef struct pun3D punto3D;
int main()
{
    punto3D v[4];
    printf("Tamanio sizeof(struct pun3D) %zu bytes\n",sizeof(struct pun3D));
    printf("Tamanio sizeof(punto3D) %zu bytes\n",sizeof(punto3D));
    printf("Tamanio sizeof(v) %zu bytes\n",sizeof(v));
    return 0;
}
