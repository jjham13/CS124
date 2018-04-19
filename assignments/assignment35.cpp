/***********************************************************************
* Program:
*    Assignment ##, ????          (e.g. Assignment 10, Hello World)
*    Brother {Cook, Comeau, Falin, Lilya, Honeycutt, Unsicker, Peterson, Phair, Ellsworth}, CS124
* Author:
*    your name
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Convert grade to a letter grade A, B, C, D, F
 * *******************************************************************/
char computeLetterGrade(const int grade)
{
   char letter = '\0';
   switch(grade / 10)
   {
      case 10:
      case 9:
         letter = 'A';
         break;
      case 8:
         letter = 'B';
         break;
      case 7:
         letter = 'C';
         break;
      case 6:
         letter = 'D';
         break;
      default:
         letter = 'F';
   }
   return letter;
}

/**********************************************************************
 * Determine sign (+ or -) for the letter grade.  If no sign is needed
 * then return '*'.
 * *******************************************************************/
char computeGradeSign(const int grade)
{
   int lastDigit = grade % 10;
   char sign = '*';

   if ((grade >= 60) && (grade <= 96))
   { 
      sign = (lastDigit <= 2) ? '-' : ((lastDigit >= 7) ? '+' : '*');
   }
   return sign;
}

/**********************************************************************
 * Driver for computeLetterGrade and computeGradeSign
 ***********************************************************************/
int main()
{
   int grade = 0;
   char letter = '\0';
   char sign = '\0';

   cout << "Enter number grade: ";
   cin >> grade;
   letter = computeLetterGrade(grade);
   sign = computeGradeSign(grade);
   cout << grade << "% is " << letter;
   if (sign != '*')
   {
      cout << sign;
   }
   cout << endl;
   return 0;
}
