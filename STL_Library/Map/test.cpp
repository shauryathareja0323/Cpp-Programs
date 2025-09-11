#include<iostream>
#include<math.h>
using namespace std;

int main(){
  for (float ph = 0.0f; ph < 6.28318530718f; ph += 0.01f) {
    float pos_m0 = 2.0f * cos(ph);
    float pos_m1 = 2.0f * sin(ph);
    cout<<"Pos m0:"<<pos_m0<<" Pos m1:"<<pos_m1<<endl;
  }
  return 0;
}