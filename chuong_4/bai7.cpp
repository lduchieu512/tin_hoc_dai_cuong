#include <iostream>
using namespace std;
int main()
{
	int count;
	double usd,euro,vnd,yen,gbp;
	cout <<"1. Euro.\n";	
	cout <<"2. Japanese Yen.\n";
	cout <<"3. British Pound.\n";
	cout <<"4. Vietnamese Dong.\n ";
	cin>> count;
	switch (count)
	{ 
		case 1:
			{
			cout<<"Enter USD : ";
			cin>>usd;
			euro = 0.95*usd;
			cout<<"USD to EURO : "<< euro;
			break;
			}
		case 2:
			{
			cout<<"Enter USD : ";
			cin>>usd;
			yen = 136.12*usd;
			cout<<"Yen to EURO : "<< yen;
			break;
			}
		case 3:
			{
			cout<<"Enter USD : ";
			cin>>usd;
			gbp = 0,82*usd;
			cout<<"Pound to EURO : "<< gbp;
			break;
			} 
		case 4:
			{
			cout<<"Enter USD : ";
			cin>>usd;
			vnd = 23000*usd;
			cout<<"VND to EURO : "<< vnd;
			break;
			} 
		default:
    		{
       		 cout<<"Error";
   			}
	}
	
}
