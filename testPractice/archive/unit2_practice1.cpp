/***********************************************************************
* Program:
*    Test 2, Practice 1 - Average 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Compute average of inputs provided by the user
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Get inputs from the user and calculate the average
 * ********************************************************************/
float calculateAverage()
{
   float avg = 0.0;
   float sum = 0.0;
   int count = 0;
   float input = 0.0;

   do
   {
      cout << "Enter a number: ";
      cin >> input;
      if (input >= 0.0)
      {
         // Only include positive numbers (and 0).
         sum += input;
         count++;
      }
   }
   while (input >= 0.0);  // Stop when a negative number is entered
   if (count > 0)
   {
      // Calculate the average only if there was at least 1 number
      avg = sum / (float)count;
   }
   return avg;
}

/***********************************************************************
 * Obtain average and display it 
 ***********************************************************************/
int main()
{
   float avg = 0.0;

   avg = calculateAverage();

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   cout << "The average is: " << avg << endl;
 
   return 0;
}
