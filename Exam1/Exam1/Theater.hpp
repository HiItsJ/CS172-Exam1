//
//  Theater.hpp
//  Exam1
//
//  Created by Josiah on 10/6/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I recieved adhered to the rules stated for this exam.

#ifndef Theater_hpp
#define Theater_hpp

#include <stdio.h>
#include <iostream>
#include "Movie.cpp"
using namespace std;

class Theater{
private:
    Movie movies[24];
    int popcornPrice;
    int cokePrice;
public:
    Theater(string Name, string Phone);
    void AddMovie(Movie& m);
    string GetMovieForHour(int Hour);
    
    int GetShowTimeForGenre(string Genre);
    
    int GetPopcornPrice();
    int GetCokePrice();
};

#endif /* Theater_hpp */
