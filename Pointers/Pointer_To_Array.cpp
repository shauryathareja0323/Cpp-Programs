#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    //cout<<*arr<<endl;
    
    //int *ptr=arr;

    for(int i=0; i<5; i++){
        cout<<*(arr+i)<<endl;
    }

    for(int i=0; i<5; i++){
        cout<<(arr+i)<<endl;
    }

    return 0;
}