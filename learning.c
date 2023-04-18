#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(;;){
        if(a>0){
            a-=1;
            printf("%d\n", a);
        }
        else if(a==0){
            break;
        }
    }
    
    return 0;
}

