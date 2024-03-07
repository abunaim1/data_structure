#include<iostream>
#include<list>
using namespace std;
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    list<int>myList(a,a+10);
    // cout<<myList.max_size();
    // myList.clear();
    // myList.resize(2);
    // myList.resize(15,100);
    
    cout<<myList.size()<<endl;
    for(int v:myList){
        cout<<v<<endl;
    }
    return 0;
}