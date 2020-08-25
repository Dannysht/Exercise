//
//  tank.hpp
//  tank
//
//  Created by Daniel Shterev on 1.04.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef tank_hpp
#define tank_hpp

#include <iostream>
#include <fstream>
#include <string.h>

class Tank
{
private:
    char* fName ;
    unsigned int fShotPower, fLifePoints ;
    
    void init (const char* name, unsigned int shotPower, unsigned int lifePoints) ;
    void clean() ;
    void copy(const Tank & other) ;
    
public:
    Tank(const char* name = "", unsigned int shotPower = 0, unsigned int lifePoints = 0);
    Tank(const Tank & other);
    Tank& operator= (const Tank& other);
    ~Tank();
public:
    void setPower(unsigned int shotPower)
    {
        fShotPower = shotPower ;
    }
    void setLife (unsigned int lifePoints)
    {
        fLifePoints = lifePoints ;
    }
    unsigned int getPower()
    {
        return fShotPower ;
    }
    unsigned int getLife ()
    {
        return fLifePoints ;
    }
    void serialize(std::ofstream& ofs) ;
    void deserialize(std::ifstream& ifs) ;
    void print() ;

};

#endif /* tank_hpp */
