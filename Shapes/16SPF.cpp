// Cross Pattern Numbers (Modulus)
#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i < 10; i++) 
    {
        for(int j = 1; j < 10; j++) 
        {    
          // wave: star appears at moving positions
          // if(( (j % 10 == i % 10))|| (j % 10 == (10 - (i % 10)) ))
          if (i==j || i+j==10)
              cout << i << j << " " ;
          else
              cout << "   ";
        }
     cout << endl;
    }
}