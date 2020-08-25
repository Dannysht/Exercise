//
//  SoftwareEngineer.hpp
//  Foosball
//
//  Created by Daniel Shterev on 16.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef SoftwareEngineer_hpp
#define SoftwareEngineer_hpp

#include "Position.h"
#include <iostream>
#include <string.h>

class SoftwareEngineer
{
private:
    char* fName ;
    Position fPosition ;
    int fSalary ;
public:
    SoftwareEngineer(); 
    SoftwareEngineer (const char* name, Position position, int salary) ;
    SoftwareEngineer (const SoftwareEngineer& engineer) ;
    ~SoftwareEngineer() ;
    SoftwareEngineer& operator= (const SoftwareEngineer& engineer) ;
    void printEngineer ();
    const char* getName() const
    {
        return fName ;
    }
    Position getPosition() const
    {
        return fPosition ;
    }
    int getSalary() const
    {
        return fSalary ;
    }
private:
    copy(const SoftwareEngineer& engineer);
};

#endif /* SoftwareEngineer_hpp */
