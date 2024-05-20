#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="fam";
    string s2="ily";
    string abc="abwsgvdskjbc ajbdcbndmnsbcm";
    string s3="xyz";
    string s4="xyz";
    string s5="nincompoop";
    string s6="badboybad";
    string s7="123";
    string s8="A";
    int x=123;

    s1.append(s2);              //Appends s2 at the end of s1  
    abc.clear();                //Clears the entire string
    cout<<s4.compare(s3)<<endl; //Compairs s4 with s3, if s4>s3 output will be 1, if s4<s3 output will be -1, if s4==s3 output will be 0
    if(abc.empty()){            //Checks if the string is empty
        cout<<"String is empty"<<endl;
    }
    s5.erase(3,1);              //Removes the element on the loacation of the first value passed while the second value tells how many should be removed
    cout<<s5<<endl;

    cout<<s6.find("bad")<<endl;//Returns the first index of the substring that is passed in the function
    s6.insert(0,"lol");        //Insert the given string on the given location
    cout<<s6<<endl;       
    cout<<s6.size()<<endl;     //Returns the size of the string
    cout<<s6.length()<<endl;   //Returns the size of the string 
    cout<<s6.substr(6,4)<<endl;//Returns the substring from the given index to the second value passed
    cout<<stoi(s7)<<endl;      //Returns the integral value of the string but will give an exeption if the given string is letters and not numbers
    cout<<to_string(x)<<endl;  //Converts the given integer to string 

    

    return 0;
}