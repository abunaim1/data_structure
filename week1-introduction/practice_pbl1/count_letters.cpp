#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i]>0){
            printf("%c : %d\n", i+97, cnt[i]);
        }
    }
    return 0;
}