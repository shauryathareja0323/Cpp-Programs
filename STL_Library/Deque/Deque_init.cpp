//Deque and list can be implemeted simillarily but difference between them is that list is
//implemented as a doubly linked list internally while deque is implemented with the help of 
//dynamic arrays.
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d = {1,2,3};

    for(int i:d){
        cout<<i<<" ";
    }

    cout<<d[0]<<endl;
    
    return 0;
}