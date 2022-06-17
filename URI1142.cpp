#include <iostream>
using namespace std;
int main()
{
    int t, i, a = 1, b = 4, tl;
    cin >> tl;
    for (t = 1; t <= tl; t++)
    {

        for (i = a; i <= b; i++)
        {

            if (i % 4 == 0)
                cout << "PUM" << endl;

            else
                cout << i << " ";
        }
        a += 4;
        b += 4;
    }

    return 0;
}