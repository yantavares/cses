#include <iostream>
using namespace std;

void decimalToBinary(int n)
{
    int arr[11], i = 0, num = n;

    while (n != 0)
    {
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;

    cout << 0 << endl;
    for (size_t i = 1; i <= n; i++)
    {
        decimalToBinary(i);
    }

    return 0;
}
