#include <stdio.h>

int main(){

int arreglo[4][3],i,j,a=0,b=0,c=0,d=0;

printf("Ingrese matriz 4x3");
for(i=0;i<3;i++){
    printf("\nIngrese la columna %d:\n",i+1);
    for(j=0;j<4;j++){
        scanf("%d",&arreglo[j][i]);
    }
}

printf("\nLa matriz original es:\n");
for (i=0;i<4;i++){
    printf("(");
    for(j=0;j<3;j++){
        printf("   %d   ",arreglo[i][j]);
    }
    printf(")\n");
}

a=arreglo[0][0]+arreglo[1][1]+arreglo[2][2];
printf("\nSuma de la diagonal principal: %d\n",a);
for(i=0;i<4;i=i+3){
    for(j=0;j<3;j++){
        b=b+arreglo[i][j];
    }
}
printf("\nSuma de la primera y ultima fila: %d\n",b);

c=arreglo[3][3]+arreglo[2][2]+arreglo[1][1];
printf("\nSuma de la diagonal secudaria: %d\n",c);

for(i=0;i<4;i=i+3){
    for(j=0;j<4;j++){
        d=d+arreglo[j][i];
    }
}
d=arreglo[0][0]+arreglo[1][0]+arreglo[2][0]+arreglo[3][0]+arreglo[0][2]+arreglo[1][2]+arreglo[2][2]+arreglo[3][2];
printf("\nSuma de la primera y ultima columna: %d\n",d);

return 0;
}
