/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: LAB 10 Task E. Overlapping time slots?
Add a new function

bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 
The function should return true if the two time slots overlap,
otherwise return false. (Take into account the starting times
of the time slots and the duration of the scheduled movies.)

Modify main function to test your code.

Hint: You may use minutesUntil to check which time slot is
earlier, then find the how long is the interval between their
starting times. They overlap if the movie duration is greater
than the interval between the time slots’ starting times.
Alternatively, converting times into minutes since midnight
can be a good idea as well.

(By the way, if you want to be accurate, if one movie starts
at 10:00 and lasts 90 minutes until 11:30, then it does not
overlap with a movie that starts exactly at 11:30. However,
they would overlap if the latter movie started one minute
earlier, at 11:29.)
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

bool AbeforeB (Time a, Time b){
    if(a.h == b.h){
        if(a.m < b.m){
            return true;
        }
    }
    if(a.h < b.h){
        return true;
    }
    else return false;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    if(AbeforeB(ts1.startTime,ts2.startTime)){
        Time alpha = addMinutes(ts1.startTime, ts1.movie.duration);
        if(AbeforeB(ts2.startTime, alpha)){
            return true;
        }
    }
    else{
        Time alpha = addMinutes(ts2.startTime, ts2.movie.duration);
        if(AbeforeB(ts1.startTime, alpha)){
            return true;
        }
    }
    return false;
}

int main(){
    return 0;
}