//***Bismillahir Rahmanir Rahim***
#include <stdio.h>
int main()
{
    char t[2];
    double m[12][12], sum = 0, avg;
    int i, j;
    scanf("%s", &t);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]); // input
    }
    int l = 11;
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < l; j++)
        {
            sum += m[i][j];
        }
        l--;
    }
    if (t[0] == 'S')
        printf("%.1lf\n", sum);
    else if (t[0] == 'M')
    {
        avg = sum / 66.0;
        printf("%.1lf\n", avg);
    }

    return 0;
}
