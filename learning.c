#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(;;){
        if(a>0){
            printf("%d\n", a);
            a-=1;
        }
        else if(a==0){
            break;
        }
    }
    
    return 0;
}
