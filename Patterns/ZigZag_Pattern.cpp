#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Stars: ";
    cin>>n;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            int k=(i+j)%4;
            if(k==0){
                cout<<"* ";
            }
            else if (j%4==0 && i==2)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}