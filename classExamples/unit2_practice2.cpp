/***********************************************************************
* Program:
*    Test 2, Practice 2 - Cells 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Run a simulation to determine the number of cells over time
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Determine cell count after time 
 * ********************************************************************/
int countCells(int startingCells, int minutes) 
{
   int cells = startingCells;  // Start with the starting cells

   for (int i=1; i<=minutes; i++)
   {
      cells *= 2;  // Every minute the number of cells double
   }

   return cells;
}

/***********************************************************************
 * Obtain average and display it 
 ***********************************************************************/
int main()
{
   int startingCells = 0;
   int finalCells = 0;
   int minutes = 0;

   cout << "Enter number of starting cells: ";
   cin >> startingCells;
   cout << "Enter number of minutes: ";
   cin >> minutes;
   
   finalCells = countCells(startingCells, minutes);
   
   cout << "Total cells: " << finalCells << endl;
   
   return 0;
}
