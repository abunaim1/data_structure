#include<iostream>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,50};
    vector<int>v2={1,2,3,4};
    v.insert(v.begin()+2,v2.begin(), v2.end());
    v.insert(v.begin()+4,1000);
    v.erase(v.begin()+1, v.end()-1); // delete from index 2 to 7
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}