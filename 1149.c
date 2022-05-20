#include <stdio.h>
int main()
{
    int a, n, sum = 0, i;
    scanf("%d %d", &a, &n);
    while (n == 0 || n < 0)
        scanf("%d", &n);
    int flag = n;
    for (i = a, flag = 0; flag < n; i++)
    {
        sum += i;
        flag++;
    }
    printf("%d\n", sum);

    return 0;
}
