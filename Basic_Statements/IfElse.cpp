#include<iostream>
using namespace std;

int main(){
    int amount1;
   cout<<"Amount Given by Mother:";
   cin>>amount1;
   cout<<"Amount Given by Father:";
   int amount2;
   cin>>amount2;
   int TotalAmount=amount1+amount2;
   cout<<"Total Amount="<<TotalAmount<<"\n";

   if(TotalAmount>=500){
    if(TotalAmount>=600){
        cout<<"Movie date with Neha";
    }
    else{
        cout<<"Ice Cream Date with Neha";
    }
   }
   else if(TotalAmount>=300){
    cout<<"Date with Rashmi";
   }
   else{
    cout<<"Party with friends.";
   }


   return 0; 
}
