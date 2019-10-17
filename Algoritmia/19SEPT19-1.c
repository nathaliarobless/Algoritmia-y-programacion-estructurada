#include <stdio.h>

int main(){
    int x;
    int y=2;
    for(x=0;x<4;x+=1){
        y=y*2;
        printf("%d\n",x);
        y*=34;
    }
    printf("%d\n",y);

return 0;
}
