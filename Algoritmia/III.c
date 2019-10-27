#include <stdio.h>

int main(){

float arreglo1[15][4],arreglo2[15][4],mayor=0,prom,aux;
int i,j,x,y,rep=0,aprob=0;

for(i=0;i<4;i++){
    x=0;
    printf("Ingresa las calificaciones del grupo %d\n",i+1);
    for(j=0;j<15;j++){
        x++;
        printf("Alumno %d: ",x);
        scanf("%f",&arreglo1[j][i]);
        if (arreglo1[i][j]<0||arreglo1[j][i]>10){
            printf("La calificacion no es valida");
            return 0;
        }
    }
}
for(j=0;j<4;j++){
    aux=0;
    for(i=0;i<15;i++){
        aux=aux+arreglo1[i][j];
    }
    aux=aux/15;
    printf("El promedio del grupo %d es: %f\n",j+1,aux);
}
for(i=0; i<15; i++){
    for(j=0; j<4; j++){
        for(x=0; x<15;x++){
            for(y=0; y<4; y++){
                if(arreglo2[i][j]>arreglo2[x][y]){
                    mayor=arreglo2[i][j];
                    arreglo2[i][j]=arreglo2[x][y];
                    arreglo2[x][y]=mayor;
                }
            }
        }
    }
}

printf("La mayor nota en general es: %f\n",arreglo2[0][0]);
for(i=0;i<4;i++){
    for(j=0;j<15;j++){
        printf("Todas las notas son: %f.2\n", arreglo1[j][i]);
        }
}
    for(i=0;i<4;i++){
            aprob=0;
            rep=0;
        for(j=0;j<15;j++){
            if(arreglo1[j][i]<6){
                rep++;
            }
        }
        printf("El numero de reprobados en el grupo %d es: %d\n",i+1,rep);
        aprob=15-rep;
        printf("Y el numero de aprobados es:%d\n",aprob);
    }

return 0;
}
