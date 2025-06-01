#include <iostream>
#include <cstdint>
#include <iomanip>

using _integer = int32_t;
using std::cout;
using std::endl;

/*
Julian Calendar - "The Julian calendar is a solar calendar of 365 days 
in every year with an additional leap day every fourth year (without exception)."

It's starting point is: January 1, 4713 BC so that is year 1 of the current Julian period
and the JDN of 0.

Julian day number (JDN) - "counts the number of days since the epoch". 

The results may not be precise! 

Reference: https://en.wikipedia.org/wiki/Julian_day
*/

//function prototypes:
_integer from_gregorian_date_to_JDN(const int, const int, const int);
double from_JDN_to_JD( const _integer, const int, const int, const int);


int main(){

    cout << std::fixed << std::setprecision(2);
    cout << "The JDN for January 1, 2000 is: " << from_gregorian_date_to_JDN(1, 1, 2000) << endl;
    cout << "The JD for January 1, 2000, at 6:00:00 UT is: " << from_JDN_to_JD(from_gregorian_date_to_JDN(1,1,2000), 6, 0, 0) << endl;
}

_integer from_gregorian_date_to_JDN(const int day, const int month, const int year){

    return 1461 * (year + 4800 + (month - 14 ) / 12) / 4 +
    367 * (month - 2 - 12 * (month - 14) / 12) / 12 - 
    3 * ((year + 4900 + (month - 14) / 12) / 100) / 4 +
    day - 32075;
}

double from_JDN_to_JD(const _integer JDN, const int hour, const int minute, const int second){
    return JDN + (hour - 12) / 24.0 + minute / 1440.0 + second / 86400.0;
}   

