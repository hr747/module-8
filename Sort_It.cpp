#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int mat;
    int eng;
};
bool fun(student l, student r)
{
    int lsum = l.eng + l.mat;
    int rsum = r.eng + r.mat;
    if (lsum == rsum)
    {
        return l.id < r.id;
    }
    return lsum > rsum;
}

int main()

{
    int x;
    cin >> x;
    student a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].mat >> a[i].eng;
    }
    for (int i = 0; i < x / 2; i++)
    {

        sort(a, a + x, fun);
    }

    for (int i = 0; i < x; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].mat << " " << a[i].eng << endl;
    }

    return 0;
}