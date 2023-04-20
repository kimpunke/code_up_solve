#include <stdio.h>

int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    while(1)
    {
        if(a>b)
        {
            if(a==b)
        {
            printf("%d ", b);
            break;
        }
        else
        {
            printf("%d ", b);
            b+=1;
        }
        }
        else
        {
            if(a==b)
            {
                printf("%d ", a);
                break;
            }
            else
            {
                printf("%d ", a);
                a+=1;
            }
        }

    }

    return 0;
}

