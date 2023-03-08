#include "question2.h"
#include <iostream>

using std::cout;

// bool test_config()
// {
//     return true;
// }

double get_fahrenheit(double celsius)
{
    double fahrenheit = (9.0/5.0) * celsius + 32.0;
    return fahrenheit;
}

void run_menu()
{
    cout<<"\nTemperature Conversion Menu:\n";
    cout<<"Enter 1 to convert Celsius to Fahrenheit.\n";
    cout<<"Enter 2 to EXIT the program\n";
    cout<<"\n Please select an option: ";
}