#include <stdio.h>

int main(){

int x=9;
int *px=&x;

printf("Los valores: %d %x\n",x,px);
printf ("Las direcciones: %x %x\n",&x,&px);

return 0;
}
