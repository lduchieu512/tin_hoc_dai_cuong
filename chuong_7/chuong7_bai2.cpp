#include<iostream>
using namespace std;

int Largest_Element (int[], int);
int main (){
int i, a[50], size;
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
for (i=0; i<size; i++){
cout<<"\nEnter value of element arr["<<i<<"] : ";
cin>>a[i];
}
// List the element’s values of the array
cout<<"\nThe values in array are: \n\n";
for (i=0; i<size;i++){
cout<<" "<<a[i]<<" ";
}
//Call the function to find the maximum value
int largest_element = Largest_Element (a, size);
cout<<"\n\nLargest Element’s value in an Array is: "<<largest_element<<endl;
return 0;
}
// Function for finding the largest element in array

int Largest_Element (int arr[], int k){

int largest=arr[0];
int i;
for (i=0; i<k; i++){
	if (arr[i]>largest){
		largest=arr[i];
	}
}
return (largest);
}
