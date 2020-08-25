//
//  Point.h
//  Structures
//
//  Created by Daniel Shterev on 19.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef Point_h
#define Point_h
#include <iostream>
#include <math.h>
struct Point
{
    double x ;
    double y ;
} ;
void getCoords (Point a, Point b) ;
void printCoords (Point a, Point b) ;
double centerDistance (Point a) ;
double pointDistance (Point a, Point b) ;
#endif /* Point_h */
