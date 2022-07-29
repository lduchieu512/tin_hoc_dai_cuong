#include<iostream>
using namespace std;
float Average(int, int);

int Smallest_element(int [],int);
int Largest_Element (int[], int);
int main () {
	int i, a[50], size;
	cout<<"Enter array size (Max:50): ";
	cin>>size;
	if (size<1){
		cout<<"\nThis is out of range.\n";
		exit (0);
	}

	cout<<"\nEnter value of each element: \n";
	for (i=0; i<size; i++){
		cout<<"\nEnter value of element arr["<<i<<"] : ";
		cin>>a[i];
	}

	cout<<"\nThe values in array are: \n\n";
	for (i=0; i<size;i++){
		cout<<" "<<a[i]<<" ";
	}

	int largest_element = Largest_Element (a, size);	
	int smallest_element = Smallest_element(a, size);
	cout<<"\n\n Smallest and largest value in array:  "<<smallest_element<<" , " <<largest_element<<endl;
	
	float average_values = Average(largest_element,smallest_element);
	cout << "\nAverage of "<<size<<" numbers in array is = " <<average_values<<"\n";
	
	return 0;
}

// trung binh cong cua min, max
float Average (int x, int y) {
	float a,b;
	a=x;
	b=y;
float average;
	average = (a+b)/2;
return (average);
}
// min
int Smallest_element(int arr[],int k){	
	int largest=arr[0];
	int i;
	for (i=0; i<k; i++){
		if (arr[i]<largest){
			largest=arr[i];
		}
	}
	return (largest);
}

//max
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
