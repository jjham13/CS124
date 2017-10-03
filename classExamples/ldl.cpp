#include <iostream>

using namespace std;

bool checkLDL(float ldl)
{
   // 190 mg/dL and above is Very High
   // 160 - 189 mg/dL is High
   // 130 - 159 mg/dL is Borderline high
   // 100 - 129 mg/dL is Near optimal/about optimal
   // Less than 100 mg/dL is Optimal

   bool tooHigh = false;

   if (ldl < 40)
   {
      cout << "ERROR!  Invalid LDL value." << endl;
      tooHigh = false;
   }
   else if (ldl < 100)
   {
      cout << "Optimal" << endl;
      tooHigh = false;
   }
   else if (ldl <= 129)
   {
      cout << "Near optimal/about optimal" << endl;
      tooHigh = false;
   }
   else if (ldl <= 159)
   {
      cout << "Borderline high" << endl;
      tooHigh = true;
   }
   else if (ldl <= 189)
   {
      cout << "High" << endl;
      tooHigh = true;
   }
   else
   {
      cout << "Very High" << endl;
      tooHigh = true;
   }

   return tooHigh;
}

int main()
{
   float myLDL;
   bool alertUser;

   cout << "What is your LDL: ";
   cin >> myLDL;
   
   alertUser = checkLDL(myLDL);

   // Alert the patient that they need to take action
   // if alertUser is true.
  
   if (alertUser)
   {
      cout << "GO SEE A DOCTOR NOW!!!" << endl;
   }

   return 0;
}
