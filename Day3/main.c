#include <stdio.h>

int main()
{
    unsigned char pos_x = 4;
    signed char neg_x = -4;

    printf("pos_x is: %d\n", pos_x);
    printf("neg_x is: %d\n", neg_x);

    printf("pos_x div 2 is: %d\n", pos_x >> 1);
    printf("neg_x div 2 is: %d\n", neg_x >> 1);

    return 0;
}
