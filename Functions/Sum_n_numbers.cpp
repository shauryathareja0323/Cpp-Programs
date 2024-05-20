#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

int main(){
    int n;
    cout<<"Enter the nth number: ";
    cin>>n;

    int a=1;
    int b=2;
    int c=0;

    for(int i=1; i<=n; i++){
        c=sum(c,i);
    }

    cout<<"sum is: "<<c;

    return 0;
}