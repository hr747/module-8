

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        string str,x;
        cin >> str>>x;
       

        int idx = str.find(x);

        while (idx != -1)
        {
           
             str.replace(idx, x.length(), "#");

            idx = str.find(x, idx + 1);
        }
        cout << str<<endl;
    }
    return 0;
}