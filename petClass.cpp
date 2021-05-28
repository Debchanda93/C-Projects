#include <iostream>
using namespace std;

class Pet {
  private:
        string petName;
        int petID;
  
  public:
        //Pet(int newID ) {petID = newID;}
        void setid(int newID) {petID = newID;}
        void setname(string name){petName=name;}
        string getname() const {return petName;}
        int getid() const {return petID;}
        void speak() const {cout<<"Not available"<<endl;} 
};

int main(){
  string name = "Beagle";
  int newID = 220397;
  Pet dog;

  dog.setname(name);
  dog.setid(newID);

  cout<<"The breed of the dog is "<< dog.getname()<<endl;
  cout<<"The ID of the dog is "<<dog.getid()<<endl;


  return 0;
}
