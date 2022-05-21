#include <stdio.h>
int main()
{
    double i, j;
    int flag = 0;
    for (i = 0; i < 2.0; i += .2)
    {
        if (flag == 5)
            flag = 0;
        for (j = 1; j <= 3; j++)
        {
            if (flag == 0)
                printf("I=%.0lf J=%.0lf\n", i, i + j);
            else if (i == 2.0)
                printf("I=%0.lf j=%.0lf\n", i, i + j);
            else
                printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
        flag++;
    }
    return 0;
}
