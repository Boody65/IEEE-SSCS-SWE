#include "_putchar.h"
#include <stdio.h>

int main(void){
    int input;
    scanf("%d", &input);
    if(!(input > 15 || input < 0)){
        for(int i = 0; i <= input; i++){
            for(int j = 0; j <= input; j++){
                int num = i * j;
                int x = 0;
                int y = 0;
                int z = 0;
                if(num > 99)
                {
                    z = num % 10;
                    y = (num % 100) / 10;
                    x = num / 100;
                    _putchar(x + 48);
                    _putchar(y + 48);
                    _putchar(z + 48);
                }
                else if(num > 9)
                {
                    z = num % 10;
                    y = num / 10;
                    _putchar(y + 48);
                    _putchar(z + 48);
                }
                else{
                    _putchar(num + 48);
                }
                if(!(j == input))
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
    return 0;
}



/*
i * j = num
9 * 9 = 81
w = num /10
x = num % 10

i  *  j = xyz
10 * 11 = 110
*/