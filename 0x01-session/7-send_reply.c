#include <stdio.h>

char *get_reply();

int main(void){
    printf("the returned string: %s\n", get_reply());

    return 0;
}

char *get_reply(){
    char *string = "return string";
    return string;
}