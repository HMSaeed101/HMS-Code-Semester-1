// Numeric Square Hollow Box
#include <iostream>
using namespace std;
int main()
{
    for (int i=1;i<10;i=i+1)
          {
               for (int j=1;j<10;j=j+1)
                    {
                         if (j==1 or j==9 or i==1 or i==9){cout<<i<<j<<" ";}
                         else {cout<<"   ";}
                    }
    cout<<endl;
    }
}