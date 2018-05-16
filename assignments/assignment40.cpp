/***********************************************************************
* Program:
*    Assignment 40, Multi-dimensional arrays
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Display a tic tac toe board on the screen from a file.
************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

#define BOARD_SIZE   3

/**********************************************************************
 * Read the tic tac toe board from a file into a multi-dimensional
 * array.  
 * ********************************************************************/
bool readFile(const char fileName[], char board[][BOARD_SIZE], const int size)
{
   ifstream fileIn(fileName);
   char input = '\0';

   if (fileIn.fail())
   {
      // Indicate failure to read the file
      return false;
   }
   int row = 0;
   int col = 0;
   // Read in one charactar at a time.
   while (fileIn >> input)
   {
      if (row == size)
      {
         // File too big
         fileIn.close();
         return false;
      }
      board[row][col] = input;
      if (col == size-1)
      {
         // Move to next row 
         row++;
         col = 0;
      }
      else
      {
         // Move to next column 
         col++;
      }      
   }
   fileIn.close();
   if (row != size)
   {
      // File too small
      return false;
   }
   return true;
}

/**********************************************************************
 * Display the tic tac toe array to the screen
 * ********************************************************************/
void displayBoard(const char board[][BOARD_SIZE], const int size)
{
   // Loop through row and each column
   for (int row=0; row<size; row++)
   {
      for (int col=0; col<size; col++)
      {
         // A dot represents a blank space on the board
         if (board[row][col] == '.')
         {
            cout << "   ";
         }
         else
         {
            cout << " " << board[row][col] << " ";
         }
         // Position the vertical bars
         if (col != size-1)
         {
            cout << "|";
         }
      }
      // Add the horizontal bar
      if (row != size-1)
      {
         cout << "\n---+---+---\n";
      }
   }
   cout << endl;
}

/*********************************************************************
 * Write the tic tac toe array back to a file
 * *******************************************************************/
bool writeFile(const char fileName[], const char board[][BOARD_SIZE], const int size)
{
   ofstream fileOut(fileName);
   if (fileOut.fail())
   {
      // Indicate an error if unable to open the file
      return false;
   }
   // Loop in the same way we did for displaying the board.
   for (int row=0; row<size; row++)
   {
      for (int col=0; col<size; col++)
      {
         fileOut << board[row][col] << " ";
      }
   }
   cout << "File written" << endl;
   fileOut.close();
   return true;
}

/**********************************************************************
 * Driver for the program
 ***********************************************************************/
int main()
{
   char fileName[100];
   bool result = false;
   char board[BOARD_SIZE][BOARD_SIZE];

   cout << "Enter source filename: ";
   cin >> fileName;

   result = readFile(fileName, board, BOARD_SIZE);
   if (result)
   {
      displayBoard(board, BOARD_SIZE);
   
      cout << "Enter destination filename: ";
      cin >> fileName;

      result = writeFile(fileName, board, BOARD_SIZE);
   }

   return 0;
}
