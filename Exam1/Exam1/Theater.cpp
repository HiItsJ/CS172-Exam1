//
//  Theater.cpp
//  Exam1
//
//  Created by Josiah on 10/6/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

// I affirm that all code given below was written solely by me, Josiah Gallegos, and that any help I recieved adhered to the rules stated for this exam.

#include "Theater.hpp"

Theater::Theater(string Name, string Phone){
    
}
void Theater::AddMovie(Movie& m){
    movies[m.GetShowTime()] = m;
}
string Theater::GetMovieForHour(int Hour){
    if (Hour > 0 && Hour < 25){
        return movies[Hour].GetTitle();
    }
    else {
        return "";
    }
}
int Theater::GetShowTimeForGenre(string Genre){
    for(int x=0;x<24;x++){
        if (movies[x].GetGenre() == Genre){
            return movies[x].GetShowTime();
        }
    }
    return 0;
}
int Theater::GetPopcornPrice(){
    return popcornPrice;
}
int Theater::GetCokePrice(){
    return cokePrice;
}