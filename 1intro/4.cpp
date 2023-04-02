#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long c;
    string n;
    cin >> c;
    cin.ignore(256, '\n');
    getline(cin, n);

    vector<string> v;
    char dl = ' ';

    long start, end;
    start = end = 0;

    while ((start = n.find_first_not_of(dl, end)) != string::npos)
    {
        end = n.find(dl, start);
        v.push_back(n.substr(start, end - start));
    }

    long prev = stol(v[0]);
    long count = 0;
    long temp = 0;

    for (int i = 1; i < v.size(); i++)
    {
        temp = stol(v[i]);
        if (temp < prev)
        {
            while (temp < prev)
            {
                count++;
                temp++;
            }
        }

        prev = temp;
    }
    cout << count << endl;
    return 0;
}