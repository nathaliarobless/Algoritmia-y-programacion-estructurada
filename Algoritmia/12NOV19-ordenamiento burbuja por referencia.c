#include <stdio.h>

int funcion1(int arreglo[], int n){
int i,j;
for(i=1;i<n;i++){
    for(j=0;j<n-1;j++){
        if(arreglo[j]>arreglo[j+1]){
            int aux=arreglo[j];
            arreglo[j]=arreglo[j+1];
            arreglo[j+1]=aux;
        }
    }
}
}

int main(){
int n,i,j,x,aux;
printf("Ingrese la dimension del arreglo: ");
scanf("%d",&n);

int arreglo[n];
for(x=0;x<n;x++){
    scanf("%d",&arreglo[x]);
}



return 0;
}


