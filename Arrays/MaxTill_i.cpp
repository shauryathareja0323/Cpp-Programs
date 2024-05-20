#include<iostream>
using namespace std;
int main(){
    int n;
    int max=INT_MIN;

    cout<<"Enter the number of elements in the array:";
    cin>>n;

    int arr[n]={};

    for(int i=0; i<n;i++){
        cout<<"Enter element #"<<i+1<<":";
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        cout<<"Max till i="<<i<<" is:"<<max<<endl;
    }
    return 0;
}