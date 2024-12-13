//code for finding the mass in different plants thro constants

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//constants declared

const double EARTH_GRAVITY = 9.807;
const double MOON_GRAVITY = 1.62;
const double MERCURY_GRAVITY = 3.7;
const double VENUS_GRAVITY = 8.87;

// starting function

int main()
{
    
    //initializing variables
    
    double kilos;
    double earth;
    double moon;
    double mercury;      
    double venus;

    // gather inputs
    
    cout << "Please enter the mass of an object in kilograms: ";
    cin >> kilos;
    cout << endl << endl;  // Two newlines after input

    // check if mass is underweight
    
    if (kilos <= 0) 
    {
        cout << "Error, invalid mass entered." << endl;
        cout << "The entered mass must be greater than 0." << endl;
        return 0;  // Exit the program if mass is invalid
    }

    // calculate the weight on different planets w/ constants
    
    earth = EARTH_GRAVITY * kilos;
    moon = MOON_GRAVITY * kilos;
    mercury = MERCURY_GRAVITY * kilos;
    venus = VENUS_GRAVITY * kilos;

    // output the results formatted with tabs
    
    cout << left << setw(16) << "Planet/Satellite" << "\t" << right << setw(14) << "Weight (N)" << endl << endl;

    // output Earth weight
    
    cout << left << setw(16) << "Earth" << "\t" << right << fixed << showpoint << setprecision(3) << setw(14) << earth;
    
    // if-else statement to check if earth is light or heavy
    
    if (earth > 1250) 
    {
        cout << "\tThe object is heavy";
    }
    else if (earth < 20) 
    {
        cout << "\tThe object is light";
    }
    cout << endl;

    // output weight on Moon
    
    cout << left << setw(16) << "Moon" << "\t" << right << fixed << showpoint << setprecision(3) << setw(14) << moon << endl;

    // output weight on Mercury
    
    cout << left << setw(16) << "Mercury" << "\t" << right << fixed << showpoint << setprecision(3) << setw(14) << mercury << endl;

    // output weight on Venus
    
    cout << left << setw(16) << "Venus" << "\t" << right << fixed << showpoint << setprecision(3) << setw(14) << venus << endl;
    return 0;
}
