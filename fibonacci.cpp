//
//  main.cpp
//  fibonacci
//
//  Created by Daniel Shterev on 14.01.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>
using namespace std ;
int fibonacci (int n)
{
    if ( n == 0 )
    {
        return 0 ;
    }
    if ( n == 1 )
    {
        return 1 ;
    }
    return fibonacci (n-1) + fibonacci(n-2) ;
    
}
int main()
{
    int n ;
    cin >> n ;
    cout << fibonacci(n) ;
    return 0;
}
