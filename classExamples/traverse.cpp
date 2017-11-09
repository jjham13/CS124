#include <iostream>

using namespace std;

int main()
{
   char text[100] = "Merry Christmas";
   int i = 0;
   while(text[i] != 0)
   {
      cout << text[i];
      i++;
   }
   cout << endl;

   // Code with pointers
   int j = 0; 
   while(*(text+j) != 0  )
   {
      cout << *(text + j);
      j++;
   }
   cout << endl;

   char *ptr = text;
   while (*ptr != 0)
   {
      cout << *ptr;
      ptr++;
   }
   cout << endl;

   for (char *ptr2 = text; *ptr2 != 0; ptr2++)
   {
      cout << *ptr2;
   }
   return 0;
}
