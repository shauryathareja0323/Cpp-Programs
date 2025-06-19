#include<iostream>
using namespace std;
int main(){
    int a=2000;
    int *ptr;
    ptr=&a;
    int *ptr2 = NULL;

    cout<<&a<<endl;      //Prints the address
    cout<<ptr<<endl;     //Prints the address of the variable stored in poniter     
    cout<<&ptr<<endl;    //Prints the address of the pointer
    cout<<*ptr<<endl;    //Prints the value of the variable stored in the pointer(* is known as dereferencing operator.)
    cout<<*&a<<endl;     //* de references the address of the &a.
    cout<<ptr2<<endl;    //Prints the value of the null poinnter that is zero.
    cout<<&ptr2<<endl;   //&ptr2 prints the address of the null pointer.

    *ptr=4000;
    cout<<a<<endl;

    return 0; 
}