#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>m>>n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int row_start=0; 
    int coloumn_end=n-1;
    int coloumn_start=0;
    int row_end=m-1;
    
    while(row_end>=row_start && coloumn_end>=coloumn_start){
        for(int i=coloumn_start; i<=coloumn_end; i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;

        for(int i=row_start; i<=row_end; i++){
            cout<<arr[i][coloumn_end]<<" ";
        }
        coloumn_end--;

        for(int i=coloumn_end; i>=coloumn_start; i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        for(int i=row_end; i>=row_start; i--){
            cout<<arr[i][coloumn_start]<<" ";
        }
        coloumn_start++;
    }
    return 0;
}