#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int numBooks, int numStu, int MaxAllowedPages){
    int students = 1, pages = 0;

    for(int i = 0; i<numBooks; i++){
        if(arr[i] > MaxAllowedPages){
            return false;
        }
        
        if(pages + arr[i] <= MaxAllowedPages){
            pages += arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
    }

    return students <= numStu;
}

int allocateBooks(vector<int> &arr, int numBooks, int numStu){
    if(numStu>numBooks){
        return -1;
    }

    int sum = 0;
    for(int i = 0; i<numBooks; i++){
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, en = sum;

    while(st<=en){
        int mid_pos = en - (st+en)/2;
        int mid = st+mid_pos;
        if(isValid(arr,numBooks,numStu,mid)){
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
    vector<int> arr = {2,1,3,4};
    int numBooks = 4, numStu = 2;

    int r = allocateBooks(arr, numBooks, numStu);
    cout<<r<<endl;

    return 0;
}