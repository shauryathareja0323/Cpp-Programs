#include<iostream>
#include<vector>
#include<string>
using namespace std;



int main(){
    string text = "leet code";
    string brokenLetters = "lt";
    vector<int> broken (26,0);
        
    for(int i = 0; i<brokenLetters.size(); i++){
        int chr = brokenLetters[i]-'a';
        broken[chr]++;
    }

    int count = 0;
    int valid = 1;

    for(int i = 0; i<text.size(); i++){
        char chr1 = text[i];
        int chr = text[i]-'a';

        cout<<chr<<" "<<count<<" "<<chr1<<" "<<valid<<endl;
        if(text[i]!=' '){
            if(broken[chr]>0 && valid == 1){
                valid = 0;
            }
        }
        else{
            if(valid == 1){
                count++;
                valid = 1;
            }
            else{
                valid = 1;
            }
        }
        cout<<"i:"<<i<<endl;
        if(i==text.size()-1 && valid ==1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
