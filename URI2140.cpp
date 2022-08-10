#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int note = 0;
    int diff;

    while (m != 0 && n != 0)
    {
        diff = n - m;
        if (diff >= 100)
        {
            diff -= 100;
            note++;
        }
        if (diff >= 50 && diff < 100)
        {
            diff -= 50;
            note++;
        }
        if (diff >= 20 && diff < 50)
        {
            diff -= 20;
            note++;
        }
        if (diff >= 10 && diff < 20)
        {
            diff -= 10;
            note++;
        }
        if (diff >= 5 && diff < 10)
        {
            diff -= 5;
            note++;
        }
        if (diff >= 2 && diff < 5)
        {
            diff -= 2;
            note++;
        }
        if (note == 2 && diff == 0)
        {
            cout << "possible" << endl;
        }
        else
            cout << "impossible" << endl;
        cin >> m >> n;
        note = 0;
    }

    return 0;
}