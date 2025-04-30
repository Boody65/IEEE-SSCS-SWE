#include <stdio.h>

void boost_signal(int n);
int signal_strength = 0;

int main(void){
    printf("global signal_strength before boost= %d\n", signal_strength);
    boost_signal(60);
    printf("global signal_strength after boost = %d\n", signal_strength);

    return 0;
}

void boost_signal(int n){
    int signal_strength = 100;
    printf("booster: signal strength = %d\n", n);
}