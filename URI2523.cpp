#include <iostream>
using namespace std;
int main()
{
    char a[26];
    int bulb[26];
    int n, i;
    while (cin >> a)
    {
        cin >> n;
       while(n--)
        {
            cin >> i;
            cout << a[i - 1];
        }
        /* for (i = 1; i <= n; i++)
         {
             cout << a[bulb[i] - 1]; //avoid this code. There are time limit error
         }
         */
         cout << endl;
        
    }

    return 0;
}