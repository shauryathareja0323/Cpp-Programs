#include<iostream>
using namespace std;
int main(){
    int n;
    int x=1;

    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<x<<" ";
            x=x+1;
        }
        cout<<endl;
    }


    return 0;
}