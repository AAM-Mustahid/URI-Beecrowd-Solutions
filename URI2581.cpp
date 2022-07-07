#include <iostream>
using namespace std;
int main()
{
    int t, i;
    string q1;
    cin >> t;
    for (i = 0; i <= t; i++)
    {

        getline(cin, q1);
        if (i != 0)
            cout << "I am Toorg!" << endl;
    }

    return 0;
}