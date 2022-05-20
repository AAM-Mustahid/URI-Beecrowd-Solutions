#include <stdio.h>
int main()
{
    int x, z, flag = 0, sum = 0, i;
    scanf("%d", &x);
    do
    {
        scanf("%d", &z);
    } while (x >= z);
    for (i = x; sum <= z; i++)
    {
        sum += i;
        flag++;
    }
    printf("%d\n", flag);

    return 0;
}
