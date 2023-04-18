#include <stdio.h>

int main(){
    char a;
    for(;;){
        scanf("%c", &a);
        if(a="q"){
            printf("q\n");
            break;
        }
        else{
            printf("%c\n", a);
        }
        
    }

    
    return 0;
}

