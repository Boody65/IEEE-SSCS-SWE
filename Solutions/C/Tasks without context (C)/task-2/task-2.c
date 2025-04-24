#include "_putchar.h"

int main(void){
    for(int i = 0; i < 5; i++){
        for(int j = 97; j <= 122; j++)
        {
            _putchar(j);
        }
        _putchar('\n');
    }

    return 0;
}