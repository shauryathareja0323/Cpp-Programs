//Pointer Arithmetic includes increment, decrement, addition and subtraction.
#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    int *ptr=&a;


    cout<<ptr<<endl;

    ptr=ptr+1;


    cout<<ptr<<endl;
    cout<<a<<endl;



    return 0;
}