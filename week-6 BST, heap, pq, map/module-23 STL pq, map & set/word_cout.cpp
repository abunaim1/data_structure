#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int>mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    // for(auto it=mp.begin(); it!=mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<mp["movie"]<<endl;
    cout<<mp["yza"]<<endl;
    return 0;
}