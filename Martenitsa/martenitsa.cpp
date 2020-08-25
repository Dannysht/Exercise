//
//  martenitsa.cpp
//  Martenitsa
//
//  Created by Daniel Shterev on 4.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "martenitsa.hpp"

Martenitsa::Martenitsa()
{
    name = new char[1] ;
    wish = new char[1] ;
    strcpy(name, "") ;
    strcpy(wish, "") ;
    length = 0 ;
    beads = 0 ;
}

Martenitsa::Martenitsa (const char* studentName, const char* studentWish, double mLength, int mBeads)
{
        name = new char[strlen(studentName)+1] ;
        wish = new char[strlen(studentWish)+1] ;
        strcpy (name, studentName) ;
        strcpy (wish, studentWish) ;
        length = mLength ;
        beads = mBeads ;
}

void Martenitsa::deleteMartenitsa()
{
    delete[]name ;
    delete[]wish ;
}

void Martenitsa::print()
{
    std::cout << "Student's name: " << name << std::endl ;
    std::cout << "Your wish is: " << wish << std::endl ;
    std::cout << "The length of your martenitsa: " << length << std::endl ;
    std:: cout << "The number of beads on your martenitsa: " << beads << std::endl ;
}

/*Martenitsa MartenitsaContainer::bestMartenitsa ()
{
    
    for (int i = 0 ; i < maxMartenitsi; ++i)
    {
        for (int j = 0 ; j < maxMartenitsi ; ++j)
        {
            
        }
    }
    return currentBest ;
}*/
