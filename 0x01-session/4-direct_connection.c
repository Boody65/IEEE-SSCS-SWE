#include <stdio.h>

int main(void){
    int variable_signal = 98;
    int *ptr = &variable_signal;
    printf("the address = %p, the value = %d\n", ptr, *ptr);

    return 0;
}