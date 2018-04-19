/***********************************************************************
* Program:
*    Assignment 23, Loop Syntax 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Find multiples of a number using a loop
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Sum all multiples of the specified value from 1 to less than 100 
 * ********************************************************************/
int sumMultiples(const int multiple)
{
   int sum = 0;
   for (int i=1; i<100; i++)
   {
      if (i % multiple == 0)
      {
         sum = sum + i;
      }
   }
   return sum;
}

/**********************************************************************
 * Driver for sumMultiples function
 * ********************************************************************/
int main()
{
   int sum = 0;
   int multiple = 0;

   cout << "What multiples are we adding? ";
   cin >> multiple;

   sum = sumMultiples(multiple);

   cout << "The sum of multiples of " << multiple 
        << " less than 100 are: " << sum << endl;
   
   return 0;
}
