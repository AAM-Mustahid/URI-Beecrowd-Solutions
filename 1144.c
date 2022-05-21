#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k, l, m;
    for (i = 1; i <= n; i++)
    {
        j = i * i;
        k = j * i;
        printf("%d %d %d\n", i, j, k);
        l = j+1;
        m = k+1;
        printf("%d %d %d\n", i, l, m);
    }

    return 0;
}
