//
//  main.cpp
//  Martenitsa
//
//  Created by Daniel Shterev on 4.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>

#include "martenitsa.hpp"

using namespace std ;

int main()
{
    char* name = new char [52] ;
    char* wish = new char [280] ;
    double length;
    int beads ;
    
    cout << "Enter student's name: " ;
    cin.getline(name,51) ;
    cout << "Enter the wish: " ;
    cin.getline (wish,279) ;
    cout << "Enter the length of the student's martenitsa: " ;
    cin >> length;
    cout << "Enter number of beads on the martenitsa: " ;
    cin>> beads ;
    Martenitsa martenitsa(name, wish, length, beads);
    martenitsa.print();
    martenitsa.deleteMartenitsa() ;
    return 0;
}
