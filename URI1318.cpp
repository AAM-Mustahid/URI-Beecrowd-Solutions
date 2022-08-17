#include <iostream>
using namespace std;
int main()
{
    int i, m, n,count;
    while (cin >> n >> m && (m != 0 && n != 0))
    {

        int arr[m];
         count = 0;
        int fake[10000];
        for (i = 0; i < m; i++)
        {
            cin >> arr[i];
            fake[arr[i]] = 0;
        }
        for (i = 0; i < m; i++)
        {
            fake[arr[i]]++;
            if (fake[arr[i]] == 2)
                count++;
        }
          cout << count << endl;
    }
  
    return 0;
}