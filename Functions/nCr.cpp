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
    int n,r;
    cin>>n>>r;

    int factn=fact(n);
    int factr=fact(r);

    int factnr=fact(n-r);

    int nCr=factn/(factnr*factr);

    cout<<"nCr is: "<<nCr;

    return 0;
}