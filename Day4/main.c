#include <stdio.h>

typedef char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long int64_t;
typedef unsigned long uint64_t;

typedef struct {
    char name[64];
    uint8_t gender;
    float score;
} Student_t;


#pragma pack(push, 1)
struct Motion {
    float x_axis;
    float y_axis;
    float z_axis;
    float b_axis;
    float c_axis;
    uint8_t online;
};
#pragma pack(pop)

int main()
{
    uint32_t x = 3;
    Student_t linmg;
    linmg.name[0]='l';
    linmg.name[1]='\0';

    linmg.gender = 0;
    linmg.score = 100.0f;

    struct Motion motion;

    printf("sizeof Motion is: %ld\n", sizeof(motion));
    return 0;
}

    
