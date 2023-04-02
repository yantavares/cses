#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 1;
    int end = 1;
    char prev = 'y';

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == prev)
        {
            count++;
            if (count > end)
            {
                end = count;
            }
        }
        else
        {
            count = 1;
        }
        prev = n[i];
    }
    cout << end << endl;
    return 0;
}