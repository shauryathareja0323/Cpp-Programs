#include<iostream>
using namespace std;

void primenum(int n){
    int k=2;
    int j;
    for(int i=2; i<n; i++){
        if(n%i==0){
            break;
        }
        else{
            k++;
        }
    }
    if(k==n){
        cout<<n<<endl;
    }
}

int main(){
    int a,b;
    
    cout<<"Enter the first number:";
    cin>>a;

    cout<<"Enter the second number:";
    cin>>b;

    for(int i=a+1; i<b; i++){
        primenum(i);
    }

    return 0;
}