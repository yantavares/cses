#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a, b, temp;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (((a + b) % 3 == 0 && a <= (2 * b)) || (a == 0 && b == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}