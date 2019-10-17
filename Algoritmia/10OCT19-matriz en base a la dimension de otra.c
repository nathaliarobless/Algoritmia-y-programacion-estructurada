#include <stdio.h>

int main (){

int arreglo[12][89];

int r=sizeof(arreglo)/sizeof(arreglo[0]);
int c=sizeof(arreglo[0])/sizeof(int);
printf("%d\t",r);
printf("%d\n",c);

double arreglo2[r][c];
int x,y;
for(x=0;x<r;x++){
    for(y=0;y<c;y++){
    arreglo2[x][y]=(double)(x*y)/12;
    }
}

printf("%f", arreglo2[5][10]);

return 0;
}
