/***********************************************************************
* Program:
*    Test 1, Practice 3 - Balance 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Determine balance of user based on homework and sleeping habits
*
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Get the time spent doing homework
 * ********************************************************************/
int getHomeworkHours()
{
   int homeworkHours = 0;

   cout << "Enter the number hours spent doing homework: ";
   cin >> homeworkHours; 
   return homeworkHours;
}

/**********************************************************************
 * Get the time spent sleeping 
 * ********************************************************************/
int getSleepHours()
{
   int sleepHours = 0;

   cout << "Enter the number hours spent sleeping: ";
   cin >> sleepHours;
   return sleepHours;
}

/***********************************************************************
 * Analyze balance based on homework and sleeping habits 
 ***********************************************************************/
void analyzeBalance(int homeworkHours, int sleepHours)
{
   if ((sleepHours < 4) && (homeworkHours > 8))
   {
      cout << "\tYou need better balance." << endl;
   }
   else
   {
      cout << "\tYou are doing good." << endl;
   }
}
  

/***********************************************************************
 * Obtain the homework and sleep habits and then analyze. 
 ***********************************************************************/
int main()
{
   int homeworkHours = 0;
   int sleepHours = 0;

   homeworkHours = getHomeworkHours();
   sleepHours = getSleepHours();

   // Pass hours by value
   analyzeBalance(homeworkHours, sleepHours); 

   return 0;
}
