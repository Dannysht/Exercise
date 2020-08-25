//
//  main.cpp
//  drawRectangle
//
//  Created by Daniel Shterev on 1.03.20.
//  Copyright © 2020 Daniel Shterev. All rights reserved.
//

#include <iostream>

int main()
{
    int x, y ;
    std::cin >> x >> y ;
    for (int i = 0 ; i < y ; ++i)
        {
           if(i==0||i==y-1)
           {
               for(int j = 0; j < x ; ++j)
               std::cout << "*" ;
               std::cout << std::endl ;
           }
           else
           {
                std::cout << "*" ;
                for(int j = 0 ; j < x-2 ; ++j)
                    std::cout << " " ;
                std::cout << "*" << std::endl ;
           }
        }
    return 0;
}
