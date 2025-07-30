#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p1.first) return true;
    else return false;
}

int main(){
    int arr[5]={3,5,8,2,1};

    vector<pair<int,int>> vec = {{1,2}, {3,4}, {1,3}, {1,1}, {3,1}, {2,3}};

    sort(vec.begin(), vec.end(), comparator);

    for(auto p:vec){
        cout<<p.first<<" "<< p.second<<endl;
    }

    sort(arr, arr+5, greater<int>());

    for(int i:arr){
        cout<<i<<endl;
    }

    return 0;
}