/*************************************
 * Tim Loveland
 * 8/14/2022     
 * Logic Operators
 * **********************************/
// Preprocessor directive
#include <iostream>
#include <iomanip> 
using namespace std;

// Function prototypes go here        

int main()
{
    // Define variables
    int num {};
    const int lower {10};
    const int upper {20};
    
    // Display true/false
    cout << boolalpha;
    
    // Determine if an entered integer is between two other integers
    // assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    // Initialize bounds check
    bool within_bounds {false};
    
    // Determine if values are in bounds
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    // Determine if an entered integer is outdide two other integers
    // assume lower < upper
    cout << "-----------------------------------------------" << endl;
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    // Initialize bounds check
    bool outside_bounds {false};
    
    // Determine if values are outside bounds
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
    
    // Determine if an entered integer is exactly on the boundary
    // assume lower < upper
    cout << "-----------------------------------------------" << endl;
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    // Initialize bounds check
    bool on_bounds {false};
    
    // Determine if values are on bounds
    on_bounds = (num == lower || num == upper);
    cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;
    
    // Determine if you need to wear a coat based on the temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    const int wind_speed_for_coat {25};     // wind over this value requires a coat
    const double temperature_for_coat {45}; // temperature below this value requires a coat
    
    // Require a coat if either wind is too high OR temperature is too low
    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    cout << "\nEnter windspeed in (mph): ";
    cin >> wind_speed;
    
    // Calculate if user needs to wear a coat (OR)
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    // Calculate if user needs to wear a coat (AND)
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
    
    
    
	return 0;
}
