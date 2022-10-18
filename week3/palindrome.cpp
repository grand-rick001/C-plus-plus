#include <iostream>
using namespace std;

int main()
{
     /* This is the declaration of the variables and the input of the number. */
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

    /* Reversing the number and then checking if the number is a palindrome. */
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    cout << endl;

    return 0;
}