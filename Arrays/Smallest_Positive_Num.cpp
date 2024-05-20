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
    
    int s_num=INT_MAX;
    int m_num=1e5;
    int arr2[m_num]={};
    for(int i=0; i<m_num; i++){
        arr2[i]=-1;
    }

    for(int i=0; i<n; i++){
        int c_num=arr[i];
        if(c_num > -1){
            arr2[c_num]=0;
        }
    }

    for(int i=0; i<m_num; i++){
        if(arr2[i]==-1){
            s_num=i;
            break;
        }
    } 

    cout<<"Smallest missing positive number is:"<<s_num<<endl;

    return 0;
}