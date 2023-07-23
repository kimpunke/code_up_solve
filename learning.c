#include <stdio.h>

int main (){
    int n,i,j,count;
    scanf("%d", &n);
    for(i=n; i>=1; i--){
        count=i;
        for(j=1; j<=i; j++){
            printf("%d ",count);
        }
        printf("\n");
    }
    
    
    
    return 0;
}