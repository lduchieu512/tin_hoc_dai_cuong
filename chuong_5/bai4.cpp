#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n,sum,area;
	cout<<"Enter n ";
	cin>>n;
	for(int i=0;i<=n;i++){
		if(i==n){
			sum= i*i;
			area+=sum;
			cout<<"("<<i<<"*"<<i<<") = "<<area;			
			break;
		}
		cout<<"("<<i<<"*"<<i<<") + ";
		sum= i*i;
		area+= sum;
	}
	




}
