#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    if (k >= 3 && k != 5)
    {

        if (k % 4 == 0)
        {
            cout << "YES" << endl;
            cout << k / 2 << endl;
            for (int i = 1; i <= k / 2; i = i + 2)
            {
                cout << i << " " << k - i + 1 << " ";
            }
            cout << endl;
            cout << k / 2 << endl;
            for (int i = 2; i <= k / 2; i = i + 2)
            {
                cout << i << " " << k - i + 1 << " ";
            }
            cout << endl;
        }

        else if (k % 2 != 0 && (k - 3) % 4 == 0)
        {
            cout << "YES" << endl;
            cout << k / 2 + 1 << endl;
            cout << 1 << " " << 2 << " ";
            int count = 1;
            for (int i = 4; i <= (k + 4) / 2; i = i + 2)
            {
                cout << i << " " << k - count + 1 << " ";
                count = count + 2;
            }
            cout << endl;
            cout << k / 2 << endl;
            cout << 3 << " ";
            count = 2;
            for (int i = 5; i <= (k + 4) / 2; i = i + 2)
            {
                cout << i << " " << k - count + 1 << " ";
                count = count + 2;
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}