#include<iostream>
#include<list>
using namespace std;
int main()
{
    int a[9] = {100,70,80,90,10,20,40,30,50};
    list<int>myList(a,a+9);
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    // myList.reverse();
    for(int v:myList){
        cout<<v<<endl;
    }
    return 0;
}