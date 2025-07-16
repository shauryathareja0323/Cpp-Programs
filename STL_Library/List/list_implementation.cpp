//List behaves as a doubly linked list so you can perform operations on both front and end.
#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);
    l.emplace_back(4);
    l.pop_back();
    cout<<l.size()<<endl;

    for(int i:l){
        cout<<i<<endl;
    }


    return 0;
}