#include <stdio.h>

int main(){
    char a;
    for(;;){
        scanf("%c ", &a);
        if(a="q"){
            printf("%c\n", a);
            break;
        }
        else{
            printf("%c\n", a);
        }
        
    }

    
    return 0;
}

