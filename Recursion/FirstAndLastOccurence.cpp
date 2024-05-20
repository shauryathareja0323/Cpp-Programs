#include<iostream>
using namespace std;

int firstocc(int arr[],int n, int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return(firstocc(arr,n,i+1,key));
}

int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[]={1,3,4,6,7,9,3,10};
    cout<<firstocc(arr,8,0,3)<<endl;
    cout<<lastocc(arr,8,0,3)<<endl;
    return 0;
}