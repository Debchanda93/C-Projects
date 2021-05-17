#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;


void bmical(double weight, double height){
  double bmi;
  bmi = weight/ (height*height);

  if (bmi < 18.5)
    cout<<" Your bmi is "<<bmi<<". It is in UNDERWEIGHT range."<<endl;
  else if(bmi >= 18.5 && bmi <= 24.9)
    cout<<" Your bmi is "<<bmi<<". It is in NORMAL range."<<endl;
  else if(bmi >= 25 && bmi <= 29.9)
    cout<<" Your bmi is "<<bmi<<". It is in OVERWEIGHT range."<<endl; 
  else 
    cout<<" Your bmi is "<<bmi<<". It is in OBESE range."<<endl;

}

int main(){

  double weight, height;

  cout<<"Enter your weight in Kg and height in Meter:"<<endl;
  cin>>weight>>height;
  bmical( weight,  height);
  return 0;
}
