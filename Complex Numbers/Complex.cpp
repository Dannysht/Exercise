//
//  Complex.cpp
//  Complex Numbers
//
//  Created by Daniel Shterev on 19.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "Complex.h"

Complex add(Complex a, Complex b)
{
    Complex result ;
    result.real = (a.real+b.real) ;
    result.imaginary = (a.imaginary + b.imaginary) ;
    return result ;
}

Complex multiply (Complex a, Complex b)
{
    Complex result ;
    result.real = (a.real*b.real) - (a.imaginary*b.imaginary) ;
    result.imaginary = (a.real*b.imaginary) + (a.imaginary*b.real) ;
    return result;
}
