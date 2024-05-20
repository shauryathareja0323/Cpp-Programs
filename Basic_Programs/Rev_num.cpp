#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int i=n;
    int r=0;
    while(i%10 != 0){
        int l_num=i%10;
        r=(r*10)+l_num;
        i=i/10;
    }
    cout<<r;
    return 0;
}