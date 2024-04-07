#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{

}
void mergeSort(vector<int> &arr, int low, int high)
{
    if(low >= high)
    return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr,mid+1,high);
    merge(arr, low, mid, high);
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i)
    cin>>arr[i];
    mergeSort(arr,0,n-1);
    cout<<"After implementing mergesort, the elements of the array are : ";
    for(int i = 0; i < n; ++i)
    cout<<arr[i]<<" ";
    return 0;
}