
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main()
{
    int a;
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(4);
    pq.push(8);
    pq.push(15);
    pq.push(37);
    pq.push(20);
    pq.push(17);
    pq.push(33);
    pq.push(7);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;


    



}


