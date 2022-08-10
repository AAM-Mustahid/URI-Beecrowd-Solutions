#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, a, d, g;
    cin >> t;
    while (t--)
    {
        cin >> a >> d >> g;
        if ((a >= 200 && a <= 300) && d >= 50 && g >= 150)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    } 
    

    return 0;
}
