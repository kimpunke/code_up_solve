#include <stdio.h>

int main(){

    int a,b,c,i=0;
    scanf("%d %d %d", &a, &b, &c);
    for(i=1; i < c; i++){
        a=a*b;
    }

    printf("%d", a);

    return 0;
}

