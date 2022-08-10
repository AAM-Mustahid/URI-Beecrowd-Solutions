

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int i;

    if (n == 0 || n == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool super(int n)
{
    while (n >= 10)
    {
        int s = n % 10;
        n /= 10;
        if (!prime(s))
            return false;
    }
    if (n == 2 || n == 3 || n == 7 || n == 5)
        return true;
    else
        return false;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (!prime(n))
            cout << "Nada" << endl;

        else
        {
            if (super(n))
                cout << "Super" << endl;

            else
                cout << "Primo" << endl;
        }
    }

    return 0;
}