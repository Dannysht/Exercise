//
//  main.cpp
//  tank
//
//  Created by Daniel Shterev on 1.04.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "tank.hpp"

int main()
{
    std::ofstream ofs("tanks.txt") ;
    Tank tank1 ("Danny" , 20, 40) ;
    Tank tank2 ("Jorko" , 10 , 30) ;
    tank1.serialize(ofs);
    tank2.serialize(ofs);
    ofs.close() ;
    std::ifstream ifs("tank.txt") ;
    tank2.deserialize(ifs) ;
    tank1.deserialize(ifs) ;
    tank1.print() ;
    tank2.print() ;
    ifs.close() ;
    return 0 ;
}
