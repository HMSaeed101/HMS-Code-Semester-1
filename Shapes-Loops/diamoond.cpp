// Diamond 
// #include <iostream>
// using namespace std;
// int main()
// {
//      int num;
//      cout << "Enter the Size of Diamond Shape.";
//      cin >> num;

//      // First Part of Diamond
//      for(int i=1; i<=num; i++)
//      {
//           // Spaces Print
//           for(int k=num-1 ; k>=i ;k--)
//           {
//                cout << "   ";
//           }

//           // Character Print
//           for(int j=1 ; j<=(2*i)-1 ;j++)
//           {
//                cout << "#" << "  ";
//           }
//      cout << endl;
//      }


//      // Second Part of Diamond
//      for(int i=num-1; i>0 ; i--)
//      {
//           // Printing Spaces
//           for(int k=num ; k>i ; k--)
//           {
//                cout << "   ";
//           }

//           // Printing Character
//           for(int j=1 ; j<=(2*i)-1 ; j++)
//           {
//                cout << "#" << "  ";
//           }
//      cout << endl;
//      }
// }



#include <iostream>
using namespace std;
int main()
{
     for(int i=0; i<5; i++)
     {
          // Spaces
          for(int j=5 ; j>i ; j--)
          {
               cout << " - ";
          }
          // Character
          for(int j=0 ; j<2*i+1 ; j++)
          {
               cout << " # ";
          }
          cout << endl;
     }
     cout << "___________________________\n";
     for(int i=5; i>0; i--)
     {
          // Spaces
          for(int j=0 ; j<5-i ; j++)
          {
               cout << " - ";
          }
          // Character
          for(int j=0 ; j<2*i+1 ; j++)
          {
               cout << " # ";
          }
          cout << endl;
     }
}