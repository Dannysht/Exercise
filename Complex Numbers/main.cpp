//
//  main.cpp
//  Complex Numbers
//
//  Created by Daniel Shterev on 19.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>


#include "Complex.h"
using namespace std ;
int main() {
    Complex a, b ;
    cin >> a.real >> a.imaginary >> b.real >> b.imaginary ;
    Complex resultAdd, resultMultiply ;
    resultAdd = add(a, b) ;
    resultMultiply = multiply(a, b) ;
    char c;
    if (resultMultiply.imaginary > 0)
    {
        c = '+' ;
    }
    else
    {
        resultMultiply.imaginary = -resultMultiply.imaginary;
        c = '-' ;
    }
    cout << resultAdd.real << c << resultAdd.imaginary <<"i \n" ;
    cout << resultMultiply.real << c << resultMultiply.imaginary <<"i \n" ;
    return 0;
}
