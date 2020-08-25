//
//  main.cpp
//  point
//
//  Created by Daniel Shterev on 25.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std ;

const int size = 5 ;
struct Point
{
    double x, y ;
    Point()
    {
        x = 0 ;
        y = 0 ;
    }
};


int main()
{
    Point points[size], points2[size] ;
    //(x,y)
    for ( int i = 0; i < size ; ++i )
    {
        char leftBracket, comma, rightBracket ;
        int x, y ;
        cin >> leftBracket >> x >> comma >> y >> rightBracket ;
        {
            if (leftBracket != '(' || comma != ',' || rightBracket != ')')
            {
                cout << "Invalid entry" << endl ;
                cout << "Points set to (0,0)" ;
            }
            else
            {
                cout << "Valid entry" << endl ;
                points[i].x = x ;
                points[i].y = y ;
            }
        }
    }
    ofstream fout("raw_points.txt") ;
    if (fout.is_open())
    {
        cout << "Succesfully created stream" << endl ;
    }
    else
    {
        cout << "Error while creating stream" << endl ;
        return 1 ;
    }
    for (int i = 0 ; i < size ; ++i)
    {
        fout << '(' << points[i].x << ',' << points[i].y << ')' << endl ;
    }
    fout.close() ;
    ifstream fin("raw_points.txt") ;
    if (fin.is_open())
    {
        cout << "Succesfully opened stream" << endl ;
    }
    else
    {
        cout << "Error while opening stream" << endl ;
        return 1 ;
    }
    for (int i = 0 ; i < size ;++i)
    {
        char leftBracket, comma, rightBracket ;
        fin >> leftBracket >> points2[i].x >> comma >> points2[i].y >> rightBracket ;
        cout << "Current index:" << i + 1 << " Correct points: " << "(" << points[i].x
             << "," << points[i].y << ")" << endl ;
        if (points[i].x == points2[i].x && points[i].y == points2[i].y)
        {
            cout << "Correct" << endl ;
        }
        else
        {
            cout << "Mistake" << endl ;
        }
    }
    fin.close() ;
    return 0;
}
