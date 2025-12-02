#include <bits/stdc++.h>

using namespace std;
class student 
{
    public:
    string name;
    int roll;
    char sub;
    int mark;
};

 int main()

{
    int x;
    cin>>x;
    student a[x];
    for (int i=0;i<x;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].sub>>a[i].mark;
    }
      for (int i=0;i<x/2;i++)
    {
       swap(a[i].sub,a[x-1-i].sub);
    }
    
       for (int i=0;i<x;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].sub<<" "<<a[i].mark<<endl;
    }

    return 0;
}