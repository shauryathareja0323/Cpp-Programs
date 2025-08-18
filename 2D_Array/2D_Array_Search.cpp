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

    int k;
    int a=0;
    cout<<"Enter the value to find:";
    cin>>k;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==k){
            p.first=i;
            p.second=j;
            cout<<p.first<<","<<p.second<<endl;
            a=1;
           } 
        }
    }
    
    if(a==0){
        p.first=-1;
        p.second=-1;
        cout<<p.first<<","<<p.second<<endl;
    }

    return 0;
}