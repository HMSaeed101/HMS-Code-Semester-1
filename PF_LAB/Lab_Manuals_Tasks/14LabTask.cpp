// Lab Report 7 & 8 
// counts the no. of words and characters in the sentence using while loop only
#include <iostream>
using namespace std;
int main()
{
     char ch;
     int chars = 0;
     int words = 0;
     cout << "Enter a sentence: ";
     while ((ch = getchar()) != '\n') 
     {
          chars++;
          if (ch == ' ')
          {words++;}
     }
    words++;
    cout << "Number of characters: " << chars << endl;
    cout << "Number of words: " << words << endl;
    return 0;
}