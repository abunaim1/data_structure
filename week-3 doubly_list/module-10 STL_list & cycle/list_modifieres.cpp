#include <iostream>
#include <list>
using namespace std;
int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    list<int> myList(a, a + 10);
    // list<int>myList2 = myList;
    // cout<<myList2.size()<<endl<<endl;
    // myList.push_back(1000);
    // myList.pop_back();
    // myList.push_front(2000);
    // myList.pop_front();
    // myList.insert(next(myList.begin(),2),100);
    // myList.erase(next(myList.begin(),2));
    // myList.insert(next(myList.begin(),2),{100,200,300,400,500});
    // int a2[5] = {100,200,300};
    // myList.insert(next(myList.begin(),2),a2,a2+5);
    // vector<int> newVector = {100,200,300};
    // myList.insert(next(myList.begin(),2),newVector.begin(),newVector.end());
    // myList.erase(next(myList.begin(),2), next(myList.begin(),5));
    // replace(myList.begin(),myList.end(),10,100);
    // auto it = find(myList.begin(), myList.end(), 600);
    // if(it == myList.end()){
    //     cout<<"NOTFOUND"<<endl<<endl;
    // }
    // else{
    //     cout<<"FOUND"<<endl<<endl;
    // }
    for (int v : myList)
    {
        cout << v << endl;
    }
    return 0;
}