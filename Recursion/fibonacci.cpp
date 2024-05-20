#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1){
        int r=0;
        return r;
    }
    else if (n==2 || n==3)
    {
        int r=1;
        return r;
    }
    
    int r=fibonacci(n-1)+fibonacci(n-2);
    return r;
}

int main(){
    int n;
    cin>>n;
    
    cout<<fibonacci(n)<<endl;
    
    return 0;
}