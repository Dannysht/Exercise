//
//  Student.hpp
//  Student
//
//  Created by Daniel Shterev on 26.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <iostream>

const int majorSize = 33, nameSize = 51 ;

class Student
{
    unsigned int facultyNumber ;
    char name[nameSize] ;
    char major[majorSize] ;
public:
    int group ;
    Student() ;
    Student(unsigned int _facultyNumber, char _name[], char _major[], int _group) ;
    int getFacultyNumber() const ;
    const char* getName() const ;
    const char* getMajor() const ;
    int getGroup() const ;
    void setMajor(char newMajor[]) ;
    void setGroup(int newGroup) ;
    void printInformation() const ;
    void readFromConsole () ;
} ;

#endif /* Student_hpp */
