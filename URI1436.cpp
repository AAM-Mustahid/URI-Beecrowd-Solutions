#include <iostream>
using namespace std;
int main()
{
    int t, n, i, j;
    cin >> t;
    for (j = 1; j <= t; j++)

    {
        cin >> n;
        int p[n];
        for (i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        cout << "Case " << j << ": " << p[n / 2] << endl;
    }
                     
    return 0;
}