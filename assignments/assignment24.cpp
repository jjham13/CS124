/***********************************************************************
* Program:
*    Assignment 24, While Loop 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Demonstrate a while loop to wait for the use to type in a positive
*    number
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Read a number and re-prompt if negative 
 * ********************************************************************/
int getPositiveNumber()
{
   int number = 0;
   do
   {
      cout << "Enter a positive value: ";
      cin >> number;
      if (number < 0)
      {
         cout << "ERROR!" << endl;
      }
   }
   while (number < 0);

   return number;
}

/**********************************************************************
 * Driver for getPositiveNumber function
 * ********************************************************************/
int main()
{
   int value = 0;
  
   value = getPositiveNumber();
   cout << "You entered: " << value << endl;
   
   return 0;
}
