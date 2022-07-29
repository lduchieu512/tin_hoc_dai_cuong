#include <iostream>
using namespace std;
int main()
{
	double angle1,angle2,angle3,total =180;
	cout<<"Enter angle ";
	cin>>angle1;
	cout<<"Enter angle ";
	cin>>angle2;
	cout<<"Enter angle ";
	cin>>angle3;	
	
	if(total == angle1+angle2+angle3)
		cout<<"Triangle ";
	else
		cout<<" Not Triangle" ;
	



}
