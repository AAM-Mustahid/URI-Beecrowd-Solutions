#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, j, sn;
    while (1)
    {
        cin >> n; // array size
        int arr[n][n];
        if (n == 0)
            break;

        /* Initialize part*/
        int sqn = n / 2;
        if (n % 2 == 1)
            sqn++;
        int a = 0, b = n;
        for (sn = 1; sn <= sqn; sn++)
        {
            for (i = a; i < b; i++)
            {
                for (j = a; j < b; j++)
                {
                    arr[i][j] = sn;
                }
            }
            a++;
            b--;
        }

        /* Printing part*/

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                    cout << setfill(' ') << setw(3) << arr[i][j];
                else
                    cout << setfill(' ') << setw(4) << arr[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}