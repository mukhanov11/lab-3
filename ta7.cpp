#include <iostream>
#include <cmath>
using namespace std;

int main()
  {

   double x, y, x1, y1;
   cout<<"Enter 2 DIFFERENT numbers:"<<endl;
   cin>>x>>y;

if (x!=y) {
   if (x<y) {
   x1=(x+y)/2;
   y1=2*x*y;

   } else {
     y1=2*x*y;
     x1=2*x*y;
          }

cout<<"X = "<<x1<<"	"<<"Y = "<<y1<<endl;



   } else {
     cout<<"Numbers must be different";
          }
return 0;

   }