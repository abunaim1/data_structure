#include<iostream>
using namespace std;
int main()
{
    vector<int> v ={1,2,3,4,5, 2, 2, 2,4,3,1,2,2};
    // vector<int>:: iterator it;
    auto it = find(v.begin(), v.end(), 1);
    if(it == v.end()) cout<< "Not Fount";
    else cout<<"Found";
    // cout<<*it<<endl;
    return 0;
}