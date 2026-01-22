#include<iostream>
#include<string>
using namespace std;

//In this the private variables are an example of encapsulation.

class Account{
private:
    double balance;
    string password;

public:
    string accID;
    string username;
};

int main(){
    Account ac1;

    ac1.username = "Growler";
    return 0;
}