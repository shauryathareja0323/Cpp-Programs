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

    int len=1,l_len=0,a=0;
    int diff=arr[1]-arr[0];

    for(int i=0; i<n-1; i++){
        int diff=arr[i+1]-arr[i];
        for(int j=i+1; j<n; j++){
            int c_diff=arr[j]-arr[j-1];
            if(c_diff==diff){
                len++;
            }
            else{
                break;
            }
        }
        if(len>l_len){
            l_len=len;
            len=1;
        }
       else{
            len=1;
        }
    }

   
    cout<<"Length of the longest arithmetic sub-array is:"<<l_len;



    return 0;
}