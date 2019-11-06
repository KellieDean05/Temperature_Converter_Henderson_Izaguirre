// This is a program to convert celsius to fahrenheit and fahrenheit to celsius.
// Henderson,Izaguirre,Dr.T, 8-26-19
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
 // Declare and initialze the variables for celsius and fahrenheit.
    double conversion = 0 ;
    double celsius = 0;
    double fahrenheit = 0; 
    //iomainip thing
    cout << fixed <<setprecision(3);
 while (conversion != 3)
{
  cout << "\nPlease enter 1 for Celsius to Fahrenheit conversion and 2 for Fahrenheit to Celsius conversion or 3 to exit: " << endl;
  cin >> conversion; 
  // convert celsius to fahrenheit.
 if (conversion == 1)
 { 
  cout << "\nYou have decided to convert to Celsius to Fahrenheit." << endl;
  cout << "\n Please Enter your Celsius temperature: " << endl;
  cin >> celsius; 
// formula for celsius to fahrenheit conversion.
  fahrenheit = (celsius * (9.0/5.0)) + 32;

  cout << "\nThis temperature converted to fahrenheit is: " << fahrenheit << " degrees fahrenheit. " << endl;  
 }
// convert fahrenheit to celsius.
 else if(conversion == 2)
 {
 cout << "\nYou have decided to convert Fahrenheit to Celsius." << endl;
  cout << "\n Please Enter your Fahrenheit temperature: " << endl;
  cin >> fahrenheit; 
// formula for fahrenheit to celsius.
  celsius = ((fahrenheit - 32) * 5.0/9.0);

  cout << "\nThis temperature converted to Celsius is: " << celsius << " degrees celsius. " << endl;   
 } 
 else if (conversion != 1 && conversion != 2 && conversion != 3)
 // Make the escape!
{
 cout << "\nOnly 1, 2, or 3 can be used. Please try again. " << endl;
 cin >> conversion;
 } 
 else if (conversion == 3)
 {
   cout << "Byeeee!" << endl;
 }
}
  return 0;
}