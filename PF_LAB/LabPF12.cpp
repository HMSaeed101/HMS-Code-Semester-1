// Find Divisors

#include <iostream> 
using namespace std;
int main()
{
     int i, n1;
     cout<<"Enter the number to find it's divisors : " ;

     cin>>n1 ;
     cout<<"\nThe divisors are :\n" ;

     for(i = 1 ; i <= n1 ; i++)
     {
          if(n1 % i == 0)
          cout<<"\t"<<i<<endl ;
     }
     system("pause");
     return 0;
}