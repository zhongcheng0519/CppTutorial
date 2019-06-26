#include "lib/liangxq.h"
#include <stdio.h>

int main()
{
    int x = 3;
    int y = 4;
    int z = add(x, y);
    printf("x=%d, y=%d, x+y=%d\n", x, y, z);
    return 0;
}
