#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a=2;

    if(n==0||n==1){
        cout<<"Neither Prime nor Composite number.";
    }
    else{
        for(int i=2; i<=n; i++){
            if(n%i==0){
                break;
            }
            else{
                //cout<<a;
                a++;
            }
        }
        if(a==n){
            cout<<"Prime number";
        }
        else{
            cout<<"Composite number";
        }
    }
    return 0;
}
