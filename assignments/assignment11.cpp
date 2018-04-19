/***********************************************************************
* Program:
*    Assignment 11, Output
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Create output table properly aligned.
*
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Create output table properly algined 
 ***********************************************************************/
int main()
{
   // Set real number formatting
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // Display formatted table
   cout << "\tItem           Projected\n";
   cout << "\t=============  ==========\n";
   cout << "\tIncome         $" << setw(9) << 1000.00 << endl;
   cout << "\tTaxes          $" << setw(9) << 100.00 << endl;
   cout << "\tTithing        $" << setw(9) << 100.00 << endl;
   cout << "\tLiving         $" << setw(9) << 650.00 << endl;
   cout << "\tOther          $" << setw(9) << 90.00 << endl;
   cout << "\t=============  ==========\n";
   cout << "\tDelta          $" << setw(9) << 60.00 << endl;

   return 0;
}
