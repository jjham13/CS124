/***********************************************************************
* Program:
*    Assignment 16, Compute Tax   
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Determine whih tax bracket the user's income is.
*
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Return the tax bracket as an integer value
 * *******************************************************************/
int computeTax(double income)
{
   int tax = 0;

   if (income <= 15100)
   {
      tax = 10;
   }
   else if (income <= 61300)
   {
      tax = 15; 
   }
   else if (income <= 123700)
   {
      tax = 25;
   }
   else if (income <= 188450)
   {
      tax = 28;
   }
   else if (income <= 336550)
   {
      tax = 33;
   }
   else
   {
      tax = 35;
   }
   return tax;
}

/**********************************************************************
 *  Obtain the income and display the tax bracket
 ***********************************************************************/
int main()
{
   int income;

   cout << "Income: ";
   cin >> income;
   cout << "Your tax bracket is " << computeTax(income) << "%" << endl;

   return 0;
}
