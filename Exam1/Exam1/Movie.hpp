//
//  Movie.hpp
//  Exam1
//
//  Created by Josiah on 10/6/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I recieved adhered to the rules stated for this exam.

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Movie{
private:
    string title;
    string genre;
    int showTime;
public:
    Movie();
    Movie(string Title, string Genre, int ShowTime);
    string GetTitle();
    string GetGenre();
    int GetShowTime();
};

#endif /* Movie_hpp */
