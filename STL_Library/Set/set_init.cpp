// Just like map we have multi set and unordered set
#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;

    s.insert(1);
    s.insert(2);
    //s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(1);   // In set we cannot have duplicate elements.
    s.insert(0);   // In set the elements are stored in ascending order.


    cout<<"Lower Bound: "<< *(s.lower_bound(4))<<endl;
    cout<<"Lower Bound: "<< *(s.lower_bound(3))<<endl;
    cout<<"Lower Bound: "<< *(s.lower_bound(7))<<endl;

    cout<<"Upper Bound: "<< *(s.upper_bound(4))<<endl;
    cout<<"Upper Bound: "<< *(s.upper_bound(3))<<endl;
    cout<<"Upper Bound: "<< *(s.upper_bound(7))<<endl;



    for(auto i: s){
        cout<<"Values: "<<i<<endl;
    }

    return 0;
}