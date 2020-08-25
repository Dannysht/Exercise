//
//  SoftwareEngineer.cpp
//  Foosball
//
//  Created by Daniel Shterev on 16.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "SoftwareEngineer.hpp"

SoftwareEngineer::SoftwareEngineer()
{
    fName = new char [2] ;
    strcpy (fName, "-");
    fPosition = Position::InvalidPosition ;
    fSalary = 0 ;
}

SoftwareEngineer::SoftwareEngineer (const char* name, Position position, int salary)
{
    fName = new char [strlen(name)+1] ;
    strcpy (fName, name) ;
    fPosition = position ;
    fSalary = salary ;
}
SoftwareEngineer::SoftwareEngineer (const SoftwareEngineer& engineer) :SoftwareEngineer()
{
    if(this != &engineer)
    {
        copy(engineer) ;
    }
}
SoftwareEngineer::~SoftwareEngineer()
{
    delete[]fName ;
}
SoftwareEngineer& SoftwareEngineer::operator= (const SoftwareEngineer& engineer)
{
    if(this != &engineer)
    {
        delete [] fName ;
        copy(engineer) ;
    }
    return *this ;
}

void SoftwareEngineer::printEngineer()
{
    std::cout << fName << std::endl ;
    std::cout << (int)fPosition << std::endl ;
    std::cout << fSalary << std::endl ;
}

void SoftwareEngineer::copy (const SoftwareEngineer& engineer)
{
    fName = new char [strlen(engineer.fName)+1] ;
    strcpy (fName, engineer.fName) ;
    fPosition = engineer.fPosition ;
    fSalary = engineer.fSalary ;
}
