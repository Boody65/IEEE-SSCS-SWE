#include "_putchar.h"

int main(void){
    for(int i = 97; i <= 122; i++)
    {
        if(i == 113){
            continue;
        }
        _putchar(i);
    }
    for(int i = 90; i >= 65; i--)
    {
        if(i == 81){
            continue;
        }
        _putchar(i);
    }

    _putchar('\n');
    return 0;
}