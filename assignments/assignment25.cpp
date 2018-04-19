/***********************************************************************
* Program:
*    Assignment 25, Loop Design
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Display a calendar based on number of days and the offset.
*    leap years.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Display the numbered days (and leading whitespace) for the calendar
 * ********************************************************************/
void displayTable(int numDays, int offset)
{
   int currCol = 0;

   cout << "  Su  Mo  Tu  We  Th  Fr  Sa" << endl;

   // Print whitespace for offset
   // Since Sunday is the first column but offset 0 = Monday, need
   // to perform (offset+1)%7.  This new formula uses 0 = Sunday and
   // 6 = Saturday.
   for (int i=1; i<=(offset+1)%7; i++)
   {
      cout << "    ";  // 4 spaces
      currCol++;
   }

   // Print all days from 1 to numDays
   for (int i=1; i<=numDays; i++)
   {
      cout << setw(4) << i;
      currCol++;
      // After printing the date for Saturday, start
      // a new row in the calendar
      if (currCol == 7)
      {
         cout << endl;
         currCol = 0;
      }
   }
   if (currCol != 0)
   {
      cout << endl;
   } 
}

/**********************************************************************
 * Driver for the program
 ***********************************************************************/
int main()
{
   int numDays = 0;
   int offset = 0;

   cout << "Number of days: ";
   cin >> numDays;
   cout << "Offset: ";
   cin >> offset;

   displayTable(numDays, offset);

   return 0;
}
