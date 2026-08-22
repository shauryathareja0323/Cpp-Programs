#include<iostream>
#include<vector>
using namespace std;

bool binary(vector<int> v1, int trgt){
    if(v1.size() == 0){
        return 0;
    }
    int st = 0;
    int en = v1.size()-1;
    int mid = st + (en-st)/2;

    if(st == en && v1[mid] != trgt){
        return false;
    }

    if(v1[mid] == trgt){
        return true;
    }

    else if(v1[mid] < trgt){
        v1.erase(v1.begin()+0, v1.begin()+mid+1);
        bool r = binary(v1, trgt);
        return r;
        
    }

    else if(v1[mid] > trgt){
        v1.erase(v1.begin()+mid, v1.end());
        bool r = binary(v1, trgt);
        return r;
    }
}

int main(){
    vector<int> v1 = {-1, 0, 3, 5, 9, 12};
    int trgt = 9;

    bool find = binary(v1, trgt);

    cout<<find<<endl;

    return 0;
}