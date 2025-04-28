#include "_isalpha.h"
#include <stdio.h>

int main(void){
    char c;
    scanf("%c", &c);

    if(_isalpha(c)){
        printf("is alpha\n");
    }
    else if(!_isalpha(c)){
        printf("not alpha\n");
    }
    return 0;
}