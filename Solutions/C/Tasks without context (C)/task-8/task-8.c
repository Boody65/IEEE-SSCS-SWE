#include "_putchar.h"

int main(void){
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            int num = i * j;
            int x = 0;
            int y = 0;
            if(num > 9)
            {
                x = num / 10;
                y = num % 10;
                _putchar(x + 48);
                _putchar(y + 48);
            }
            else{
                _putchar(num + 48);
            }
            if(!(j == 9))
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
    _putchar('\n');
    return 0;
}



/*
i * j = num
9 * 9 = 81
x = num /10
y = num % 10
*/