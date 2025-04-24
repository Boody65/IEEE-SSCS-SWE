#include <stdio.h>

int main(void)
{
    int x;
    printf("enter a number from 1 to 9: ");
    scanf("%d", &x);

    printf("\"%c\"", x);
    return 0;
}

/*
1 = start of heading
2 = start of text
3 = end of text
4 = end of transmission
5 = enquiry
6 = acknowledge
7 = bell, alert
8 = backslash
9 = horizontal tab
*/