#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "acb";
    string s1 = "acb";

    next_permutation(s.begin(), s.end());
    prev_permutation(s1.begin(), s1.end());

    cout<< s <<endl;
    cout<<s1<<endl;

    return 0;
}