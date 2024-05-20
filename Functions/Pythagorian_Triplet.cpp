#include<iostream>
using namespace std;

bool pythagorian_triplet(int x, int y, int z){
    bool result;
    int x2=x*x;
    int y2=y*y;
    int z2=z*z;

    if(x2==y2+z2||y2==x2+z2||z2==x2+y2){
        result=true;
    }
    else{
        result=false;
    }

    return result;
}

int main(){
    int x,y,z;
    cin>> x >> y >> z;

    bool result=pythagorian_triplet(x,y,z);

    if(result==true){
        cout<<"Pythagorian Triplet.";
    }
    else{
        cout<<"Not a pythagorian triplet.";
    }

    return 0;
}