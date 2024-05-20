#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    a=10;
    
    b=a++;
    cout<<"a is: "<<a<<"\nb is: "<<b;
    
    b=++a;
    cout<<"\na is: "<<a<<"\nb is: "<<b;
    
    return 0;
}