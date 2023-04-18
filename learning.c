#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d", &a);
    for(b=1;c>=a;b++){
        if(c<=b){
            c+=b;
        }
        else{
            printf("%d",b);
        }
        
    }

    return 0;
}

