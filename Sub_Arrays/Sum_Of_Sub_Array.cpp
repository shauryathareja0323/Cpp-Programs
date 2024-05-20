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
    int counter=1;

        for(int i=0; i<n; i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum=sum+arr[j];
                cout<<"Sum of "<<counter<<" Sub Array is:"<<sum<<endl;
                counter=counter+1;
            }
        }


    return 0;
}