#include <stdio.h>

int main()
{
    int i, t;
    double sol, n;
    while (scanf("%d", &t) != EOF)
    {
        sol = 12.00;
        for (i = 0; i < t; i++)
        {
            scanf("%lf", &n);
            if (n < sol)
                sol = n;
        }
        printf("%.2lf\n", sol);
    }

    return 0;
}
