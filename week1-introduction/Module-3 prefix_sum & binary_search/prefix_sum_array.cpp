// if we need sum in a range without using loop we have to use prefix sum(kromojojito gonosongkha)
#include<iostream>
using namespace std;
int main()
{
    long long n, q;
    cin>>n>>q;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long pre[n];
    pre[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i]+pre[i-1];
    }   
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
       if(l==0) cout<<pre[r];
       else  cout<<pre[r]-pre[l-1];
       cout<<endl;
    }
    
    return 0;
}