#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int curSize = 0;;
    int cap;
    int f;
    int r;

public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        f = 0; r = -1;
    }

    void push(int data){
        if(curSize == cap){
            cout<<"Queue is full"<<endl;
            return;
        }

        r = (r+1) % cap;
        arr[r] = data;
        curSize++;
    }

    void pop(){
        if(curSize == 0){
            cout<<"Queue is empty"<<endl;
            return;
        }

        f = (f+1)%cap;
        curSize--;
    }

    int front(){
        if(empty()){
            cout<<"CQ is empty"<<endl;
            return 0;
        }
        return arr[f];
    }

    bool empty(){
        return curSize == 0;
    }

    void print_a(){
        for(int i = 0; i<cap; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    
    cq.pop();
    cq.push(4);

    cq.print_a();


    return 0;
}