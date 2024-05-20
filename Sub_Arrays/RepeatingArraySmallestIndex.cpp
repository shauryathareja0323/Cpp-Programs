#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n]={};

    for(int i=0;i<n;i++){
        cout<<"Enter element #"<<i+1<<": ";
        cin>>arr[i];
    }
    
    const int N=1e5+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i]=-1;
    }

    int minidx=INT_MAX;

    for(int i=0; i<n; i++){
        int temp=arr[i];
        if(idx[temp]==-1){
            idx[temp]=i;
        }
        else{
            if(minidx>=idx[temp]){
                minidx=idx[temp];
            }
        }

    }
    cout<<"\n"<<minidx+1;
    return 0;
}