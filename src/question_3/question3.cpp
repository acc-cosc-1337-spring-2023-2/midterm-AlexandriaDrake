#include "question3.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

// bool test_config()
// {
//     return true;
// }

string gpa_to_letter_grade(double gpa)
{
    string grade;

    if(gpa >= 3.5 && gpa <= 4.0)
	{
		grade = "A";
	}
	else if(gpa >= 3.0 && gpa <= 3.49)
	{
		grade = "B";
	}
	else if(gpa >= 2.0 && gpa <= 2.99)
	{
		grade = "C";
	}
	else if(gpa >= 1 && gpa <= 1.99)
	{
		grade = "D";
	}
	else if(gpa >= 0 && gpa <= .99)
	{
		grade = "F";
	}
	else
	{
		grade = "Invalid GPA. Please enter a valid GPA between 0 and 4: ";
	}

    return grade;
}

void run_menu()
{
    cout<<"\nGPA Conversion Menu:\n";
    cout<<"Enter 1 to convert a GPA to a letter grade.\n";
    cout<<"Enter 2 to EXIT the program\n";
    cout<<"\nPlease select an option: ";
}