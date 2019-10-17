#include <stdio.h>

int main(){
int aux = 0;
int a;
    printf("Ingrese un numero: ");
    scanf("%d",&a);
    aux+=a;

    while(a!=0){
            printf("Ingrese un numero: ");
            scanf("%d",&a);
            printf("\n");
    }
    printf("%d", aux);

return 0;
}
