#include<stdio.h>
struct L118
{
    int a;
    float b;
    int c;

};

void main()
{
    struct L118 q={.b=1,.c=10,.a=15};
    printf("%d %f %d",q.a,q.b,q.c);
}