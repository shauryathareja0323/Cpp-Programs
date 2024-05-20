#include<iostream>
using namespace std;

int DecimalToBinary(int n){
    int ans=0;
    int a=0;
    int r=1;

    while(n>0){
        a=n%2;
        a=a*r;
        ans=ans+a;
        r=r*10;
        n=n/2;
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the Decimal number:";
    cin>>n;

    cout<<DecimalToBinary(n)<<endl;

    return 0;
}