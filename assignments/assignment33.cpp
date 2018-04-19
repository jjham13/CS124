/***********************************************************************
* Program:
*    Assignment 33
*    Brother Macbeth, CS 124
* Author:
*    Chad Macbeth
* Summary: 
*    Date money tracker.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Deduct cost of data from the selected account
 * ********************************************************************/
void date(float *account)
{
   float dinner = 0.0;
   float movie = 0.0;
   float iceCream = 0.0;

   cout << "Cost of the date:" << endl;
   cout << "\tDinner:    ";
   cin >> dinner;
   cout << "\tMovie:     ";
   cin >> movie;
   cout << "\tIce cream: ";
   cin >> iceCream;

   *account -= dinner;
   *account -= movie;
   *account -= iceCream;
}

/**********************************************************************
 * Driver for date function
 ***********************************************************************/
int main()
{
   float *largeBalance = 0;
   float samBalance = 0.0;
   float sueBalance = 0.0;

   cout << "What is Sam's balance? ";
   cin >> samBalance;
   cout << "What is Sue's balance? ";
   cin >> sueBalance;
  
   // Set largeBalance pointer to the variable containing the most money
   if (samBalance >= sueBalance)
   {
      largeBalance = &samBalance;
   }
   else
   {
      largeBalance = &sueBalance;
   }

   date(largeBalance);

   cout << "Sam's balance: $" << samBalance << endl;
   cout << "Sue's balance: $" << sueBalance << endl;

   return 0;
}
