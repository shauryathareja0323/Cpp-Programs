#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int k=0;
    int m=0;

    for(int i=n; i>=1; i--){
        int x=1;
        while(x<i){
            cout<<" ";
            x++;
        }
        for(int j=1; j<=(2*k)+1; j++){
            cout<<"*";
        }
        k++;
        cout<<endl;
    }
    //cout<<"K is: "<<k;
    m=k-1;
    for(int i=1; i<=k; i++){
        int x=1;
        while(x<i){
            cout<<" ";
            x++;
        }
        for(int j=1; j<=(2*m)+1;j++){
            cout<<"*";
        }
        m--;
        cout<<endl;
    }
    return 0;
}