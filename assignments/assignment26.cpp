/***********************************************************************
* Program:
*    Assignment 26, Files 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Read a file containing grades and compute the average
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/**********************************************************************
 * Get the filename containing the grades
 * ********************************************************************/
void getFileName(char fileName[])
{
   cout << "Please enter the filename: ";
   cin >> fileName;
}

/**********************************************************************
 * Read the grades from the file.  Return the average.  If there
 * is an error opening the file or if there is more or less than 10
 * grades, then display an error and return an average of -1.0.
 * ********************************************************************/
float readFile(char fileName[])
{
   int count = 0;
   int sum = 0;
   int value = 0;
   ifstream fileIn(fileName);

   if (fileIn.fail())
   {
      cout << "Error reading file \"" << fileName << "\"" << endl;
      return -1.0;
   }

   // Read in each number and maintain the count and sum
   while (fileIn >> value)
   {
      count++;
      sum += value;
   }

   // Close the file before calculating the average
   fileIn.close();

   if (count != 10)
   {
      cout << "Error reading file \"" << fileName << "\"" << endl;
      return -1.0;
   }
   return ((float)sum / (float)count);
}

/**********************************************************************
 * Display the average
 * *******************************************************************/
void display(float average)
{
   if (average >= 0.0)  // A negative average indicates an error
   {
      cout.setf(ios::fixed);
      cout.precision(0);
      cout << "Average Grade: " << average << "%" << endl;
   }
}
   
/**********************************************************************
 * Driver for the program
 ***********************************************************************/
int main()
{
   char fileName[256];
   float average = 0.0;

   getFileName(fileName);
   average = readFile(fileName);
   display(average);

   return 0;
}
