//
//  martenitsa.hpp
//  Martenitsa
//
//  Created by Daniel Shterev on 4.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef martenitsa_hpp
#define martenitsa_hpp

#include <iostream>
#include <string.h>

const int maxMartenitsi = 250 ;

class Martenitsa
{
    char* name ;
    char* wish ;
    double length ;
    int beads ;

public:
    Martenitsa() ;
    Martenitsa (const char* studentName, const char* studentWish, double mLength, int mBeads) ;
    const char* getName ()
    {
        return name ;
    }
    const char* getWish ()
    {
        return wish ;
    }
    double getLength()
    {
        return length ;
    }
    int getBeads()
    {
        return beads ;
    }
    bool operator>=(const Martenitsa& other);
    void print() ;
    void deleteMartenitsa() ;
};

class MartenitsaContainer
{
    Martenitsa martenitsa[maxMartenitsi] ;
public:
    Martenitsa bestMartenitsa() ;
};

#endif /* martenitsa_hpp */
