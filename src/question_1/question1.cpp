#include "question1.h"
#include <iostream>

// bool test_config()
// {
//     return true;
// }

using namespace std;

int get_hours(int seconds_since_1970) 
{
    return (seconds_since_1970 / 3600) % 24;
}

int get_minutes(int seconds_since_1970) 
{
    return (seconds_since_1970 / 60) % 60;
}

int get_seconds(int seconds_since_1970) 
{
    return seconds_since_1970 % 60;
}