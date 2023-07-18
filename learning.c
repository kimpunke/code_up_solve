#include <stdio.h>

int main()
{
    int i,t,n;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        for(t=0; t<i; t++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}