#include <bits/stdc++.h>
#include <set>

using namespace std;

set<string> perms;

void permute(string &a, int l, int r)
{
    if (l == r)
        perms.insert(a);
    else
    {
        for (int i = l; i <= r; i++)
        {

            swap(a[l], a[i]);

            permute(a, l + 1, r);

            swap(a[l], a[i]);
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int size;
    int n = str.size();

    permute(str, 0, n - 1);
    // sort(perms.begin(), perms.end());

    size = perms.size();

    cout << size << endl;

    for (auto it = perms.begin(); it != perms.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}