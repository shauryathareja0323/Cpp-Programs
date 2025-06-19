#include<vector>
#include<iostream>
using namespace std;

vector<int> selection_sort(vector<int> &arr, int n){
    for(int i = 0; i<n-1; i++){
        int sl = arr[i];
        for(int j = i+1; j<=n-1; j++){
            if(arr[j]<sl){
                sl = arr[j];
                int temp = arr[i];
                arr[i] = sl;
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();

    vector<int> r = selection_sort(arr,n);

    for(int i:r){
        cout<<i<<" ";
    }

    return 0;
}