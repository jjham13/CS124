/***********************************************************************
* Program:
*    Assignment 30, Array Syntax 
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
void getGrades(int grades[], int numGrades)
{
   for (int i=0; i<numGrades; i++) // Array starts at 0
   {
      cout << "Grade " << i+1 << ": ";
      cin >> grades[i];
   }      
}

/**********************************************************************
 * Calculate the average from an array and its size
 * ********************************************************************/
void averageGrades(int grades[], int numGrades, int &average)
{
   int sum = 0;

   for (int i=0; i<numGrades; i++)
   {
      sum += grades[i];
   }
   average = sum / numGrades;
}
   
/**********************************************************************
 * Driver for the program
 ***********************************************************************/
int main()
{
   int grades[10];
   int average;

   getGrades(grades,10);
   averageGrades(grades,10,average);

   cout << "Average Grade: " << average << "%" << endl;

   return 0;
}
