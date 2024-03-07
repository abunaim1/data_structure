#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int flg=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1]){
            flg++;
            break;
        }
    }
    if(flg>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}