#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
int x;
int y;
x=18;
y=2;
cout<<"Ket qua tra ve:\n";
cout<<"Gtri x\t"<<"Gtri y\t"<<"Bieu thuc\t"<<"Ket qua\n";
cout<<x<<" |\t"<<y<<" |\t"<<"A=y+3\t"<<"\t|"<<"A="<<y+3<<"\n";
cout<<x<<" |\t"<<y<<" |\t"<<"B=y-2\t"<<"\t|"<<"B="<<y-2<<"\n";
cout<<x<<" |\t"<<y<<" |\t"<<"C=y*5\t"<<"\t|"<<"C="<<y*5<<"\n";
cout<<x<<" |\t"<<y<<" |\t"<<"D=x/y\t"<<"\t|"<<"D="<<(float)(x/y)<<"\n";
cout<<x<<" |\t"<<y<<" |\t"<<"E=x%y\t"<<"\t|"<<"E="<<x%y<<"\n";

return 0;
}
