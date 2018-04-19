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

bool readFile(char fileName[], char board[][BOARD_SIZE], int size)
{
   ifstream fileIn(fileName);
   char input = '\0';

   if (fileIn.fail())
   {
      return false;
   }
   int row = 0;
   int col = 0;
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

void displayBoard(char board[][BOARD_SIZE], int size)
{
   for (int row=0; row<size; row++)
   {
      for (int col=0; col<size; col++)
      {
         if (board[row][col] == '.')
         {
            cout << "   ";
         }
         else
         {
            cout << " " << board[row][col] << " ";
         }
         if (col != size-1)
         {
            cout << "|";
         }
      }
      if (row != size-1)
      {
         cout << "\n---+---+---\n";
      }
   }
   cout << endl;
}

bool writeFile(char fileName[], char board[][BOARD_SIZE], int size)
{
   ofstream fileOut(fileName);
   if (fileOut.fail())
   {
      return false;
   }
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
