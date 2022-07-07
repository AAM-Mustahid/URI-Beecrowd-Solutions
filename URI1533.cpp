#include <iostream>
using namespace std;
int main()
{
    int n, i, max1, max2, t, pos;
    while (cin >> t && t != 0)
    {
        int v[t];
        for (i = 0; i < t; i++)
        {
            cin >> v[i];
        }
        max1 = max2 = 0;
        for (i = 0; i < t; i++)
        {
            if (v[i] > max1)
            {

                max1 = v[i];
            }
        }
        for (i = 0; i < t; i++)

        {
            if(v[i] > max2 && v[i] != max1)
            {
                max2 = v[i];
                pos = i;
            }
        }
        cout << pos + 1 << endl;
    }

    return 0;
}