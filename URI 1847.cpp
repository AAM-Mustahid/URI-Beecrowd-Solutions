#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    if (a > b && (c > b || b == c))
        cout << ":)" << endl;
    else if (b > a && (b > c || b == c))
        cout << ":(" << endl;

    else if (b > a && c > b && (c - b) < (b - a))
        cout << ":(" << endl;
    else if (b > a && c > b && (c - b) >= (b - a))
        cout << ":)" << endl;
    else if (a > b && b > c && (b - c) < (a - b))
        cout << ":)" << endl;
    else if (a > b && b > c && (b - c) >= (a - b))
        cout << ":(" << endl;
    else if ((a == b) && c > b)
        printf(":)\n");
    else if ((a == b) && c < b)
        printf(":(\n");
    else if (b < a && c >= b)
        printf(":)\n");
    else
        printf(":(\n");

    return 0;
}
