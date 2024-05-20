#include<iostream>
using namespace std;

int main(){
    int l_value;
    int u_value;
    cout<<"Enter the lower value:";
    cin>> l_value;
    cout<<"Enter the Upper value:";
    cin>> u_value;
    int i= l_value+1;
    for ( i ; i < u_value; i++)
    {   
        if (i==1)
        {
            cout<<i<<endl;
        }
        
        int j=2;
        for(j; j<i; j++){
            if(i%j==0){
                
                break;
             }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
}
