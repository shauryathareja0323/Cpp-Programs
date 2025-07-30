#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m.emplace("TV", 50);
    m.emplace("Laptop", 100);
    m.emplace("Tablet", 150);
    m.emplace("Watch", 200);
    m.emplace("Phone", 130);

    // m.erase("Laptop");
    // m.erase(m.find("TV"));

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}