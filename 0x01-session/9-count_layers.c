#include <stdio.h>

int sum_layers(int n);

int main(void){
    int n;
    printf("Enter the n value: ");
    scanf("%d", &n);
    int result = sum_layers(n);
    printf("the result = %d\n", result);

    return 0;
}

int sum_layers(int n){
    if(n == 0){
        return 0;
    }
    return (n + sum_layers(n - 1));
}