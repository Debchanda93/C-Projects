#include <iostream>
#include<cmath>
using namespace std;

int main(){
  int list[]=  {-19, -3, 20, -1, 5, 25};
  int listLength = 6;
  int i, max, min, maxtemp, mintemp;

  max = list[0];
  min = list[0];

  for (i = 1; i<= 6; i++){
    if(list[i] > list[i-1]){
      maxtemp = list[i];
      mintemp = list[i-1];
    }
    else {
      maxtemp = list[i-1];
      mintemp = list[i];
    }
    if (maxtemp > max)
      max = maxtemp;

    if (mintemp < min)
      min = mintemp;

    cout<<max<<" "<<min<<endl;
  }
  cout<< "The maximum number in the array is "<<max<<endl;
  cout<< "The minimum number in the array is "<<min<<endl;
  
  if(abs(max)>abs(min))
    cout<<"The maximum number in absolute value is: "<<abs(max)<<endl;
  else 
    cout<<"The maximum number in absolute value is: "<<abs(min)<<endl;


  return 0;

}
