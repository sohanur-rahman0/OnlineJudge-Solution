#include<bits/stdc++.h>
using namespace std;
typedef struct student
{
    string name;
    string color;
    char size;
};

bool comp(student x, student y)
{
    if(x.color == y.color)
    {
        if(x.size == y.size)
            return x.name < y.name;
        else
            return x.size > y.size;
    }
    else
    {
        return x.color < y.color;
    }

}
int main()
{
    int n;
    bool flag = false;
    while (cin>>n,n)
    {
        student arr[n];
        cin.get();
        for (int i = 0; i < n; i++)
        {
            getline(cin, arr[i].name);
            cin>>arr[i].color;
            cin>>arr[i].size;
            cin.get();
        }

        sort(arr, arr+n, comp);

        if(flag and n!=0)
            cout<<endl;
        flag = true;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i].color<<' '<<arr[i].size<<' '<<arr[i].name<<endl;
        }


    }

}
