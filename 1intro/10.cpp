#include <iostream>

using namespace std;

int zeroes(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i = i + 5)
    {
        int j = i;
        while (j % 5 == 0)
        {
            count++;
            j /= 5;
        }
    }
    return count;
}

int main()
{
    int k;
    cin >> k;
    cout << zeroes(k) << endl;
    return 0;
}