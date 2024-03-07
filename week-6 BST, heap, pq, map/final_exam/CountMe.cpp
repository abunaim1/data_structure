#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <queue>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);

        string word;
        string theWord;
        int max = INT_MIN;
        while (ss >> word)
        {

            mp[word]++;
            if (mp[word] > max)
            {
                max = mp[word];
                theWord = word;
            }
        }
        cout << theWord <<" "<< max << endl;
    }
    return 0;
}