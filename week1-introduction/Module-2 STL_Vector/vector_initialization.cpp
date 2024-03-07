//vector = dynamic array (STL) - Standard Templete Library
#include<iostream>
using namespace std;
int main()
{
    // vector<int>v; //type 1
    // vector<int>v(5); //type 2
    // vector<int>v(5,100); //type 3

    //type 4
    // vector<int>v1(5,30);
    // vector<int>v(v1); 

    //type 5
    // int a[5]={10,20,30,40,50}; 
    // vector<int>v(a,a+5);
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl<<v.size();

    //vector initialize
    vector<int> v = {10,20,30,40,50};
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}