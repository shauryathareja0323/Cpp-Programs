#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int>::iterator it;
    vector<int>::iterator rev_it; // We can replace these definations using auto keyword in the loop

    for(it = vec.begin(); it != vec.end(); it++){
        cout<< *it << endl;
    }

    for(auto rev_it = vec.rbegin(); rev_it!=vec.rend(); rev_it++){
        cout<< *rev_it <<endl;
    }

    return 0;
}