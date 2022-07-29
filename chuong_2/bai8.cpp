#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int input,year,residualsYear,month,residualsMonth,day;
	cout<<"Number of day : ";
	cin>>input;
	year = input/365;
	cout<<"Years : "<<year<<endl;
	residualsYear = input %365;
	month = residualsYear/30;
	cout<<"Mobths : "<<month<<endl;
	day = residualsYear%30;
	cout<<"Days : "<<day<<endl;

	 
	


}
