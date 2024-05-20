//We use this algorithm to find the GCD of a number
#include<iostream>
using namespace std;

int gcd(int a, int b){
    int rem=a%b;
    while(rem!=0){
        a=b;
        b=rem;
        rem=a%b;
    }
    return b;
}

int main(){
    int a;
    int b;

    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

    return 0;
}