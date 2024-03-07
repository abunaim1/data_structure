#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i] + 1;
        for (int j = 0; j < n; j++)
        {
            if(x==arr[j]){
            cnt++;
            break;
        }
        }
        
    }
    cout<<cnt<<endl;
    return 0;
}