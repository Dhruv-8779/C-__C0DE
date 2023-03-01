#include <bits/stdc++.h>
#include <queue>
using namespace std;
void printPriorityqueue(priority_queue<int> Queue)
{ 
    priority_queue<int> q = Queue;
    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    cout << endl;
}
int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    printPriorityqueue(q);
    cout << "size :" << q.size() << endl;
    cout << q.empty() << endl;
    cout << "top :" << q.top() << endl;

    return 0;
}