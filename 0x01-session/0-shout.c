#include <stdio.h>

void repeat_meassage(int n);

int main(void)
{
    repeat_meassage(9);

    return 0;
}

void repeat_meassage(int n){
    for(int i = 0; i < n; i++){
        printf("%d: Hello, world.\n", i + 1);
    }
}