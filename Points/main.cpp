//
//  main.cpp
//  Structures
//
//  Created by Daniel Shterev on 19.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>
#include "Point.h"
using namespace std ;
int main()
{
    double point, center;
    Point a, b ;
    getCoords(a, b) ;
    printCoords(a, b) ;
    center = centerDistance(a) ;
    point = pointDistance (a, b) ;
    cout << center << endl << point << endl ;
    return 0;
}
