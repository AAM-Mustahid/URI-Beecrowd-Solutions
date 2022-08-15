#include <iostream>
#include <bits/stdc++.h>
#define PI 3.1415
using namespace std;
int main()
{
    int r, l, output;
    cin >> r >> l;
    int volume = 1.333333333* PI * (r * r * r);
    output = l / volume;

    cout << output << endl;

    return 0;
}
