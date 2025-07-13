#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> nums1 ={1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 ={2,5,6};
    int n = 3;
    int ptr1 = m-1;
    int ptr2 = n-1;

    cout<<"ptr1="<<ptr1<<"ptr2="<<ptr2<<endl;

    for(int i = (m+n)-1; i>=0; i--){
        cout<<"i="<<i<<endl;
        cout<<"nums1[ptr1]="<<nums1[ptr1]<<" nums2[ptr2]="<<nums2[ptr2]<<endl;
        if(ptr2<0){
            break;
        }
        else if(nums2[ptr2]<0){
            cout<<"nums1 inside:"<<nums1[0]<<"nums2 inside:"<<nums2[ptr2]<<endl;
            if(nums1[0]>nums2[ptr2]){
                int temp = nums1[0];
                cout<<"Temp is:"<<temp<<endl;
                nums1[0]=nums2[ptr2];
                nums1[1]=temp;
                cout<<"nums1[0]="<<nums1[0]<<" nums1[1]="<<nums1[1]<<endl;
                ptr2--;
            }
        }
        else if(nums1[ptr1] >= nums2[ptr2]){
            cout<<"Hello"<<endl;
            nums1[i]=nums1[ptr1];
            nums1[ptr1]=0;
            if(ptr1>0){
                ptr1--;
            }
            else{
                ptr1 = 0;
            }
        }
        else{
            cout<<"ptr2="<<nums2[ptr2]<<endl;
            nums1[i]=nums2[ptr2];
            nums2[ptr2]=0;
            ptr2--;
        }
    }

    for(int i:nums1){
        cout<<i<<" ";
    }
}