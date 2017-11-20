#include <iostream>

using namespace std;

int main()
{
   int size = 0;
   cout << "Size of string: ";
   cin >> size;
   cin.ignore(1);

   //char text[size];
   char *text = new (nothrow) char[size+1];

   if (text != NULL)
   {
      cout << "Enter text: ";
      cin >> text;
      //cin.getline(text,size+1);

      cout << "You entered: " << text << endl;
      delete [] text;
   }

   return 0;
}
