#include <iostream>
#include<cmath>
#include<string>
using namespace std;

class Pet{ // Base class
      string name;
      int petID;
  public:
        Pet(int newID){petID=newID;}
        string getName() const {return name;}
        void setname(string newName){name=newName;}
        void speak() const{}

};

class Cat: public Pet{
      double whiskerLength;
  public:
        Cat() : Pet(10000){} //explicit call to BASE constructor
        void speak() const {cout<<"MEOW!"<<endl;}
        void setLength(double newLength);
        double getLength() const {return whiskerLength;}
        void setName(string newName);
        Cat& operator=(const Pet&);
};

void Cat::setname(string newName){
     whiskerLength = 0;
     Pet::setName(newName);
}
