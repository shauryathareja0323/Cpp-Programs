#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    

    for(int i=n-1; i>=0; i--){
        int x=i;
        while(x>0){
            cout<<"  ";
            x--;
        }
        for(int j=0; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}