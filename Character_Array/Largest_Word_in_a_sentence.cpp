#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int c=0;
    int h=0;

    while(arr[i]!='\0'){
        if(arr[i]==' '){
            if(h<c){
                h=c;
                c=0;
            }
            else{
                c=0;
            }
        }
        else{
            c++;
        }
        i++;
    }

    cout<<h;

    return 0;
}