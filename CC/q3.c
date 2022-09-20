#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, n, x, store, count = 0;
    scanf("%d\n", &t);
    for (int j = 0; j < t; j++)
    {
        scanf("%d %d", &n, &x);
        printf("\n");
        int A[n];
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &A[j]);
        }
        for (int j = 1; j <= n; j++)
        {
            if (x > A[j])
            {
                store = j;
                count++;
            }
        }
        if (count == 0)
        {
            printf("0\n");
        }
        else
            printf("%d\n", store);
    }
    return 0;
}
 