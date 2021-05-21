#include <iostream>
using namespace std;

int main(){
  int i, numDoubles;
  cout<<"Enter the number of elements:"<<endl;
  cin>>numDoubles;
  double * arr = new double [numDoubles];
  cout<<"the elements are :"<<endl;
  for(i=0; i<numDoubles; i++ ){
    arr[i] = double(i)/3; 
    cout<<arr[i]<<endl;
    }
  delete [] arr;
}
