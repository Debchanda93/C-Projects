#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double statoflist(double list[], int listLength, double& sdeviation, double& variance ){

  int i;
  double sumlist, avglist, sq_sumlist;

  for (i = 0; i<= listLength; i++){
     sumlist += list[i];
   }

  avglist = sumlist / listLength;

  for (i = 0; i<= listLength; i++){
     sq_sumlist += (list[i] - avglist)*(list[i] - avglist);
   }

   variance = sq_sumlist/(listLength-1);
   sdeviation = sqrt(variance);


  return avglist;

}

int main(){
  double list[]=  {6,6,10,15,10,15,11,6,19,15,9,12,14,11,16,14,14,10,5,10,15,15,16,12,8,8,11,15,11,11,12,17,16,12,15,6,18,15,11,13,11,12,18,11,9,6,11,20,14,7};
  int listLength = 50;
  double average, sdeviation, variance ;

  average = statoflist(list,listLength, sdeviation, variance );


  
  cout<<" The average of the list is: "<< average<<endl;
  cout<<" The variance of the list is: "<< variance<<endl;
 cout<<" The standard deviation of the list is: "<< sdeviation<<endl;
 
 

  
  return 0;

}
