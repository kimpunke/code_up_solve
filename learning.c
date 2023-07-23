#include <stdio.h>


int main(){
    int n,i,j,count;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        count=1;
        for(j=n-i; j<n; j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    
    
    
    
    
    return 0;
    
    
}