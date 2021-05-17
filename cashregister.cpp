#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;


int main(){

  double price1, price2, total, taxrate, baseprice;
  char clubcard;

  cout<<"Enter price of the first item:"<<endl;
  cin>>price1;
  cout<<"Enter price of the second item:"<<endl;
  cin>>price2;
  cout<<"Does customer have a club card?"<<endl;
  cin>>clubcard;
  cout<<"Enter the tax rate:"<<endl;
  cin>>taxrate;

  baseprice = price1 + price2;
  cout<<"Base Price: "<<baseprice<<endl;

  if (price1 == price2)
    price2 *= 0.5;

  total = price1 + price2; 

  if (clubcard == 'y')
    total *= 0.9;

  cout<<"Price after discount: "<<total<<endl;

  total *= 1-(taxrate/100) ;
  cout<<"Total price: "<<total<<endl;

  return 0;
}
