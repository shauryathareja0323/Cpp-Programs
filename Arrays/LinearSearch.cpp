#include<iostream>
using namespace std;
int main(){
    int arr[6]={20,17,25,8,56,75};
    for(int i=0; i<=5; i++){
        if(arr[i]==8){
            cout<<i<<endl;
        }
    }

    return 0;
}