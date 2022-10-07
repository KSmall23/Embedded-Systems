#include "stdio.h"
#include "Complex_C.hpp"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}

ComplexNumber_C complexConjugate( const ComplexNumber_C a)
{
   ComplexNumber_C conj;
   conj.real = a.real;
   conj.imag = -a.imag;

   return conj;

} 

ComplexNumber_C complexNegate( const ComplexNumber_C a)
{
  ComplexNumber_C Neg;
  Neg.real = -a.real;
  Neg.imag = -a.imag;

  return Neg;

}

ComplexNumber_C complexSubtract (const ComplexNumber_C a, const ComplexNumber_C b)
{
   ComplexNumber_C Subt;
   ComplexNumber_C bNeg;
   
   bNeg = complexNegate(b);
   Subt = complexAdd(a, bNeg);

   return Subt;
}

void complexNegateInplace(ComplexNumber_C& u)
 {
    u.imag = -u.imag;
    u.real = -u.real;
 }

 void complexConjugateInplace(ComplexNumber_C& a) 
 {
    a.imag = -a.imag;
    a.real = a.real;
 }