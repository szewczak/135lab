/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: LAB 10 Task D. Scheduling X after Y?
Add a new function

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
The function should produce and return a new TimeSlot for the
movie nextMovie, scheduled immediately after the time slot ts.

For example, if the movie scheduled in ts starts at 14:10 and
lasts 120 minutes, then the time slot for the next movie
should start at exactly 16:10.

Modify main function to test your code.
*/

#include <iostream>

using namespace std;

class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time){
    return time.h*60 + time.m;
}
int minutesUntil(Time earlier, Time later){
    int start = earlier.h*60+earlier.m;
    int end = later.h*60+later.m;
    // if(end>start){
    //     return end-start;
    // }
    // else{
    //     return 1440-start+end;
    // }
    // return (end - start);
    return end-start;
}

Time addMinutes(Time time0, int min){
    int totalmins = 60*time0.h + time0.m + min;
    time0.h = totalmins/60;
    time0.m = totalmins%60;
    return time0; 
}
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};


void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    // Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
    printMovie(ts.movie);
    cout << " [starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by ";
    Time theEndTimes = addMinutes(ts.startTime,ts.movie.duration);
    cout << theEndTimes.h << ":" << theEndTimes.m << "]\n";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    return TimeSlot {nextMovie, addMinutes(ts.startTime, ts.movie.duration)};
}
int main(){
    return 0;
}