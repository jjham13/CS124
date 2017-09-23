#include <iostream>

using namespace std;

int main()
{
   char firstName[20];
   float height;
   int yearBorn;

   cout << "Enter First Name: ";
   cin >> firstName;
   cout << "Enter Height and Year Born: ";
   cin  >> height >> yearBorn;
   cout << firstName << " is " << height << " inches tall." << endl;
   cout << firstName << " was born in " << yearBorn << "." << endl;

   return 0;
}
