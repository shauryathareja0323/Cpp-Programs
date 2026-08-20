#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int st, int en, int mid){
    vector<int> temp;
    int i = st; int j = mid+1;

    while(i<=mid && j<=en){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=en){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx<temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int en){
    if(st<en){
        int mid = st + (en-st)/2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, en);

        merge(arr, st, en, mid);
    }
    else if(st == en){
        cout<<arr[st]<<endl;
    }
}

int main(){
    // vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    vector<int> arr = {5,2,3,1};

    int st = 0;
    int en = arr.size()-1;
    
    mergeSort(arr, st, en);

    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}