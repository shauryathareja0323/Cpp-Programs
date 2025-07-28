#include<queue>
#include<iostream>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<"Queue front:"<<q.front()<<endl;
        q.pop();
    }

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<"Queue back:"<<q.back()<<endl;
        q.pop();
    }

    return 0;
}