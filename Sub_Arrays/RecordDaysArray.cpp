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

    int l_num=arr[0];
    int r_day=0;

    for(int i=0; i<n; i++){
        if(i!=n-1){
            if(arr[i]>=l_num){
                l_num=arr[i];
                if(arr[i]>arr[i+1]){
                    r_day +=1;
                }
            }
        }
        else if (i==n-1){
            if(arr[i]>l_num){
                r_day +=1;
            }
        }
    }

    cout<<"No. of record braking days are:"<<r_day<<endl;
    
    return 0;
}