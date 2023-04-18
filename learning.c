#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    while(1){
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

