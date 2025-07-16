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
    //cout<<l[3]<<endl; //Because of the concept of doubly linked list we cannot access any random position in the list

    for(int i:l){
        cout<<i<<endl;
    }


    return 0;
}