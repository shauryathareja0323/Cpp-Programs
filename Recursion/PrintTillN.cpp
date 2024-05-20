#include<iostream>
using namespace std;

int inc(int n){
    if(n==0){
        return 0;
    }
    int a=inc(n-1);
    cout<<a<<endl;
    return n;

}

void dec(int n){
    if(n<0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
    return;
}

int main(){
    int n;
    cin>>n;

    cout<<inc(n)<<endl;
    dec(n);

    return 0;
}