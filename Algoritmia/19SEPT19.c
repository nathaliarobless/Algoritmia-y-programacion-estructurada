#include <stdio.h>

int main(){
    int x;
    int y=3;
    for(x=0;x<11;x+=10){
        y++;
        printf("%d\n",x);
        y+=34;
    }
    printf("%d\n",y);

return 0;
}
