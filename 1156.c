#include <stdio.h>
int main()
{
    double i, b = 1, sum = 0;
    double c;
    for (i = 1; i <= 39; i += 2)
    {
        c = i / b;
        sum += c;
        b *= 2;
    }
    printf("%.2lf\n", sum);

    return 0;
}
