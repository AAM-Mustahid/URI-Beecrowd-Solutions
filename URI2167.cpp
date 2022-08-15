#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool x = true;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            x = false;
            cout << i + 2 << endl;
            break;
        }
    }
    if (x)
        cout << "0" << endl;

    return 0;
}