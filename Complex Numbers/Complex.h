//
//  Complex.h
//  Complex Numbers
//
//  Created by Daniel Shterev on 19.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef Complex_h
#define Complex_h
struct Complex
{
    int real ;
    int imaginary ;
} ;
Complex add(Complex a, Complex b) ;
Complex multiply (Complex a, Complex b) ;
#endif /* Complex_h */
