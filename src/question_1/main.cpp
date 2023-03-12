#include "question1.h"
#include <iostream>

using namespace std;

int main() 
{
    int seconds_since_1970 = 1570846218;
    int hours = get_hours(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970);
    int seconds = get_seconds(seconds_since_1970);
    cout<<"\nTime: "<<hours<<":"<<minutes<<":"<<seconds<<"\n\n";

    seconds_since_1970 = 1570875018;
    hours = get_hours(seconds_since_1970);
    minutes = get_minutes(seconds_since_1970);
    seconds = get_seconds(seconds_since_1970);
    cout<<"\nTime: "<<hours<<":"<<minutes<<":"<<seconds<<"\n\n";

    return 0;
}
