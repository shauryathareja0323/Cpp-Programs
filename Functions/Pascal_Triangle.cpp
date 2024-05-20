#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}

int pascal_element(int a, int b){
    int n=a;
    int r=b;

    int factn=fact(n);
    int factr=fact(r);

    int factnr=fact(n-r);

    int nCr=factn/(factnr*factr);

    return nCr;
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int a=pascal_element(i,j);
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}