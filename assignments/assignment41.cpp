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
   cin.ignore(1);
   text = new (nothrow) char[size+1];
   if (text == NULL)
   {
      cout << "Allocation failure!" << endl;
   }
   else
   {
      cout << "Enter Text: ";
      cin.getline(text,size+1);
      cout << "Text: " << text << endl;
      delete text;
   }

   return 0;
}
