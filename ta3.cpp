#include <iostream>
#include <cmath>
using namespace std;

int main()
  {

   double x, y, z, a, b, c;
   cout<<"Enter 3 numbers:"<<endl;
   cin>>x>>y>>z;

      a=2*x;
      b=2*y;
      c=2*z; 

   if (x>=y && y>=z) {
      cout<<a<<"    "<<b<<"    "<<c<<endl;
   } else {
         cout<<abs(x)<<"    "<<abs(y)<<"    "<<abs(z)<<endl;
      } 


return 0;

   }
