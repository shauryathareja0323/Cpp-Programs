#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    int x=1;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=x; j++){
            cout<<"* ";
        }
        x=x+1;

        for(int j=1; j<=n; j++){
            if(j>=i){
                cout<<"* ";
            }
            else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=n; j>=1; j--){
            if(j<=i){
                cout<<"* ";
            }
            else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }


    return 0;
}