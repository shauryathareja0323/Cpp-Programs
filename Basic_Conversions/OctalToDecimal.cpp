#include<iostream>
using namespace std;

int OctalToDecimal(int n){
    int dnum=0;
    int x=1;

    while(n>0){
        int y=n%10;
        dnum += y*x;
        x=x*8;
        n=n/10;
    }

    return dnum;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<OctalToDecimal(n)<<endl;

    return 0;
}