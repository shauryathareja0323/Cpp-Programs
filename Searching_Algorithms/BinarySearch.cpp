#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int n = nums.size();

    int st = 0;
    int en = n-1;

    while(st<=en){
        int mid = st+(en-st)/2; //We do this in case if we have the st and en values both as INT_MAX so to prevent overflowing of integer values.

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            st = mid+1;
        }
        else if(nums[mid]>target){
            en = mid-1;
        }
    }
    return -1;
}


int main(){
    vector<int> nums = {-1,0,3,4,5,9,12};
    //vector<int> nums = {-1,0,3,4,9,12};

    int target;
    cout<<"Enter Target value:";
    cin>>target;

    int ans = binarySearch(nums, target);
    cout<<ans;
    
}