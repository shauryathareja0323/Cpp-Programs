//We are using the logic that (n & n-1) of a number that is the power of 2 is always zero.
#include<iostream>
#include<string>
using namespace std;

string powerOftwo(int n){
    int a=(n&(n-1));
    if(a==0){
        return "Yes it is the power of two";
    }
    else{
        return "No it is not the power of two";
    }
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<powerOftwo(n)<<endl;
    

    return 0;
}