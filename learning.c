#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    while(1){
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
