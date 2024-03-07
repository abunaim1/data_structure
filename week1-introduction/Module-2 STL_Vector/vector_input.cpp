#include<iostream>
using namespace std;
int main()
{
    // system 1
    int n;
    cin>>n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // system 2 
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int j=0; j<n; j++){
        cout<<v[j]<<" "<<endl;
    }
    return 0;
}