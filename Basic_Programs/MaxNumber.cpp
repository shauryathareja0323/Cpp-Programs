#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;

    if(a>b and b>=c){
        cout<<a<<" is the largest number.";
    }
    else if(b>a and a>=c){
        cout<<b<<" is the largest number.";
    }
    else if(a==b and b==c){
        cout<<"All of them are equal.";
    }
    else{
        cout<<c<<" is the largest number.";
    }



   return 0; 
}
