//
//  Student.cpp
//  Student
//
//  Created by Daniel Shterev on 26.02.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include "Student.hpp"

Student::Student ()
{
    facultyNumber = 0 ;
    strcpy (name, "Name Not Added");
    strcpy (major, "Major Not Chosen") ;
    group = 0 ;
}

Student::Student(unsigned int _facultyNumber, char _name[], char _major[], int _group)
{
    facultyNumber = _facultyNumber ;
    if (facultyNumber < 10000 && facultyNumber > 99999)
    {
        facultyNumber = 0 ;
    }
    strncpy (name, _name, nameSize) ;
    if (strlen (name) > nameSize)
    {
        strcpy (name, "Name Not Added") ;
    }
    strncpy (major,_major, majorSize) ;
    if (strcmp(major,"Informatics") != 0 && strcmp(major,"Computer Science") != 0
    && strcmp(major, "Software Engineering") != 0 && strcmp (major, "Mathematics and Informatics") != 0
    && strcmp(major, "Mathematics")!= 0)
    {
        strcpy (major, "Major Not Chosen") ;
    }
    group = _group ;
    if (group > 8 || group < 1)
    {
        group = 0 ;
    }
}

int Student::getFacultyNumber() const
{
    return facultyNumber ;
}

const char* Student::getName() const
{
    return name ;
}

const char* Student::getMajor() const
{
    return major ;
}

int Student::getGroup () const
{
    return group ;
}

void setMajor (char newMajor[])
{
    std::cin.getline (newMajor, majorSize) ;
    if (strcmp(newMajor,"Informatics") || strcmp(newMajor,"Computer Science")
           || strcmp(newMajor, "Software Engineering") || strcmp (newMajor, "Mathematics and Informatics")
           || strcmp(newMajor, "Mathematics"))
    {
        strcpy (newMajor, "Major Not Chosen") ;
    }
}

void Student::printInformation() const
{
    std::cout << "Faculty Number: " << facultyNumber << std::endl ;
    std::cout << "Name:           " << name << std::endl ;
    std::cout << "Major:          " << major << std::endl ;
    std::cout << "Group:          " << group << std::endl ;
}

void Student::readFromConsole ()
{
    std:: cout << "Enter Faculty Number: " ;
    std::cin >> facultyNumber ;
    if (facultyNumber % 10000 > 0)
    {
        facultyNumber = 0 ;
    }
    std::cin.get() ;
    std:: cout << "Enter Name: " ;
    std::cin.getline(name, nameSize) ;
    if (strlen(name) > nameSize)
    {
        strcpy (name, "Name Not Added") ;
    }
    std:: cout << "Enter Major: " ;
    std::cin.getline (major, majorSize) ;
    if (strcmp(major,"Informatics")  != 0 && strcmp(major,"Computer Science") != 0
    && strcmp(major, "Software Engineering") != 0 && strcmp (major, "Mathematics and Informatics") != 0
    && strcmp(major, "Mathematics") != 0)
    {
        strcpy (major, "Major Not Chosen") ;
    }
    std::cout << "Enter Group: " ;
    std::cin>> group;
    if (group > 8 || group < 1)
    {
        group = 0 ;
    }
    std::cin.get () ;
}
