#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    v2.insert(v2.begin()+v2.size(), v1.begin(), v1.end());
    cout<<v2[0];
    for (int i = 1; i < v2.size(); i++)
    {
        cout<<" "<<v2[i];
    }    
    return 0;
}