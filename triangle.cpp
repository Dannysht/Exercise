//
//  main.cpp
//  triangle
//
//  Created by Daniel Shterev on 14.01.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>
using namespace std ;
int blocks = 0 ;
int triangleBlocks (int rowsCount)
{
    if ( rowsCount == 0 )
    {
        return blocks ;
    }
        blocks = blocks + rowsCount ;
        triangleBlocks(rowsCount - 1) ;
    return blocks;
}

int main()
{
    int rowsCount ;
    cin >> rowsCount ;
    cout << triangleBlocks(rowsCount) ;
    return 0;
}
