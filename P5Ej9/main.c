#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
#define DIM 2
struct player {
    char name[N];
    char apellido[N];
    int age;
    int cantTit;
    int ranking;
    float fortune;
};
int actualizar (char *, char *, int, FILE *);
int main() /*LA FUNCION DUPLICA EL ULTIMO DATO NO LO SOBREESCRIBE*/
{
    FILE *arch; struct player *p;
    char nameR[N], lastNameR[N], nameT[N], lastNameT[N];
    int Mranking = 20, Mtitulos = 0;

    arch = fopen("data", "w+b");
    if (!arch){
        printf("Error al crear el archivo binario.\n");
        return 1;
    }

    p = (struct player *)malloc(sizeof(struct player));
    for (int i = 0; i<DIM; i++){
        printf("Nombre: "); scanf("%s",p->name);
        printf("Apellido: "); scanf("%s",p->apellido);
        printf("Edad: "); scanf("%d",&p->age);
        printf("Cantidad de Titulos: "); scanf("%d",&p->cantTit);
        printf("Ranking: "); scanf("%d",&p->ranking);
        printf("Fortuna: "); scanf("%f",&p->fortune);
        fwrite(p,sizeof(struct player),1,arch);
    }

    fseek(arch,0,SEEK_SET); //LLevo el puntero del archivo en el origen
    for (int j = 0; j<DIM; j++){
        fread(p,sizeof(struct player), 1,arch);
        printf("Datos: %s %s titulos %d ranking %d\n",p->name, p->apellido, p->cantTit, p->ranking);
        if (Mranking > p->ranking){
            strcpy(nameR,p->name);
            strcpy(lastNameR,p->apellido);
            Mranking = p->ranking;
            printf("Se actualizo %s %s ranking %d\n",nameR,lastNameR,Mranking);
        }
        if (Mtitulos < p->cantTit){
            Mtitulos = p->cantTit;
            strcpy(nameT,p->name);
            strcpy(lastNameT,p->apellido);
            printf("Se actualizo %s %s titulos %d\n",nameT,lastNameT,Mtitulos);
        }
    }

    printf("El jugador con mejor ranking %s %s\n",nameR, lastNameR);
    printf("El jugador con mas titulos %s %s\n",nameT,lastNameT);

    //Parte 2 del Ejercicio
    fseek(arch,0,SEEK_SET);  //Puntero en el inicio del archivo
    char name[N], lastName[N];
    int ranking;
    printf("Nombre: "); scanf("%s",name);
    while (strcmp(name,"ZZZ") != 0){
        printf("Apellido: "); scanf("%s",lastName);
        printf("Nuevo ranking: "); scanf("%d",&ranking);
        if (actualizar(name,lastName,ranking,arch)) {
            printf("Se modifico el ranking del jugador\n");
        } else {
            printf("Error jugador no encontrado\n");
        }
        printf("Nombre: "); scanf("%s",name);
        fseek(arch,0,SEEK_SET);
    }
    fclose(arch);
    return 0;
}

int actualizar (char * name, char * lastName, int ran, FILE *arch){
    struct player p; int cond = 1;

    printf("Ingreso a la funcion actualizar\n");
    fseek(arch,0,SEEK_SET); //Pongo el puntero en el origen
    while (fread(&p,sizeof(struct player),1,arch) == 1 && cond) {
        printf("Datos leidos en el WHILE %s %s\n",p.name,p.apellido);
        if (strcmp(p.name,name) == 0 && strcmp(p.apellido,lastName) == 0){
            printf("Ingreso en el if, el valor de ranking nuevo es %d\n",ran);
            fseek(arch,-((long)sizeof(struct player)),SEEK_CUR); //Muevo el puntero hacia atras para sobreescribir la estructura
            p.ranking = ran; //Actualizo el ranking
            printf("Los datos a actualizar %s %s ranking %d\n",p.name,p.apellido,p.ranking);
            fwrite(&p,sizeof(struct player),1,arch);
            cond = 0; //Condicion para salir del bucle
        }
    }
    return !cond;
}
