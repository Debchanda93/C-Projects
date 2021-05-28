#include <iostream>
#include<cmath>
using namespace std;

class Complex{
  private:
    double real, img;
  public:
  Complex(double newReal, double newImg) {real= newReal;img =newImg;}
  double getreal() const {return real;}
  double getimg() const {return img;}
  double absvalue()const {double z;
        z= sqrt((real*real)+(img*img));
        return z;}
};

Complex add(Complex number1, Complex number2){
  Complex sum(number1.getreal()+number2.getreal(), number1.getimg()+number2.getimg());

  return sum;
}
int main(){
  double newReal, newImg;
  Complex c1(5,6);
  Complex c2(7,8);

  Complex sum = add(c1,c2);
  
cout<<"The complex number is: "<<c1.getreal()<<" + i"<<c1.getimg()<<endl;
cout<<"The real part is: "<<c1.getreal()<<endl;
cout<<"The imaginary part is: "<<c1.getimg()<<endl;
cout<<"The absolute value is: "<<c1.absvalue()<<endl;
cout<<"The sum of the two numbers are: "<<sum.getreal()<<" + i"<<sum.getimg()<<endl;

}
