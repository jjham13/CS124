/***********************************************************************
* Program:
*    Assignment 43, Command Line
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Demonstrate the use of command line arguments.  Convert feet to
*    meters.
************************************************************************/

#include <iostream>
#include <cstdlib>  // atof

using namespace std;

/**********************************************************************
 * Driver
 *    argc = number of arguments 
 *    argv = argument array
 ***********************************************************************/
int main(int argc, char **argv)   // could also use char *argv[]
{
   double feet = 0.0;
   double meters = 0.0;

   cout.precision(1);
   cout.setf(ios::showpoint);
   cout.setf(ios::fixed);

   // Start loop at 1 because argv[0] is the program name (a.out)
   for (int i=1; i<argc; i++)
   {
      feet = atof(argv[i]);  // Convert char array to a double
      meters = 0.3048 * feet; 
      cout << feet << " feet is " << meters << " meters" << endl;
   }

    
   return 0;
}
