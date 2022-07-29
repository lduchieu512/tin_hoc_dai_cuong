#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int a, n,power, i;
  //Reading base & exponent
cout << "Enter number: ";
  cin >> a;
  cout << "Enter exponent: ";
  cin >> n;
  power = 1;
  i = 1;
  //caculating power of given number
     do 
    	  {
          power = power * a;
          i++;
       }
	while(i <= n); 
     cout << a << " Power of " << n << " is: " << power;
     return 0;
}

