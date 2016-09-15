#include <iostream>
#include <cmath>
using namespace std;

int main()
  {

   double x, y, r;
   cout<<"Enter the point coordinates, X and Y:"<<endl;
   cin>>x>>y;
   cout<<"Enter the radius of circle, R "<<endl;
   cin>>r; 

   if (pow(x, 2)+pow(y, 2) < pow(r, 2)) {
      cout<<"The point is inside of circle"<<endl;
   } else {
         cout<<"The point is not inside of circle "<<endl;
      } 


return 0;

   }
