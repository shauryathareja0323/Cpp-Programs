#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n]={};
    
    int num;
    cout<<"Enter the number to find:";
    cin>>num;

    for(int i=0;i<n;i++){
        cout<<"Enter element #"<<i+1<<": ";
        cin>>arr[i];
    }
    
    int a=n/2;
    
    if(arr[a]==num){
        cout<<a+1<<endl;
    }

    else if(arr[a]<num)
    {
        for(int i=a+1; i<=n; i++){
            if(arr[i]==num){
                cout<<i+1<<endl;
            }
        }
    }
    else if(arr[a]>num)
    {
        for(int i=0; i<a; i++){
            if(arr[i]==num){
                cout<<i+1<<endl;
            }
        }
    }
    

    return 0;
}