// structure padding and packing

#include <stdio.h>
#pragma pack(1) // for enabling  packing feature
struct abc
{
    char a;
    char c;
    int b;
    double d;
};

void main()
{
    struct abc M1;
    printf("%d", sizeof(M1));
}