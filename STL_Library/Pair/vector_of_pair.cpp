#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> vec = {{1,2}, {2,3}, {3,4}};
    
    for(pair<int,int> i:vec){
        cout<<i.first<<" "<<i.second<<endl;
    }

    vec.push_back({4,5}); // It just inserts the already created objects
    vec.emplace_back(5,6); // It creates the objects in-place.
    cout<<endl;

    for(auto i:vec){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}