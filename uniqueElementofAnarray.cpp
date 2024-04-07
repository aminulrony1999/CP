#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v(n,0);
    cout<<"Enter element's of the array : ";
    for(auto &x : v)
    cin>>x;
    int i = 0;
    for(int j = 1; j < v.size(); ++j)
    {
        if(v[i] != v[j])
        {
            i++;
            v[i] = v[j];
        }
    }
    cout<<"Totatl unique elements of the array is : "<<i+1;
    return 0;
}