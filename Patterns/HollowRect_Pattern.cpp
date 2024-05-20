#include<iostream>
using namespace std;

int main(){
    int r,c;

    cout<<"Enter the number of rows:";
    cin>>r;

    cout<<"Enter the number of coloumns:";
    cin>>c;

    for(int i=1; i<=r; i++){
        if(i!=1 && i!=r){
            for(int j=1; j<=c; j++){
                if(j==1 || j==c){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else{
            for(int j=1; j<=c; j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}