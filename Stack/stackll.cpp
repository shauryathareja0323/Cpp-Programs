#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
    list<int> ll;

public:
    void push(int k){
        ll.push_front(k);
    }
    int top(){
        return ll.front();
    }
    void pop(){
        ll.pop_front();
    }
    bool empty(){
        // if(ll.front() == NULL){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return ll.size() == 0;
    }

};

int main(){
    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}