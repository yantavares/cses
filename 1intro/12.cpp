#include <iostream>
#include <map>
#include <string>

using namespace std;

string solve(string s)
{
    string newStr, newStr2;
    string newChars;
    map<char, int> scount;

    for (auto const &f : s)
        scount[f]++;

    int count = 0;
    for (auto const &b : scount)
    {
        if (b.second % 2 != 0)
        {
            count++;
            newChars = string(b.second, b.first);
        }
        else
        {
            newStr = newStr + string(b.second / 2, b.first);
        }

        if (count > 1)
        {
            return "NO SOLUTION";
        }
    }

    newStr = newStr + newChars;

    for (auto const &b : scount)
    {
        if (b.second % 2 == 0)
        {
            newStr2 = string(b.second / 2, b.first) + newStr2;
        }
    }
    return newStr + newStr2;
}

int main()
{
    string s, end;
    cin >> s;
    cout << solve(s);

    return 0;
}