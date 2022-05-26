#include <iostream>
using namespace std;
int main()
{
    int t, i, a, b, aw = 0, bw = 0;
    while (cin >> t && t != 0)
    {
        aw = 0, bw = 0;
        for (i = 1; i <= t; i++)
        {
            cin >> a >> b;
            if (a > b)
                aw++;
            if (a < b)
                bw++;
        }
        cout << aw << " " << bw << endl;
    }

    return 0;
}
