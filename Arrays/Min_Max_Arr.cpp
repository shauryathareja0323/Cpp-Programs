#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n]={};

    for(int i=0;i<n;i++){
        cout<<"Enter element #"<<i+1<<": ";
        cin>>arr[i];
    }

    int min_no=INT_MAX;
    int max_no=INT_MIN;


    for(int i=0;i<n;i++){
        max_no=max(max_no,arr[i]);
        min_no=min(min_no,arr[i]);
        
    }
    cout<<"Maximum element of the array is: "<<max_no;
    cout<<"\nMinimum element of the array is: "<<min_no;

    return 0;
}