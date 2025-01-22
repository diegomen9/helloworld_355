#include <iostream>
using namespace std;

int main()
{
   int n, res, temp, rev = 0;
   cout << "Enter a number:";
   cin >> n;
   temp = n;
   
   // Generate the reverse number
   while (temp > 0)
   {
      res = temp % 10;
      rev = (rev * 10) + res;
      temp = temp / 10;
   }
   
   // Check value
   if (n == rev)
      cout << n << " is a palindrome number." << endl;
   else
      cout << n << " is not a palindrome number." << endl;
   
   return 0;
}
