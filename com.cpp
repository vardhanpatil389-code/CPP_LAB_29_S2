#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex add(Complex &x1,Complex &x2) {
    Complex x3;
    x3.real=x1.real+x2.real;
    x3.imag=x1.imag+x2.imag; 
return (x3);  
}
    Complex subtract(const Complex &c) {  real = real - c.real, imag =imag - c.imag; return 0;}
    void display() const { cout << real << " + i" << imag << endl; }
}; 

int main()
{
  Complex c1(1,4), c2(5,6);
    Complex sum=c1.add(c1,c2);
   
   cout<<"addition :";sum.display();
   
    return 0;


}