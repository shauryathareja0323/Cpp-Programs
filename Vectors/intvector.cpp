#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector <int> vec = {1,2,3};
    // vector <int> vec2 (5,0);
    // cout << vec[0] << endl;

    vector <int> vec1(3,0);
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;
    cout << vec1[3] << endl; // Because vector is of size 3 only that is why it is pointing random variables.

    // for(int i:vec1){
    //     cout << i << endl;
    // }

    return 0;
}