#include<iostream>
using namespace std;
int main(){
    int a=2000;
    int *ptr;
    ptr=&a;

    cout<<&a<<endl;      //Prints the address
    cout<<ptr<<endl;     //Prints the address of the variable stored in poniter     
    cout<<&ptr<<endl;    //Prints the address of the pointer
    cout<<*ptr<<endl;    //Prints the value of the variable stored in the pointer

    *ptr=4000;
    cout<<a<<endl;

    return 0; 
}