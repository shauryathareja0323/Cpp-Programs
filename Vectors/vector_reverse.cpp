#include<iostream>
#include<vector>

using namespace std;

void vec_rev(vector <int>& rev_vec){
    int n = rev_vec.size();
    for(int i=0; i<rev_vec.size()/2; i++){
        swap(rev_vec[i], rev_vec[n-i-1]);
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};

    for(int num : vec){
        cout<<num<<endl;
    }

    vec_rev(vec);

    for(int i:vec){
        cout<<i;
    }
    return 0;
}