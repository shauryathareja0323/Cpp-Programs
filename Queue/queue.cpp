#include<iostream>
#include<vector>
using namespace std;

class queue{
    vector<int> v1;

public:
    void push(int ele){
        v1.push_back(ele);
    }

    void pop(){
        v1.erase(v1.begin()+0);
    }

    int front(){
        return v1[0];
    }

};

int main(){

    queue q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    cout<<q1.front()<<endl;
    q1.pop();
    cout<<q1.front()<<endl;
    q1.pop();
    cout<<q1.front()<<endl;
    q1.pop();

    return 0;
}