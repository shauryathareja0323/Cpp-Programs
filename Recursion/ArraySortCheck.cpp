#include<iostream>
using namespace std;

bool check(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray=check(arr+1,n-1);
    return (arr[0]<=arr[1] && restArray);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    bool r=check(arr,10);

    if(r){
        cout<<"Yes it is sorted"<<endl;
    }
    else{
        cout<<"No, it is not sorted"<<endl;
    }

    return 0;
}