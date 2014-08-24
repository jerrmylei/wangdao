#include "complex.h"
using namespace std;//有了命名空间就不用加std了
Complex::Complex()
:real_(0),
    imag_(0)
{}

Complex::Complex(int real,int imag)
{
   real_ = real;
   imag_ = imag;
}

Complex::Complex(const Complex &other)
{

   real_ = other.real_;
   imag_ = other.imag_;
}

void Complex::print()
{

   cout<<real_<<"+"<<imag_<<"i"<<endl;

}


ostream &operator <<(ostream &out,const Complex &a)
{
    out<<a.real_<<"+"<<a.imag_<<"i";
    return out;


}

istream &operator >>(istream &in,Complex &a)
{
     int real,imag;
     
     
     in>>real;
     a.real_ = real;
     in>>imag;
     a.imag_ = imag;
     
     return in;
}

Complex operator +(Complex &a,Complex &b)
{
   Complex c;
   c.real_ = a.real_+b.real_;
   c.imag_ = a.imag_+b.imag_;
   return c;

}

Complex operator -(Complex &a,Complex &b)
{
   Complex c;
   c.real_ = a.real_-b.real_;
   c.imag_ = a.imag_-b.imag_;
   return c;
 }

Complex operator *(Complex &a,Complex &b)
{
   Complex c;
   c.real_ = a.real_*b.real_-a.imag_*b.imag_;
   c.imag_ = a.imag_*b.real_+a.real_*b.imag_;
   return c;
}



