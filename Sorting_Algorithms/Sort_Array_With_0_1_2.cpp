//sort(nums.begin(), nums.end()); We can use this only as well. This will give the time complexity of O(log n)
#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int> &arr, int n){
    int hash[3]={0,0,0};

    vector<int> r = {};

    for(int i=0; i<n; i++){
        int v = arr[i];
        hash[v] += 1;
    }

    for(int i=0; i<3; i++){
        int v = hash[i];
        for(int j=0; j<v; j++){
            r.push_back(i);
        }
    }

    return r;
}

int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    vector<int> r = sort(arr,n);

    for(int i: r){
        cout<<i<<" ";
    }

    return 0;

}