#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=n; i>=1; i--){
        //cout<<i<<endl;
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}