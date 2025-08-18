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

    int r=INT32_MIN;
    int row = -1;
    

    for(int j=0; j<m; j++){
        int temp = 0;
        for(int i=0; i<n; i++){
            temp+=arr[i][j];
        }
        if(temp>=r){
            r=temp;
            row = j;
            p.first = temp;
            p.second = j;
        }
    }
    
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}