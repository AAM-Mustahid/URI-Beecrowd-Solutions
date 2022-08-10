#include <iostream>
using namespace std;
int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    int i = 0;
    while (a[i] != '\0' && i < 10)
    {
        cout << a[i];
        i++;
    }
    i = 0;
    while (b[i] != '\0' && i < 10)
    {
        cout << b[i];
        i++;
    }
    i = 0;
    while (c[i] != '\0' && i < 10)
    {
        cout << c[i];
        i++; 
    }
    cout << endl;

    return 0;
}