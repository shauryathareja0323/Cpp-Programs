#include<iostream>

using namespace std;

int main(){
    pair<int, int> p = {2,3};

    cout<<p.first<<" "<<p.second<<endl;

    pair<char, int> p1 = {'a',20};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<string, int> p2 = {"Shaurya",20};
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int, pair<int, int>> p3 = {2,{3,4}};
    cout<<p3.first<<" ("<<p3.second.first<<","<<p3.second.second<<")"<<endl;

    return 0;
}