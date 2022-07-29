#include <iostream>
using namespace std;

int main() 
{
	// cach 1
//const int NUM_EMPLOYEES = 6;
//int hours [NUM_EMPLOYEES];
//
//cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";
//cin >> hours[0];
//cin >> hours[1];
//cin >> hours[2];
//cin >> hours[3];
//cin >> hours[4];
//
//cin >> hours[5];
//
//
//cout << "The hours you entered are: [";
//
//cout << " " << hours[0]<<" , ";
//cout << " " << hours[1]<<" , ";
//cout << " " << hours[2]<<" , ";
//cout << " " << hours[3]<<" , ";
//cout << " " << hours[4]<<" , ";
//cout << " " << hours[5] <<"]"<< endl;


// cach 2



const int NUM_EMPLOYEES = 6; 
int hours [NUM_EMPLOYEES]; 
int count; 

for (count = 0; count < NUM_EMPLOYEES; count++) {
cout << "Enter the hours worked by employee" <<(count + 1) << ": ";
cin >> hours[count];
}
cout << "The hours you entered are:";
for (count = 0; count < NUM_EMPLOYEES; count++)
cout << " " << hours[count];
cout << endl;

return 0;

	}
