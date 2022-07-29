#include <iostream>
using namespace std;
int main()
{
	int year,month;
	bool isLeapYear = false;
	cout<<"Enter year : ";
	cin>> year;
	cout<<"Enter month : ";
	cin>>month;
	if(year % 4 == 0){
    	if(year % 100 == 0){
    	    if(year % 400 == 0){
     	       isLeapYear = true;
    	    }
    	} else {
    	    isLeapYear = true;
    	}
	}
	
	if(isLeapYear){
    cout<<year<<" is a leap year \n";
	} else {
    cout<< year<<" is NOT a leap year \n";
	}
	
	switch (month) {
    case 2:
        cout<<"The month '2' has 28 or 29 days!";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"The month '" << month << "' has 31 days!";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"The month '" << month <<"' has 30 days!";
        break;
    default:
        cout<<"Invalid input!";
        break;
}





}
