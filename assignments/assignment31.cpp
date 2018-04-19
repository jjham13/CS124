/***********************************************************************
* Program:
*    Assignment 31, Array Design 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Get grades from user and calculate the average
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Get the grades from the user and return as an array with the size
 * ********************************************************************/
void getGrades(int grades[], const int numGrades)
{
   for (int i=0; i<numGrades; i++) // Array starts at 0
   {
      cout << "Grade " << i+1 << ": ";
      cin >> grades[i];
   }      
}

/**********************************************************************
 * Calculate the average from an array and its size
 * Any value of -1 will be ignored. If no valid values were provided
 * then the average will default to 0 and the funtion will return
 * false.
 * ********************************************************************/
bool averageGrades(const int grades[], const int numGrades, int &average)
{
   int sum = 0;
   int validGrades = 0;

   for (int i=0; i<numGrades; i++)
   {
      if (grades[i] != -1) // Exclude -1
      {
         sum += grades[i];
         validGrades++;
      }
   }
   // Calculate the average if there was at least one valid value
   if (validGrades > 0)  
   {
      average = sum / validGrades;
      return true;
   }
   else
   {
      average = 0;
      return false;
   }
}

   
/**********************************************************************
 * Driver for the program
 ***********************************************************************/
int main()
{
   int grades[10];
   int average = 0;
   bool result = false;

   getGrades(grades,10);
   result = averageGrades(grades,10,average);

   if (result)  // Print the average if it was successful
   {
      cout << "Average Grade: " << average << "%" << endl;
   }
   else
   {
      cout << "Average Grade: ---%" << endl;
   } 

   return 0;
}
