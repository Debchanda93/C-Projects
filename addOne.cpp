#include <iostream>

using namespace std;

void addOne(int *ptrNum){  // Referencing by pointer, pointing to the value

  *ptrNum += 1; // Adds one to the value stored in the pointer. 
}

int main(){
  int x = 10;
  int *ptr;

  ptr = &x; // Pointer pointing to the address of x
  addOne(ptr); // Pass just the pointer i.e the address, not the value 

  cout<< "The new number is: "<< *ptr<<endl;

  return 0;
}
