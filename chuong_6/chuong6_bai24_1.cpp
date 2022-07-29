#include <iostream> 
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
	int i, tong =0,num=0;
	double tbc;
	ifstream f ;
	f.open("SoChan.txt");
	if(!f){
		cout<<"\n Error!";
		exit(0);
	}
	while(f>>i){
		cout<<i<<", ";		
		num++;
		tong+=i;
	}
	tbc= double (tong)/num;
	
	f.close();
	cout<<"\nTong : "<<tong;
	cout<<"\nso phan tu la : "<<num;
	cout<<"\nTrung binh cong: "<<tbc;
	getch();
	

	return 0;
}
