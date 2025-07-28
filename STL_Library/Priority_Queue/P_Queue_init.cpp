// A priority queue is sort of a heap that stores the element with highest priority at the top.
// It will organise the elements based on their priorities(values).
#include<iostream>
#include<queue>
using namespace std;

int main(){
    //priority_queue<int> p;
    priority_queue<int, vector<int>, greater<int>> p; // This will reverse the priority queue, where greater<int> is a functor.

    p.push(3);
    p.push(2);
    p.push(10);
    p.push(-1);

    while(!p.empty()){
        cout<<"Top: "<<p.top()<<endl;
        p.pop();
    }

    return 0;
}