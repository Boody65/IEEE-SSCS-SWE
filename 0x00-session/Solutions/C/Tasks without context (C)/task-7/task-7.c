#include "_putchar.h"

int main(void){
    for(int i = 48; i < 56; i++){
        for(int j = 48; j < 57; j++){
            for(int k = 48; k <= 57; k++){
                if((i == j || j == k) || (i > j || j > k)){
                    continue;
                }
                if(!(k == 50))
                {
                    _putchar(',');
                    _putchar(' ');
                }
                _putchar(i);
                _putchar(j);
                _putchar(k);
            }
        }
    }
    _putchar('\n');
    return 0;
}



/*
no same digit
the first digit is smaller than the 2nd
the 2nd smaller than the 3rd
*/