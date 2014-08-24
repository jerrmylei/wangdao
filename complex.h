#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
#include <vector>
//每一个是标准库的都要加std
class Complex
{
   friend Complex operator +(Complex &a,Complex &b);
   friend Complex operator -(Complex &a,Complex &b);
   friend Complex operator *(Complex &a,Complex &b);
   friend Complex operator /(Complex &a,int &b);
   friend std::ostream &operator <<(std::ostream &out,const Complex &a);
   friend std::istream &operator >>(std::istream &in,Complex &a);

   private:
       int real_;
       int imag_;
   public:
       Complex();
       Complex(int real,int imag);
       Complex(const Complex &other);
       void print();

};
#endif
