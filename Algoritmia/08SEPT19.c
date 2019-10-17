#include <stdio.h>

int main (){

int num=0,x=0,y=0;
while (num<=10){
    while (x<=1){
        while (y<=50){
            printf("%d Hola\n", y);
            y++;
        }
        y=0;
        x++;
    }
    num=0;
    num++;
}


return 0;
}
