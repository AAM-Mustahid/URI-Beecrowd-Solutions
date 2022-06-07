#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, avg, sum ;
    int count = 0, x, k;
    while (1)
    {
        count = 0;
        sum = 0;

        while (1)
        {
            

            cin >> a;
            if (a >= 0.0 && a <= 10.0)
            {
                sum += a;
                count++;
            }
            else
            {
                cout << "nota invalida" << endl;
            }
            if (count != 2)
                continue;

            else if (count == 2)
            {
                avg = (float)sum / 2;
                cout << fixed << setprecision(2) << "media = " << avg << endl;
                avg = 0.0;
                break;
            }
        }

        for (k = 0; k < 100; k++)
        {
            cin >> x;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            if (x == 1 || x == 2)
                break;
        }
        if (x == 1)
        {
            
            continue;
        }

        else if (x == 2)
            break;
    }

    return 0;
}
