#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the number of rows:";
    cin>>r;

    cout<<"Enter the number of coloumns:";
    cin>>c;

    for(int j=1; j<=r; j++){
        for(int i=1; i<=c; i++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}