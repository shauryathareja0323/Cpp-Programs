#include<iostream>
#include<vector>
using namespace std;

bool is_sorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }
    
    return arr[n-1] >= arr[n-2] && is_sorted(arr,n-1);
}


int main(){
    vector<int> arr={0,-1,1,2,3,4,5,6};
    
    cout<<is_sorted(arr, arr.size())<<endl;

    return 0;
}