#include <iostream>
#include <fstream>

using namespace std;

bool readFile(int picture[][10], int size)
{
   int row = 0;
   int col = 0;
   int value = 0;
   ifstream fileIn("picture.txt");
   if (fileIn.fail())
   {
      cout << "Unable to open file." << endl;
      return false;
   }
   while (fileIn >> value)
   {
      if (row == size) // Exceed array
      {
         cout << "File too big." << endl;
         fileIn.close();
         return false;
      }
      picture[row][col] = value;
      if (col == size - 1)  // End of row
      {
         col = 0;
         row++;
      }
      else // Still in row
      {
         col++;
      }
   }
   if (row != size)  // Didn't fill array
   {
      cout << "File too small." << endl;
      fileIn.close();
      return false;
   }
   return true; // Array is full
}

bool draw(int picture[][10], int size)
{
   for (int row=0; row<size; row++)
   {
      for (int col=0; col<size; col++)
      {
         if (picture[row][col] == 1)
         {
            cout << "*";
         }
         else
         {
            cout << " ";
         }
      }
      cout << endl;
   }
}

int main()
{
   int picture[10][10];

   if (readFile(picture, 10))
   {
      draw(picture, 10);
   }

   return 0;
}
