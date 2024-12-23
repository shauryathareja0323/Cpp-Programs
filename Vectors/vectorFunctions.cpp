#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3,4,5};

    vec.push_back(25);  //Adds the given element at the end of the vector
    vec.push_back(35);
    vec.push_back(45);

    cout<<"Size = "<<vec.size()<<endl; //This gives the size of the vector

    for(int i: vec){
        cout<<i<<endl;
    }

    vec.pop_back();   //This pops out the last element of the vector

    for(int i: vec){
        cout<<i<<endl;
    }

    

    cout<<"Size = "<<vec.size()<<endl; //This gives the size of the vector

    cout<<vec.front()<<endl; //Prints the first value of the vestor

    cout<<vec.back()<<endl; //Prints the last value of the vector

    cout<<vec.at(3)<<endl; //Prints the value at the given index

    vector <int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);

    cout<<"Size of the vector 3 is:"<<vec2.size()<<endl;
    cout<<"Capacity of the vector 3 is:"<<vec2.capacity()<<endl; //This is because everytime a vector is internaly 
                                                                 //lacking space it's capacity is doubled rather than 
                                                                 //being increased by one.  
}