//
//  Point.cpp
//  Structures
//
//  Created by Daniel Shterev on 19.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "Point.h"

void getCoords (Point& a, Point& b)
{
    std::cin >> a.x >> a.y >> b.x >> b.y ;
}

void printCoords (Point a, Point b)
{
    std::cout << a.x << " " << a.y << " " << b.x << " " << b.y << std::endl ;
}

double centerDistance (Point a)
{
    return sqrt ((a.x*a.x) + (a.y*a.y)) ;
}

double pointDistance (Point a, Point b)
{
    return sqrt ((a.x - b.x)*(a.x - b.x) + (a.y-b.y)*(a.y-b.y)) ;
}
