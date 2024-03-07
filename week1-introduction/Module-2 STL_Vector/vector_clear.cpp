#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.clear();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<v[0]<<endl;
    cout<<v[4]<<endl;
    return 0;
}