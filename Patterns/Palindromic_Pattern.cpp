#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int x=0;

    for(int i=n; i>0; i--){
        int k=(2*x)+1;
        x++;
        int s=i;
        while(s>=1){
            cout<<" ";
            s--;
        }
        int num=x;
        int y=2;
        for(int j=1; j<=k; j++){            
            if(num>=1){
                cout<<num;
                num--;
            }
            else if(num<1){
                cout<<y;
                y++;
            }
        }
        cout<<endl;
    }

    return 0;
}