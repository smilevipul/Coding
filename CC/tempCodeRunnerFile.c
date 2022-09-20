#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, n, x, store, count = 0;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d\n", &n, &x);
        int A[n];
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &A[i]);
        }
        for (int j = 1; j <= n; j++)
        {
            if (A[j] < x)
            {
                store =j;
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d",0);
        }
        else
            printf("%d",(store+1));
    }
    return 0;
}
