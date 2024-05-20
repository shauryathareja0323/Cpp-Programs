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
    
    int i=0, j=0, st=-1, end=-1, s=0, sum=0;
    cin>>s;
    while(j<n && sum+arr[j]<=s){
        sum +=arr[j];
        j++;
    }

    if(sum==s){
        cout << i << " " << j << endl;
        return 0;
    }
    
    while(j<n){
        sum += arr[j];
        while(sum > s){
            sum -= arr[i];
            i++;
        }

        if(sum == s){
            st = i+1;
            end = j+1;
            break;
        }

        j++;
        
    }

     cout << st << " " << end << endl;
        
    return 0;
}