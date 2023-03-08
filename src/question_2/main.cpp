#include "question2.h"
#include<iostream>

using std::cin; using std::cout;

int main()
{
    int selection = 0;
    double celsius = 0;
    double temp_value = 0;

    do
    {
        run_menu();
        cin>>selection;

        switch(selection)
        {
            case 1:
                cout<<"\nYou selected to convert Celsius to Fahrenheit.\n\n";
                cout<<"\nPlease enter a temperature in Celsius that you would like to convert into Farhenheit: ";
                cin>>celsius;
                temp_value = get_fahrenheit(celsius);
                cout<<"\n"<<celsius<<" degrees Celsius is "<<temp_value<<" in degrees Fahrenheit.\n";
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
                cout<<"Invalid selection. PLease enter an option 1-2 from the menu: ";
        }
    } 
    while (selection != 3);
    return 0;
}