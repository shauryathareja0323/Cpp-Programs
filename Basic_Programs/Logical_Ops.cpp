#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<n<<" is divisible by both 2 and 3.";
    }
    else if (n%2==0)
    {
        cout<<n<<" is divisible only by 2.";
    }
    else if (n%3==0)
    {
        cout<<n<<" is divisible only by 3.";
    }
    else
    {
        cout<<n<<" is divisible by none of them.";
    }

    return 0;
}