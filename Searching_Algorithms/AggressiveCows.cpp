#include<iostream>
#include<vector>
using namespace std;

bool isValid(int n, int c, vector<int> &arr,int mid){
    int cn = 2;
    int l_pos = arr[0];
    for(int i= 1; i<n; i++){
        if(arr[i]-l_pos>=mid){
            l_pos = arr[i];
            cn++;
        }
    }
    if(cn>c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = 5;
    int c = 3;

    vector <int> arr = {1,2,4,8,9};

    int min = INT32_MAX;
    int max = INT32_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int en = max-min;
    int st = min;
    int ans = -1;

    while(st<=en){
        int mid = en - (st+en)/2;

        int mid_value = st+mid;

        if(isValid(n,c,arr,mid_value)){
            ans = mid_value;
            st = mid_value+1;
        }
        else{
            en = mid_value-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}