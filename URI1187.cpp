#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double M[12][12], sum = 0, avg;
    char t;
    cin >> t;
    int i, j, k, l = 1, r = 10;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    for (k = 0; k < 5; k++)
    {
        for (i = l; i <= r; i++)
        {
            sum += M[k][i];
        }
        l++;
        r--;
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