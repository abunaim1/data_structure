#include<iostream>
using namespace std;
int main()
{

    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //    cin>>v[i];
    // }
    //  for (int i = 0; i < n; ++i) {
    //     if (v[i] > 0) {
    //         //v[i] = 1;
    //         replace(v.begin(),v.end(),v[i],1);
    //     } else if (v[i] < 0) {
    //        // v[i] = 2;
    //          replace(v.begin(),v.end(),v[i],2);
    //     }
    // }
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    int n;
    cin>>n;
    int arr[n];   
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0){
            arr[i] = 2;
        }
        else if(arr[i]>0){
            arr[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}