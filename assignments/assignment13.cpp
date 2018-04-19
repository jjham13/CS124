/***********************************************************************
* Program:
*    Assignment 13, Expressions         
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth 
* Summary: 
*    Convert Fahrenheit to Celsius
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Convert Fahrenheit to Celsius
 ***********************************************************************/
int main()
{
   double fahrenheit;
   double celsius;

   // Set real number formatting (display like an integer)
   cout.precision(0);
   cout.setf(ios::fixed);

   cout << "Please enter Fahrenheit degrees: ";
   cin >> fahrenheit;

   // Convert fahrenheit to celsius
   celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

   cout << "Celsius: " << celsius << endl;
   
   return 0;
}
