#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        long i, j, diag, end;
        cin >> i >> j;
        if (i > j)
        {
            diag = (i * i) - i + 1;
            if (i % 2 == 0)
            {
                end = diag + (i - j);
                cout << end << endl;
            }
            else
            {
                end = diag - (i - j);
                cout << end << endl;
            }
        }
        else if (i < j)
        {
            diag = (j * j) - j + 1;
            if (j % 2 == 0)
            {
                end = diag - (j - i);
                cout << end << endl;
            }
            else
            {
                end = diag + (j - i);
                cout << end << endl;
            }
        }
        else
        {
            diag = (i * i) - i + 1;
            end = diag;
            cout << end << endl;
        }
    }
}