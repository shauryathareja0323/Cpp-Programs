#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int k;
    int a=0;
    cout<<"Enter the value to find:";
    cin>>k;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==k){
            cout<<"Value found at: ";
            cout<<i+1<<","<<j+1;
            a=1;
           } 
        }
    }
    
    if(a==0){
        cout<<"Value not found";
    }

    return 0;
}