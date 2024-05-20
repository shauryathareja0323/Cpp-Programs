#include<iostream>
using namespace std;

int DecimalToOctal(int n){
    int ans=0;
    int a=0;
    int r=1;

    while(n>0){
        a=n%8;
        a=a*r;
        ans=ans+a;
        r=r*10;
        n=n/8;
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the Decimal number:";
    cin>>n;

    cout<<DecimalToOctal(n)<<endl;

    return 0;
}