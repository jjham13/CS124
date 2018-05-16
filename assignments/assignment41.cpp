/***********************************************************************
* Program:
*    Assignment 41, Allocating Memory 
*    Brother Macbeth, CS 124
* Author:
*    Chad Macbeth
* Summary: 
*    ALlocating Memory Example
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Driver
 ***********************************************************************/
int main()
{
   int size;
   char *text;

   cout << "Number of characters: ";
   cin >> size;
   cin.ignore(1);  // We are doing a getline later
   // Attempt to allocate memory.  Don't throw exception
   // This means we will need check for NULL.
   // Notice we need to do size+1 to accomidate the NULL at the end 
   text = new (nothrow) char[size+1];
   if (text == NULL)
   {
      cout << "Allocation failure!" << endl;
   }
   else
   {
      cout << "Enter Text: ";
      // The getline size includes the NULL character ... so use size+1
      cin.getline(text,size+1);
      cout << "Text: " << text << endl;
      // Don't need it anymore so delete it.
      delete text;
   }

   return 0;
}
