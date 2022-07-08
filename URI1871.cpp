#include <iostream>
#include <string>
using namespace std;
int main()
{
    int m, n, sum;
    while (cin >> m >> n && m != 0 && n != 0)
    {

        sum = m + n;

        int ans[20];
        int i, rev;
        for (i = 0; sum != 0; i++)
        {
            ans[i] = sum % 10;
            sum /= 10;
        }
        for (i = i - 1; i >= 0; i--)
        {
            if (ans[i] != 0)
                cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}