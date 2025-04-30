#include <stdio.h>

int is_strong_signal(int strength);
void check_signal(int strength);

int main(void){
    int strength;
    printf("Enter the signal strength : ");
    scanf("%d", &strength);
    check_signal(strength);

    return 0;
}

int is_strong_signal(int strength){
    if(strength > 50){
        return 1;
    }
    else{
        return 0;
    }
}

void check_signal(int strength){
    if(is_strong_signal(strength)){
        printf("Strong signal detected.\n");
    }
    else{
        printf("No signal detected.\n");
    }
}