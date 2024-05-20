//Find the minimum element in the array and swap it with the beggining element.

#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};
    int n=0;

    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                n=arr[j];
                arr[j]=arr[i];
                arr[i]=n;
            }
        }
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}