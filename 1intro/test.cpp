#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<string> s;

    // Function to insert elements
    // in the set container
    s.insert("aaa");
    s.insert("aab");
    s.insert("aaa");
    s.insert("aaa");

    cout << "The elements in set are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}