//
//  Team.hpp
//  Foosball
//
//  Created by Daniel Shterev on 16.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef Team_hpp
#define Team_hpp

#include"SoftwareEngineer.hpp"

class Team
{
private:
    SoftwareEngineer player1 ;
    SoftwareEngineer player2 ;
public:
    bool checkValidity(SoftwareEngineer player);
};

#endif /* Team_hpp */
