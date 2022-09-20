#include<stdio.h>

union L114Union
{
    int a;
    char b;
    float c;

};

void main()
{
    union L114Union U;
    union L114Union *ptr=&U;
    
    U.a=1;
    U.b='v';
    U.c=98.8;
    printf("a=%d",ptr->a);
    printf("\na=%c",ptr->b);
    printf("\na=%f",ptr->c);

}