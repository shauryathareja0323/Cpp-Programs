#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
    int dnum=0;
    int x=1;
    int i=n;
    int k=0;
    while(i>0){
        int y=i%10;
        dnum += x*y;
        x=x*2;
        i=i/10;
    }
    return dnum;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<BinaryToDecimal(n)<<endl;

    return 0;
}