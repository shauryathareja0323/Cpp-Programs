#include<iostream>
using namespace std;

int numberOf1s(int n){
    int temp=n;
    int k=0;
    while (temp != 0)
    {
        temp=(temp & (temp-1));
        k +=1;
    }
    return k;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int result=numberOf1s(n);
    cout<<result;

    return 0;
}