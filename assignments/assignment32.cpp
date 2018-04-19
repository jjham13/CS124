/***********************************************************************
* Program:
*    Assignment 32, Strings 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Get grades from user and calculate the average
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Count the number of occurances of "letter" in "text".
 * ********************************************************************/
int countLetters(char text[], char letter)
{
   int count = 0;
   int i = 0;

   // Look at each letter until you reach the NULL (0) character
   // at the end of the string.
   while (text[i] != 0)
   {
      if (text[i] == letter)
      {
         count++;
      }
      i++;
   }
   return count;
}

/**********************************************************************
 * Driver for the program
 ***********************************************************************/
int main()
{
   char letter = 0; // NULL
   char text[100] = "";
   int count = 0;
 
   cout << "Enter a letter: ";
   cin >> letter;
   // Dangers of mixing cin and getline.  
   // Need to ignore the \n that is still on the stream after
   // calling cin before calling getline
   cin.ignore(1);

   cout << "Enter text: ";
   cin.getline(text,100);
   
   count = countLetters(text, letter);
   cout << "Number of '" << letter << "'s: " << count << endl;

   return 0;

}
