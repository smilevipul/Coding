#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, n, m, tyre;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", (n * 2 + m * 4));
    }

    return 0;
}
