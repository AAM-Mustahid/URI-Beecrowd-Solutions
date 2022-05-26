#include <iostream>
using namespace std;

int main()
{
    int i, t;
    double sol, n;
    while (cin >> t)
    {
        sol = 12.00;
        for (i = 0; i < t; i++)
        {
            cin >> n;
            if (n < sol)
                sol = n;
        }
        printf("%.2lf\n", sol);
    }

    return 0;
}
