#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0 && n != 1)
        {
            cout << n << " ";
            n /= 2;
        }
        else if (n != 1)
        {
            cout << n << " ";
            n = (n * 3) + 1;
        }
    }
    cout << 1;

    return 0;
}