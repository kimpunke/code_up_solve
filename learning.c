#include <stdio.h>

int main(){

    int a,b,i;
    scanf("%d", &a);
    for(i=1;;i++)
    {
        if(a>b)
        {
            b+=i;
        }
        else
        {
            printf("%d", b);
            break;
        }
    }


    return 0;
}

