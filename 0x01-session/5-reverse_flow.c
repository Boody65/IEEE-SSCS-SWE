#include <stdio.h>

void swap(int *a, int *b);

int main(void){
    int x = 9;
    int y = 3;
    printf("before swap x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("after swap x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}