#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    int t, i = 0, k, len = 0, j, n = 0;
    char arr[100];
    char rev[100];

    cin >> t;
    char input[100];
    while (t--)
    {
        cin >> input;
        int size = strlen(input);
        j = size - 1;
        k = 0;

        while (size--)
        {
            if (islower(input[j]))
            {
                arr[k] = input[j];
                k++;
                j--;
            }
            else
                j--;
        }
        arr[k] = '\0';
       cout<<arr<<endl;
    }

    return 0;
}
