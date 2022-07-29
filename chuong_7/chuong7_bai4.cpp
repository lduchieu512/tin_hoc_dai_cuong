#include<iostream>
using namespace std;
float Average(float[], int);
void List_Elements (float[],int);
int main()
{
int size, i;
float a[100];
// Enter the size of the array
cout<<"Enter array size (Max:50): ";
cin>>size;
//check whether size < 1 or not
if (size<1){
cout<<"\nThis is out of range.\n";
exit (0);
}
// Enter element’s values of the array
cout<<"\nEnter value of each element: \n";
for (i=0; i<size; i++) {
cout<<"\nEnter value of element arr["<<i<<"] : ";
cin>>a[i];
}
// List the element’s values of the array
cout<<"\nThe values in array are: \n\n";
List_Elements (a,size);

//Call the function to calculate the average of element’s values

float average_values = Average(a, size);
//Display the average of element’s values

cout << "\nAverage of "<<size<<" numbers in array is = " <<average_values<<"\n";
return 0;
}

// Function for listing the elements of the array
void List_Elements (float arr[],int j) {
int k;
 for (k=0; k<j;k++) {
  cout<<" "<<arr[k]<<" ";
 }
}

// Function for calculating the average of element’s values
float Average (float arr[], int j) {
int l;
float average;
float sum=0.0;
	for (l=0; l<j;l++) {
		sum+=arr[l];
	}
average = sum/j;

return (average);
}
