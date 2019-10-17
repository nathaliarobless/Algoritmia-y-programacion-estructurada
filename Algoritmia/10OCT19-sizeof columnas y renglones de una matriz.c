#include <stdio.h>

int main (){

int arreglo[3][3];

//
int r=sizeof(arreglo)/sizeof(arreglo[0]);
int c=sizeof(arreglo[0])/sizeof(int);
printf("%d\t",r);
printf("%d",c);

return 0;
}
