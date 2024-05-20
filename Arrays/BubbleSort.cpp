// Reapetedly Swap two adjacent elements if they are in wrong order.

#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};

    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}