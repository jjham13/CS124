#include <iostream>
#include <fstream>

using namespace std;

bool readFile(int picture[][10], int size)
{
   ifstream fileIn("picture.txt");
   if (fileIn.fail())
   {
      cout << "Unable to open file." << endl;
      return false;
   }
   // Add code
}

bool draw(int picture[][10], int size)
{
   // Add code
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
