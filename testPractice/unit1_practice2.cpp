/***********************************************************************
* Program:
*    Test 1, Practice 2 - Weight 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Compare the change in weight
*
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Get the two weights from the user.
 * ********************************************************************/
void getWeights(float &weightPrev, float &weightNew)
{
   cout << "Enter the previous weight: ";
   cin >> weightPrev; 
   cout << "Enter the new weight: ";
   cin >> weightNew;
}

/***********************************************************************
 * Compare the weights and show the absolute difference (positive num) 
 ***********************************************************************/
void compareWeights(float weightPrev, float weightNew)
{
   if (weightPrev < weightNew)
   {
      cout << "\tWeight increased by " << (weightNew - weightPrev)  
           << " pounds." << endl;
   }
   else if (weightPrev > weightNew)
   {
      cout << "\tWeight dereased by " << (weightPrev - weightNew)
           << " pounds." << endl;
   }
   else
   {
      cout << "\tWeight did not change" << endl;
   }
}
  
/***********************************************************************
 * Obtain the weights and compare them. 
 ***********************************************************************/
int main()
{
   float weightPrev = 0.0;
   float weightNew = 0.0;

   // Weights are passed by reference 
   getWeights(weightPrev, weightNew);

   // Weights are passed by value
   compareWeights(weightPrev, weightNew);
    
   return 0;
}
