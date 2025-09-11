#include<iostream>
using namespace std;

int main(){
    int n,m;
    pair<int,int> p;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int pdr=0;
    int sdr=0;
    int ctr = n-1;
    

    for(int i=0; i<n; i++){
        pdr+=arr[i][i];
    }
    for(int i=0; i<n; i++){
        sdr+=arr[i][ctr];
        ctr--;
    }
    
    cout<<"pdr:"<<pdr<<endl;
    cout<<"sdr"<<sdr<<endl;
    if(n%2==0){
        cout<<"sum:"<<pdr+sdr<<endl;
    }
    else{
        cout<<"sum:"<<pdr+sdr-(arr[n/2][n/2])<<endl;
    }

    return 0;
}