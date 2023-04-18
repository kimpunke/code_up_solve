#include <stdio.h>

int main(){
    int n;
    for(;;){
        scanf("%d", &n);
        
        if(n==0) break; 
        else printf("%d\n", n);
    }

    return 0;
    
}
