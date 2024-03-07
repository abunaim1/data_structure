#include<iostream>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    //cout<<v[v.size()-1]<<endl;
    // cout<<v.back();
    // cout<<v[0];
    // cout<<v.front();
    vector<int>:: iterator it;
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}