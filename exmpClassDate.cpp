#include <iostream>
using namespace std;

class Date{
private:
      int day;
      int month;
      int year;
public:
      Date(): day(1), month(1), year(1970){} // CONSTRUCTOR in the format (member initialization list)
public:
      // Defining the setters
      void setDay(int newDay); // This function is defined out of the class
      void setMonth(int newMonth); // This function is defined out of the class
      void setYear(int newYear){year = newYear;} // This function is defined in the class
      
      // Defining the getters
      // Getters are generally 'const' function as they don't change the data
      int getDay() const {return day;}
      int getMonth() const {return month;}
      int getYear() const {return year;}
      void displayDate() const {cout<< day << "/" << month << "/" << year; }

};

void Date::setDay(int newDay){
  if (newDay >0 && newDay <= 31)
    day  = newDay;
}
void Date::setMonth(int newMonth){
  if (newMonth > 0 && newMonth <= 12)
    month = newMonth;
}

int main(){
  Date d1;
  d1.setDay(10);
  d1.setMonth(10);
  d1.setYear(1999);

  cout<< "Very important data: "<<endl; 

  d1.displayDate();

  return 0;
}
