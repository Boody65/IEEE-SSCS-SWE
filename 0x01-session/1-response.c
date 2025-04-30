#include <stdio.h>

int is_response_detected(int strength);

int main(void){
    int strength;
    printf("Enter the strength value: ");
    scanf("%d", &strength);
    if(is_response_detected(strength)){
        printf("a response is detected\n");
    }
    else{
        printf("a response is not detected\n");
    }

    return 0;
}

int is_response_detected(int strength){
    if(strength > 50){
        return 1;
    }
    else{
        return 0;
    }
}