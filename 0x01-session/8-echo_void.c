#include <stdio.h>

void echo(int n);

int main(void){
    echo(9);

    return 0;
}

void echo(int n){
    if(!(n == 0)){
        printf("%d: Echo...\n", n);
        echo(n - 1);
    }
}