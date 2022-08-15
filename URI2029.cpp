#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double v, d;
    while (cin >> v >> d)
    {
        double r = d / 2;
        double area = 3.14 * r * r;
       double height = v / area;
        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}