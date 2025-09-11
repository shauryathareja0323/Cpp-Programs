#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"]=50;
    m["laptop"]=100;
    m["phone"]=50;
    m["tablet"]=30;
    m["watch"]=200;

    m.insert({"camera",25});
    m.emplace("wire",30); 

    m.erase("tablet");

    m["tv"] = m["tv"] + 1;
    m["ipad"]=m["ipad"] + 1;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<< endl; //It will print it in the ascending order of lexographic values of the key.
    }

    cout<<"Count of key= "<<m.count("laptop")<<endl;
    cout<<"Count of value= "<<m["a"]<<endl;

    if(m.find("camera") != m.end()){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}