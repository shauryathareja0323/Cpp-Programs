#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s2.swap(s);

    while(!s.empty()){
        //int *i = &s.top();
        cout<<"Top s:"<<s.top()<<endl;
        s.pop();
    }

    while(!s2.empty()){
        //int *i = &s.top();
        cout<<"Top s2:"<<s2.top()<<endl;
        s2.pop();
    }
    

    return 0;
}