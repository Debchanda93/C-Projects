#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double caltax(double sal, double arr[9]){ 
  
  double netsal;

  if (sal < arr[0])
    netsal = sal*(1-arr[4]);
  else if(sal >= arr[0] && sal< arr[1])
    netsal = arr[0]*(1-arr[4]) + (sal - arr[0])*(1-arr[5]);
  else if(sal >= arr[1] && sal< arr[2])
    netsal = arr[0]*(1-arr[4]) + (arr[1] - arr[0])*(1-arr[5]) + (sal - arr[1])*(1-arr[6]);
  else if(sal >= arr[2] && sal< arr[3])
    netsal = arr[0]*(1-arr[4]) + (arr[1] - arr[0])*(1-arr[5]) + (arr[2] - arr[1])*(1-arr[6]) + (sal - arr[2])*(1-arr[7]);
  else 
    netsal = arr[0]*(1-arr[4]) + (arr[1] - arr[0])*(1-arr[5]) + (arr[2] - arr[1])*(1-arr[6]) + (arr[3] - arr[2])*(1-arr[7]) + (sal - arr[3])*(1-arr[8]);

  return netsal;
}

int main(){
  double sal, FinalSalary;
  string country;
  double france[9], italy[9];
  france[0] = 10084;
  france[1] = 25710;
  france[2] = 73516;
  france[3]	= 158122;	
  france[4] = 0;
  france[5] = 0.11;	
  france[6] = 0.3;
  france[7] =	0.41;
  france[8] = 0.45;
  italy[0] = 15000;
  italy[1] = 28000;
  italy[2] = 55000;
  italy[3]	= 75000;	
  italy[4] = 0.23;
  italy[5] = 0.27;	
  italy[6] = 0.38;
  italy[7] =	0.41;
  italy[8] = 0.43;
  
  cout<<"Please enter your gross yearly salary: "<<endl;
  cin>>sal;
  cout<<"Please enter the country that you live in Europe: "<<endl;
  cin>>country;
  
  if (country == "Italy") {
    FinalSalary = caltax( sal, italy);
    cout<<" Your take home salary in Italy is : "<<FinalSalary<<endl;
    cout<<"Monthly: "<<FinalSalary/12<<endl;}
  else if (country == "France") {
    FinalSalary = caltax( sal, france);
    cout<<" Your take home salary in France is : "<<FinalSalary<<endl;
    cout<<"Monthly: "<<FinalSalary/12<<endl;}
  else 
    cout<<"Data not available for your country :("<<endl;

  return 0;
}
