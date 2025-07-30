#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin(), vec.begin()+5);

    cout<<binary_search(vec.begin(), vec.end(), 3)<<endl;

    for(int i:vec){
        cout<<i<<endl;
    }

    return 0;
}