#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, *ptr;
    printf("Enter total number of values\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter values of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        
    }
    printf("Your entered values are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));

    }
}