// using only while loops that takes an integer from the user and prints how many times each digit (0–9) appears in the number

#include <iostream>
using namespace std;
int main()
{
     int num, temp;
     int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
     cout << "Enter any Number :";
     cin >> num;

     while( num!=0 )
     {
          temp = num % 10; //Last digit
          
          if(temp==0){zero++;}
          if(temp==1){one++;}
          if(temp==2){two++;}
          if(temp==3){three++;}
          if(temp==4){four++;}
          if(temp==5){five++;}
          if(temp==6){six++;}
          if(temp==7){seven++;}
          if(temp==8){eight++;}
          if(temp==9){nine++;}
          num = num / 10;x
     }

     cout << "\n Digit 0 : " << zero ;
     cout << "\n Digit 1 : " << one ;
     cout << "\n Digit 2 : " << two ;
     cout << "\n Digit 3 : " << three ;
     cout << "\n Digit 4 : " << four ;
     cout << "\n Digit 5 : " << five ;
     cout << "\n Digit 6 : " << six ;
     cout << "\n Digit 7 : " << seven ;
     cout << "\n Digit 8 : " << eight ;
     cout << "\n Digit 9 : " << nine ;
}