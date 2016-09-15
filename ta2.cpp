#include <iostream>
#include <cmath>
using namespace std;

int main()
  {

   double x, y, z;
   cout<<"Enter 3 numbers:"<<endl;
   cin>>x>>y>>z;

   if (x<y && x<z) {
      cout<<"The minimum of numbers is x - "<<x<<endl;
   } else {if (y<x && y<z) {
           cout<<"The minimum of numbers is y - "<<y<<endl;
   }
         else {
           cout<<"The minimum of numbers is z - "<<z<<endl;
          
         }} 






return 0;

   }
