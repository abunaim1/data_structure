#include<iostream>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while (q--)
    {
        int x;
        cin>>x;
        int flag = 0;
        int l = 0, r = n-1;
        while (l<=r)
        {
            int mid = r+l/2;
            if (a[mid] == x)
            {
                flag++;
                break;
            }
            else if (x>a[mid])
            {
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(flag>0) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    
    return 0;
}