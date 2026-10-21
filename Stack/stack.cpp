#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v1;

public:
    void push(int k){
        v1.push_back(k);
    }
    int top(){
        return v1[v1.size()-1];
    }
    void pop(){
        v1.pop_back();
    }
    bool empty(){
        if(v1.size() == 0){
            return true;
        }
        else{
            return false;
        }
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