#include <iostream>

using namespace std;

void menu(char selection)
{
   switch(selection)
   {
      case 'n':
      case 'N':
         cout << "new" << endl;
         break;
      case 'P':
      case 'p':
         cout << "print" << endl;
         break;
      case 's':
         cout << "save" << endl;
         //break;
      case 'q':
         cout << "quit" << endl;
         break;
      default:
         cout << "invalid" << endl;
   }
}

int main()
{
   char choice = '\0';

   cout << "Main Menu" << endl;
   cout << "n - new" << endl;
   cout << "p - print" << endl;
   cout << "s - save and quit" << endl;
   cout << "q - quit" << endl;
   cout << "choice> ";
   cin >> choice;
   menu(choice);
 
   return 0;
}   
