//
//  Movie.cpp
//  Exam1
//
//  Created by Josiah on 10/6/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I recieved adhered to the rules stated for this exam.

#include "Movie.hpp"

Movie::Movie(){
    title = "Get Smart";
    genre = "Comedy";
    showTime = 17;
}
Movie::Movie(string Title, string Genre, int ShowTime){
    title = Title;
    genre = Genre;
    showTime = ShowTime;
}
string Movie::GetTitle(){
    return title;
}
string Movie::GetGenre(){
    return genre;
}
int Movie::GetShowTime(){
    return showTime;
}