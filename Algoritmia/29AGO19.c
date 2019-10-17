#include <stdio.h>

int main () {

int a,b,c,d,e;
a=1;
b=2;
c=3;

scanf ("%d %d", &d, &e);
printf ("El valor de a es: %d y su direccion es: %x\n", a, &a);
printf ("El valor de b es: %d y su direccion es: %x\n", b, &b);
printf ("El valor de c es: %d y su direccion es: %x\n", c, &c);
printf ("El valor de d es: %d y su direccion es: %x\n", d, &d);
printf ("El valor de e es: %d y su direccion es: %x\n", e, &e);

return 0;
}
