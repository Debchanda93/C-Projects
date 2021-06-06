#include <iostream>
#include<cmath>
#include<string>
using namespace std;

class ShowTicket{
  private: 
        string row;
        int seatNumber;
        bool sold;
  public:
        ShowTicket (string newRow, int newsetNumber){row = newRow; seatNumber = newsetNumber; sold = false; }
        void sell_seat() {if(sold == false) 
                              sold=true;
                          else 
                              cout<<"The is seat is already SOLD"<<endl; }
        bool is_sold() const {if(sold){cout<<"SOLD"<<endl;} else{cout<<"AVAILABLE"<<endl;}return sold;}     
        void print_ticket();                 
};
void ShowTicket::print_ticket(){ 
                  cout<<row<<"  "<<seatNumber<<"  "<<is_sold()<<endl;
                  }


int main(){
  ShowTicket startheatre1("AA", 102), startheatre2("AA", 103) ;
  startheatre1.sell_seat();
  //startheatre1.is_sold();
  //startheatre2.is_sold();
  startheatre1.print_ticket();
  startheatre2.print_ticket();

  return 0;
}
