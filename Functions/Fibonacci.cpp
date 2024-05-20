#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    int c;

    if(n==0){}

    else if (n==1)
    {
        cout<<a<<endl;
    }
    else if(n==2){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else if(n>2){
        cout<<a<<endl;
        cout<<b<<endl;
        for(int i=1; i<=n-2; i++){
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the nth term:";
    cin>>n;

    fibonacci(n);

    return 0;
}