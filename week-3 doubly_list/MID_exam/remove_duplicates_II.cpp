#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>myList;
    while(1){
        int n;
        cin>>n;
        if(n==-1)break;
        myList.push_back(n);
    }
    myList.sort();
    myList.unique();
    for(int v: myList){
        cout<<v<<" ";
    }
    return 0;
}