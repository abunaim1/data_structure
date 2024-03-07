#include<iostream>
#include<list>
using namespace std;
int main()
{
    int a[9] = {100,70,80,90,10,20,40,30,50};
    list<int>myList(a,a+9);
    cout<<myList.front()<<endl;
    cout<<myList.back()<<endl;
    cout<< *next(myList.begin(), 3)<<endl;
    return 0;
}