#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    priority_queue<int>pq; // max heap;
    // priority_queue<int, vector<int>, greater<int> > pq; //min heap
    while(true)
    {
        int cmnd;
        cin>>cmnd;
        if(cmnd==0)
        {
            int x;
            cin>>x;
            pq.push(x); // O(logN)
        }
        else if(cmnd==1)
        {
            cout<<pq.top()<<endl; //O(1)
        }
        else if(cmnd==2)
        {
            pq.pop(); // O(logN)
        }
        else{
            break;
        }
    }
    return 0;
}