#include <stdio.h>

int main(){
    int a;
    while(1){
        scanf("%d ",&a);
        if(a!=0){
            printf("%d\n", a);
        }
        if(a==0){
            break;
        }
    }
    
    return 0;
    
}
