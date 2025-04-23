#include "_putchar.h"

int main(void){
    for(int i = 48; i < 57; i++){
        for(int j = 48; j <= 57; j++){
            if(i == j || i > j){
                continue;
            }
            if(!(j == 49))
            {
                _putchar(',');
                _putchar(' ');
            }
            _putchar(i);
            _putchar(j);
        }
    }
    _putchar('\n');
    return 0;
}



/*
no same digit
the first digit is smaller than the 2nd
*/