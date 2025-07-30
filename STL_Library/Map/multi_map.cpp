#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string, int> m;

    m.emplace("TV", 50);
    m.emplace("Laptop", 100);
    m.emplace("TV", 150);
    m.emplace("TV", 200);
    m.emplace("Laptop", 130);

    m.erase("Laptop");
    m.erase(m.find("TV"));

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}