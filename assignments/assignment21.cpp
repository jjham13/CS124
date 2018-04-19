/***********************************************************************
* Program:
*    Assignment 21, Debugging 
*    Brother Macbeth, CS124
* Author:
*    Chad Macbeth
* Summary: 
*    Create stub functions for a program to manage vehicle costs.
************************************************************************/

#include <iostream>
using namespace std;

float promptDevalue()
{
   return 0.0;
}

float promptInsurance()
{
   return 0.0;
}

float promptParking()
{
   return 0.0;
}

float promptMileage()
{
   return 0.0;
}

float promptGas()
{
   return 0.0;
}

float promptRepairs()
{
   return 0.0;
}

float promptTires()
{
   return 0.0;
}

void getPeriodicCost(float &costPeriodic)
{
   float devalueCost = 0.0;
   float insuranceCost = 0.0;
   float parkingCost = 0.0;
  
   devalueCost = promptDevalue();
   insuranceCost = promptInsurance();
   parkingCost = promptParking();

   costPeriodic = 0.0;
}

void getUsageCost(float &costUsage)
{
   float mileage = 0.0;
   float gasCost = 0.0;
   float repairsCost = 0.0;
   float tiresCost = 0.0;

   mileage = promptMileage();
   gasCost = promptGas();
   repairsCost = promptRepairs();
   tiresCost = promptTires();

   costUsage = 0.0;
}

void display(const float costUsage, const float costPeriodic)
{
   cout << "Success\n";
}

int main()
{
   float costPeriodic = 0.0;
   float costUsage = 0.0;
   
   getPeriodicCost(costPeriodic);
   getUsageCost(costUsage);
   display(costUsage, costPeriodic);

   return 0;
}
