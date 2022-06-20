#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double M[12][12], sum = 0, avg;
    char t;
    cin >> t;
    int i, j, k, l = 11, r = 7, u;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    for (u = 1; u <= 10; u++)
    {
        if (u <= 5)
        {
            for (i = 11; i >= l; i--)
            {
                sum += M[u][i];
            }
            l--;
        }
        else if (u >= 6)
        {
            for (i = 11; i >= r; i--)
            {
                sum += M[u][i];
            }
            r++;
        }
    }

    if (t == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (t == 'M')
    {
        avg = sum / 30.0; 
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}
