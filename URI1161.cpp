#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    long long product1,product2;
    long long sum = 0;
    while (cin >> m >> n)
    {
        for (i = m; i > 0; i--)
        {
            product1 *= i;
        }

        for (j = n; j > 0; j--)
        {
            product2 *= j;
        }

        sum = product1 + product2;
        cout << sum << endl;
        product1 = product2 = 1;
    }

    return 0;
}