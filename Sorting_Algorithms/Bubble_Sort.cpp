#include<iostream>
#include<vector>
using namespace std;

vector<int> bubble_sort(vector<int> &arr, int n){
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();

    vector<int> r = bubble_sort(arr,n);

    for(int i:r){
        cout<<i<<" ";
    }
    return 0;
}