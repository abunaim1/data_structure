#include<iostream>
#include<list>
using namespace std;
int main()
{
    // list<int> mylist;
    // list<int> mylist(10, 5);
    // list<int>list2 = {1,2,3,4};
    // list<int> mylist(list2);
    // int a[5] = {10, 20, 40 ,50, 60};
    // list<int> myList(a, a+5);
    vector<int> v = {10,20,30,40,50};
    list<int> myList(v.begin(), v.end());

    // for(auto it = myList.begin(); it != myList.end(); it++){
    //     cout<<*it<<endl;
    // }
    for(int val: myList){
        cout<<val<<endl;
    }
    return 0;
}