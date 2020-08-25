//
//  tank.cpp
//  tank
//
//  Created by Daniel Shterev on 1.04.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "tank.hpp"




Tank::Tank(const char* name, unsigned int shotPower, unsigned int lifePoints)
{
    init (name, shotPower, lifePoints);
}

void Tank::init(const char* name, unsigned int shotPower, unsigned int lifePoints)
{
    fName = new char[strlen (name) + 1] ;
    std::strcpy (fName, name) ;
    fShotPower = shotPower ;
    fLifePoints = lifePoints ;
}

void Tank::clean()
{
    delete []fName ;
}

void Tank::copy(const Tank & other)
{
    this -> init (other.fName,other.fShotPower, other.fLifePoints) ;
}

Tank::Tank(const Tank& other)
{
    if (this != &other)
    {
        copy(other) ;
    }
}

Tank::~Tank()
{
    clean() ;
}

Tank& Tank::operator= (const Tank& other)
{
    clean() ;
    copy(other) ;
    return *this ;
}

void Tank::serialize (std::ofstream& ofs)
{
    size_t length = strlen(fName);
    ofs << length ;
    ofs << fName ;
    ofs << fShotPower ;
    ofs << fLifePoints ;
  /*  ofs.write((const char*) &length, sizeof(size_t)) ;
    ofs.write (fName, length) ;
    ofs.write ((const char*) &fShotPower, sizeof(unsigned int));
    ofs.write((const char*) &fLifePoints, sizeof(unsigned int));
    */
}

void Tank::deserialize (std::ifstream& ifs)
{
    size_t length = 0 ;
    ifs >> length ;
    fName = new char[length+1] ;
    ifs >> fName ;
    ifs >> fShotPower ;
    ifs >> fLifePoints ;
    /*
    ifs.read( (char*)& length, sizeof(size_t) ) ;
    fName = new char[length+1] ;
    ifs.read(fName, length) ;
    ifs.read( (char*)& fShotPower, sizeof(unsigned int) );
    ifs.read( (char*)& fLifePoints, sizeof(unsigned int) );
 */
}
void Tank::print()
{
    std::cout << "Name: " << fName << ", Shot Power: " << fShotPower
    << ", Life Points: " << fLifePoints << std::endl ;
}
