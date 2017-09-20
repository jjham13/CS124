#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

   cout.precision(1);
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   cout << "Weather Observations\n";
   cout << "Station    Temp  Wind Speed \\ Gust\n";
   cout << "=======  ======  =================\n";
   cout << "KZO      " 
        << setw(6)  << 101.0 << "  " 
        << setw(10) << 8.0   << " \\ " 
        << setw(4)  << 9.2   << endl; 
   cout << "ORD      " 
        << setw(6)  << 97.3 << "  " 
        << setw(10) << 25.1 << " \\ "
        << setw(4)  << 30.3 << endl;
   cout << "RXE      " 
        << setw(6)  << 80.1 << "  " 
        << setw(10) << 33.2 << " \\ " 
        << setw(4)  << 42.1 << endl;

   return 0;
}
