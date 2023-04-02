#include <iostream>

// Solves the problem by organizing the list of numbers in
// ordered odds, than ordered evens

// Ex:
// 1 2 3 4 5 6
// 1 3 5 2 4 6

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n > 3)
    {
        for (int i = 2; i <= n; i = i + 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i = i + 2)
        {
            cout << i << " ";
        }
    }
    else if (n == 1)
    {
        cout << 1;
    }
    else
    {
        cout << "NO SOLUTION";
    }

    return 0;
}
