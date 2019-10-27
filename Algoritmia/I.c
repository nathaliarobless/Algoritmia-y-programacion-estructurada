#include <stdio.h>

int main(){

int arreglo1[5][3],arreglo2[5][3],i,j,aux;
printf("Ingrese la matriz 5x3");

for(i=0;i<3;i++){
    printf("\nIngrese la columna %d:\n",i+1);
    for(j=0;j<5;j++){
        scanf("%d",&arreglo1[j][i]);
    }
}
for(i=0;i<5;i++){
    for(j=0;j<3;j++){
        arreglo2[i][j]=arreglo1[i][j];
    }
}
for(i=0;i<5;i++){
    for(j=0;j<3;j=j+2){
      aux=arreglo2[i][j];
      aux=aux*aux;
      arreglo2[i][j]=aux;
    }
}
for(i=0;i<5;i++){
    aux=arreglo2[i][1];
    aux=(aux*aux*aux);
    arreglo2[i][1]=aux;
}

printf("\nLa matriz original es:\n");
for (i=0;i<5;i++){
    printf("(");
    for(j=0;j<3;j++){
        printf("   %d   ",arreglo1[i][j]);
    }
    printf(")\n");
}

printf("\nLa matriz resultante es:\n");
for (i=0;i<5;i++){
    printf("(");
    for(j=0;j<3;j++){
        printf("   %d   ",arreglo2[i][j]);
        }
    printf(")\n");
}

return 0;
}
