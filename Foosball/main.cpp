//
//  main.cpp
//  Foosball
//
//  Created by Daniel Shterev on 16.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>
#include "SoftwareEngineer.hpp"
using namespace std ;
int main()
{
    
    SoftwareEngineer engineer("Goshe", Position::Intern, 6000) ; ;
    SoftwareEngineer engineer2("Peshe", Position::Intern, 3000) ;
    SoftwareEngineer engineer3 ("Toshe", Position::Intern, 4000) ; ;
    (engineer = engineer2) = engineer3 ;
    engineer.printEngineer();
    engineer2.printEngineer();
    engineer3.printEngineer();
    return 0;
}
