#include <iostream>
using namespace std;
int main()
{
 char ch;
 cout << "Enter a character: ";
 cin >> ch;
 cout << "Its ASCII value: " << static_cast<int>(ch);
 // Another way: cout << "Its ASCII value: " << int(ch);
 return 0;
}
