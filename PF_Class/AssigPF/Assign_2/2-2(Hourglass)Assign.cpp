// Take input and then print, Hourglass made of dec numbers
//        5 4 3 2 1 2 3 4 5 
//        - 4 3 2 1 2 3 4
//        - - 3 2 1 2 3
//        - - - 2 1 2
//        - - - - 1
//        - - - 2 1 2
//        - - 3 2 1 2 3
//        - 4 3 2 1 2 3 4
//        5 4 3 2 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter size of Hourglass : ";
     cin >> num;
     cout << endl;

// First Half of Pattern
for(int i=0 ; i<num ; i++)
{
     // for inc spaces
     for(int spc=1 ; spc<=i; spc++ )
     {
          if(i==0){cout << "";}
          else{cout << "  ";}
     }

     // for dec nums
     for(int dec=num-i ; dec>1 ; dec-- )
     {cout << dec << " ";}

     // for incr nums
     for(int inc=0 ; inc<=num-i ; inc++ )
     {
          if(inc==0){cout << "";}
          else{cout << inc << " ";}
     }
cout << endl;
}

// Second Half of Pattern
for(int i=1 ; i<=num ; i++)
{
     if(i==1){ cout << "" ; }
     else
     {
          // for dec spaces 
          for(int spc=num-i ; spc>=1 ; spc-- )
          {cout << "  ";}

          // for dec nums
          for(int dec=i ; dec>=1 ; dec--)
          {cout << dec << " ";}

          //for inc nums
          for(int inc=1 ; inc<=i ; inc++)
          {
               if(inc==1){cout << "";}
               else{cout << inc << " ";}
          }
          cout << endl;
     }
}
}