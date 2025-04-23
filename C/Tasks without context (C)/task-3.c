#include <stdio.h>

int main(void){
    char c;
    scanf("%c", &c);
    if(c >= 65 && c <= 90)
    {
        printf("UPPERCASE\n");
    }
    else if(c >= 97 && c <= 122)
    {
        printf("LOWERCASE\n");
    }
    else{
        printf("NOT AN ALPAHBET\n");
    }

    return 0;
}