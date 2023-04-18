#include <stdio.h>

int main(){
    int n,m;
    int i,j; //for문을 위한 변수 선언
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d %d\n", i, j);
        }
    }
    
    return 0;
}

