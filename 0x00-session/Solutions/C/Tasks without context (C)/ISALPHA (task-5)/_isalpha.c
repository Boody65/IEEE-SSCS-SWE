#include <unistd.h>
#include "_isalpha.h"

int _isalpha(char c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        return 1;
    }
    else{
        return 0;
    }
}