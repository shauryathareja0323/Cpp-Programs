#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> arr, int size){
    if(size == 1){
        return true;
    }

    arr.pop_back();
    bool isSorted = check(arr, size-1);

    return (isSorted && arr[size-1]>arr[size-2]);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    bool isSorted = check(arr, arr.size());

    cout<<isSorted<<endl;

    return 0;
}