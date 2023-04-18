#include <stdio.h>

int main(){
    int n, v;
    scanf("%d", &v);
    while(1){
        scanf("%d", &n);
        printf("%d\n", n);
        v-=1;
        if (v==0){
            break;
        }
    }
    
    return 0;
    
}
