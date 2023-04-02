#include <iostream>

using namespace std;

long long pow(long n, long k)
{
    long long exp = n;
    for (long i = 1; i < k; i++)
    {
        if (exp / (1000000000 + 7) > 0)
        {
            exp = exp % (1000000000 + 7);
        }
        exp = exp * n;
    }
    return exp;
}

int main()
{
    long k;
    cin >> k;

    long long p = pow(2, k) % (pow(10, 9) + 7);

    cout << fixed << p << endl;

    return 0;
}