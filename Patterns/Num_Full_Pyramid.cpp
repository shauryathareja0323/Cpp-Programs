#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=n; i>=1; i--){
        int x=1;
        int y=1;
        while(x<=i){
            cout<<" ";
            x++;
        }
        for(int j=n; j>=i; j--){
            cout<<y<<" ";
            y++;
        }
        cout<<endl;
    }

    return 0;   
}