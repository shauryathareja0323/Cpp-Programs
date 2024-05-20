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
    int sum=0;
    int temp_sum=0;
    for(int i=0; i<=n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                temp_sum=temp_sum+arr[k];
                if(temp_sum>=sum){
                    sum=temp_sum;
                }
            }
            temp_sum=0;
        }
    }
    cout<<sum;
    return 0;
}