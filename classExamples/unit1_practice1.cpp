/***********************************************************************
* Program:
*    Test 1, Practice 1 - Body Temperature 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Analyze body temperature
*
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Get the body temperature from the user.
 * ********************************************************************/
float getBodyTemp()
{
   float temp = 0.0;

   cout << "Enter your body temperature: ";
   cin >> temp;
   return temp;
}

/***********************************************************************
 * Analyze the body temperature. 
 * Fever: >= 100.5
 * Getting a Fever > 98.5
 ***********************************************************************/
void analyzeBodyTemp(float bodyTemp)
{
   if (bodyTemp >= 100.5)
   {
      cout << "\tYou have a fever" << endl;
   }
   else if (bodyTemp > 98.5)
   {
      cout << "\tYou might be getting a fever" << endl;
   }
   else
   {
      cout << "\tYou are okay" << endl;
   }
}
  

/***********************************************************************
 * Obtain the body temperature from the user and analyze it
 ***********************************************************************/
int main()
{
   float bodyTemp = 0.0;

   bodyTemp = getBodyTemp();

   // Pass temperature by value
   analyzeBodyTemp(bodyTemp);
 
   return 0;
}
