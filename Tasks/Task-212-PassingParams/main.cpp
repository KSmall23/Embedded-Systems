#include "mbed.h"
#include "Complex_C.hpp"

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    ComplexNumber_C pConj = complexConjugate(p);
    complexDisplay("The Conjugate of P", pConj);
    
    ComplexNumber_C pNeg = complexNegate(p);
    complexDisplay("The Negation of P", pNeg);
    
     ComplexNumber_C subtract = complexSubtract(p, q);
    complexDisplay("P - Q", subtract);
    
    
    while (true) {
    }
}
