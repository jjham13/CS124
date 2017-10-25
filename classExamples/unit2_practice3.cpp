/***********************************************************************
* Program:
*    Test 2, Practice 3 - Multiples 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Display all multiples of a positive integer
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Display multiples of a number is descending order
 * ********************************************************************/
void displayMultiples(int number) 
{
   // Check each number from "number" to 1 for divisibility
   // We don't check 0 because that would cause a divide by 0 error
   for (int i=number; i>=1; i--)
   {
      if (number % i == 0)  // If mod is 0 then it is divisible
      {
         cout << i << endl;
      }
   }
}

/***********************************************************************
 * Ask the user for a number and display the multiples 
 ***********************************************************************/
int main()
{
   int number = 0;

   cout << "Enter a positive number: ";
   cin >> number;
   
   displayMultiples(number);
 
   return 0;
}
