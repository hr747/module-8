#include <bits/stdc++.h>

using namespace std;

int main()

{
    string s;
    getline(cin, s);

    string temp = "";
    bool found = false;
    stringstream ss(s);

    while (ss >> temp)
    {
        if (temp == "Jessica")
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}