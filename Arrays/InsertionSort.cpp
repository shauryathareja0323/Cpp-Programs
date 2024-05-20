// Insert an element from unsorted array to it's correct position in sorted array.

#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};

    for(int i=0; i<6; i++){
        int cur=arr[i];
        int j=i-1;

        while(arr[j]>cur && j>=0){
            arr[j+1]=arr[j];
            j--;
        }   
        arr[j+1]=cur;
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    

    return 0;
}