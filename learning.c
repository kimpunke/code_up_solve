#include <stdio.h>

int main(){
    int n,m;
    scanf("%x", &n);
    for(m=1;m<=15;m++){
        printf("%X*%X=%X\n", n, m,n*m);
    }
    
    return 0;
}

