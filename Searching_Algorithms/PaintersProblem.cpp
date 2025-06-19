#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int MaxTime){
    int painter = 1, time = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]>MaxTime){
            return false;
        }
        if(arr[i]+time <= MaxTime){
            time += arr[i];
        }
        else{
            time = arr[i];
            painter++;
        }
    }

    return painter <= m;
}

int minTime(vector<int> &arr, int n, int m){
    int st = 0;
    int en = 0;
    for(int i = 0; i<n; i++){
        en += arr[i];
    }

    int ans = 0;
    while(st<=en){
        int mid_val = en - (st+en)/2;
        int mid = mid_val+st;

        if(isValid(arr,n,m,mid)){
            ans = mid;
            en = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n = 4, m = 3;
    vector<int> arr = {10,60,40,20};

    cout<<minTime(arr,n,m);

    return 0;
}