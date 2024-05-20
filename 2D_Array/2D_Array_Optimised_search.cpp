#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    int num;
    cout<<"Enter the number to find:";
    cin>>num;

    int r,c;
    r=0;
    c=m;
    int result=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    while (r<n && c>-1)
    {
        if(arr[r][c]==num){
            result=1;
            break;
        }
        else if (arr[r][c]>num)
        {
            c--;
        }
        else{
            r++;
        }
    }

    if(result==0){
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}