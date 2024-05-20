#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int i=n;
    int r=0;

    while(i>0){
        int d=i%10;
        r=r+(d*d*d);
        i=i/10;
    }

    if(r==n){
        cout<<"Armstrong number.";
    }
    else{
        cout<<"Not an armstrong number.";
    }

    return 0;
}