#include <iostream>

using namespace std;

long solve(long k)
{

    if (k == 1)
    {
        return 0;
    }

    else if (k == 2)
    {
        return 6;
    }
    else if (k == 3)
    {
        return 28;
    }

    else if (k == 4)
    {
        return 96;
    }

    else
    {
        return ((k * k * (k * k - 1)) - ((2 * (10 + 4 * (k - 4))) + (2 * (14 + 6 * (k - 4))) + (((20 + 8 * (k - 4))) * (k - 4)))) * 0.5;
    }
}

int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cout << solve(i) << endl;
    }

    return 0;
}