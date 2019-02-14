#include <stdio.h>


int main()
{
    int i = 1;
    short s = 2;
    long l = 3;
    char c = 4;

    float f = 1.f;
    double d = 1.;

    int* pi = &i;

    printf("i=%d, sizeof(i) is: %ld, address: 0x%lx\n", i, sizeof(i), (long)&i);
    printf("s=%d, sizeof(s) is: %ld\n", s, sizeof(s));
    printf("l=%ld, sizeof(l) is: %ld\n", l, sizeof(l));
    printf("c=%d, sizeof(c) is: %ld\n", c, sizeof(c));
    
    printf("f=%f, sizeof(f) is: %ld\n", f, sizeof(f));
    printf("d=%f, sizeof(d) is: %ld\n", d, sizeof(d));

    printf("pi=0x%lx, sizeof(pi) is: %ld\n", (long)pi, sizeof(pi));

    
    return 0;
}
