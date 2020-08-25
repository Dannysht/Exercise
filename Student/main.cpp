//
//  main.cpp
//  Student
//
//  Created by Daniel Shterev on 26.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>

#include "Student.hpp"

int main()
{
    Student S1;
    S1.printInformation() ;
    Student S2(45710, "Daniel Shterev", "Informatics", 6) ;
    S2.printInformation() ;
    Student S3[5] ;
    for (int i = 0 ; i < 5 ; ++i)
    {
    S3[i].readFromConsole() ;
    }
    for (int i = 0 ; i < 5 ; ++i)
    {
    S3[i].printInformation() ;
    }
    return 0;
}
