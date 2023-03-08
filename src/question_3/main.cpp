#include "question3.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

int main()
{
    int selection = 0;
    double gpa = 0;
    string temp_value = "";

    do
    {
        run_menu();
        cin>>selection;

        switch(selection)
        {
            case 1:
                cout<<"\nYou selected to convert a GPA to a letter grade.\n\n";
                cout<<"\nPlease enter a GPA between 0 to 4: ";
                cin>>gpa;
                temp_value = gpa_to_letter_grade(gpa);
                cout<<"\nA GPA of "<<gpa<<" is a "<<temp_value<<" letter grade.\n";
                break;
            
            case 2:
                char confirm;
                cout<<"\nYou chose to exit the program. Are you sure you would like to exit the program? Enter 'Y' for yes or 'N' for no: \n\n";
                cin>>confirm;
                if(confirm == 'Y' || confirm == 'y')
                {
                    cout<<"\nExiting the program. Thank you!\n\n";
                    selection++;
                }
                else(confirm == 'N' || confirm == 'n');
                {
                    break;
                }
            
            default:
                cout<<"Invalid selection. Please enter an option 1-2 from the menu: ";
        }
    } 
    while (selection != 3);
    return 0;
}