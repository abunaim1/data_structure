// array--> index, value
// map --> key, value
#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"naim", 20});
    // mp.insert({"fahad", 30});

    mp["naim"] = 20;
    mp["fahad"] = 30;
    mp["maruf"] = 40;
    mp["taru"] = 50000;

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<mp["taru"]<<endl;

    if(mp.count("akib"))
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
