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
    

    for(int i=0; i<n; i++){
        int temp = 0;
        for(int j=0; j<m; j++){
            temp+=arr[i][j];
        }
        if(temp>=r){
            r=temp;
            row = i;
            p.first = temp;
            p.second = i;
        }
    }
    
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}