#include<stdio.h>
// tail recursion

// void display(int a)
// {
//     if(a<1)
//     return;
//     else
//     printf("%d",a);
//     display(a/2);
//     printf("%d",a);
// }

// void display(int a)
// {
//     if(a<1)
//     return;
//     else
//     printf("%d",a);
//     display(a/2);
//     printf("%d",a);
// }

// // Non tail Recursion

// int main()
// {
//     display(10);
// }

// non tail ex2
int display(int a)
{
    if(a<1)
    return;
    else
    return 1+ display(a/2);
}
void main()
{
    int x;
    x=display(10);
    printf("%d",x);
}