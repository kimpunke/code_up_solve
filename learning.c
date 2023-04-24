#include <stdio.h>

int main(){

    int a,m,d,t,i;
    scanf("%d %d %d %d", &a, &m, &d, &t);
    
    for(i=1;i<t;i++)
    {
        a=(a*m)+d;
    }
    printf("%d",a);


    return 0;
}

