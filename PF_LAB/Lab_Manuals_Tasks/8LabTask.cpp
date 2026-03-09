// Weight Detector
// saeed 25-CS-05
#include <iostream>
using namespace std;
int main()
{
     int w;
     cout << "Enter the weight : ";
     cin >> w;

     if (w>0)            {cout << "Weight detected !!";}
     else if (w==0)      {cout << "No Entered Weight";}
     else                {cout << "ERROR !!! Invalid Reading.";}

     return 0;
}