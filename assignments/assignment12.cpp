/***********************************************************************
* Program:
*    Assignment 12, Input & Variables 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth 
* Summary: 
*    Demonstrate variables and inputs
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Demonstrate variables and inputs 
 ***********************************************************************/
int main()
{
   double income;

   // Format real number output
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // Obtain monthly income and display properly formatted
   cout << "\tYour monthly income:";
   cin >> income;

   cout << "Your income is: $" << setw(9) << income << endl;

   return 0;
}
