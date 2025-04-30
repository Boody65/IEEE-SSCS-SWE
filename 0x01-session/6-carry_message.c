#include <stdio.h>

void print_message(char *msg);

int main(void){
    char string[25] = "hi, ahmed";
    // printf("Enter: ");
    // scanf("%c", &string);
    print_message(string);

    return 0;
}

void print_message(char *msg){
    printf("%s\n", msg);
}