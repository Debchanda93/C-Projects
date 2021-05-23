#include <iostream>
using namespace std;

int sortedSearch(int sortArr[], int srtArrSize, int val){
  int low, high, mid, ind;
  bool found = false;
  low = 0; 
  high = srtArrSize - 1 ;

  while((found == false) && (low <= high)){
    mid = (low+high)/2 ;
    if(sortArr[mid] == val){
      ind = mid;
      found = true;
    }
    else if (sortArr[mid] < val){
      low = mid + 1;
    }
    else 
      high = mid - 1;
}

if(found == true)
  return ind;
else 
  return -1;

}

int main(){
  int arr[10] = {2,5,6,8,9,13, 17, 20, 24, 25};
  int numtosearch;
  cout<<"Enter the number ot search:"<<endl;
  cin>>numtosearch;

  cout<<sortedSearch(arr, 10, numtosearch)<<endl;

  return 0;
}
