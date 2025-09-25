#include<iostream>
#include<vector>
#include<string>
using namespace std;

void get_p(string &s, vector<string> &ans, int idx){
    if(idx==s.size()){
        ans.push_back({s});
        return;
    }

    for(int i=idx; i<s.size(); i++){
        swap(s[idx], s[i]);
        get_p(s, ans, idx+1);
        swap(s[idx], s[i]);
    }
}

int main(){
    string s = "abc";
    vector<string> ans;

    get_p(s, ans, 0);

    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0;
}