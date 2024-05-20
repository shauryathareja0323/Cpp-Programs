#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;

    int r1,r2;

    r1=fact(a);
    r2=fact(b);

    cout<<"Fact of "<<a<<" is: "<<r1;
    cout<<"\nFact of "<<b<<" is: "<<r2;

    return 0;
}