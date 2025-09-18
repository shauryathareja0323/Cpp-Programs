#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);

    for(auto it:s){
        cout<<it<<endl;
    }

    // for(int i = 0; i<s.size(); i++){
    //     cout<<s[i]<<endl;
    // }
    

    return 0;
}