#include<iostream>
using namespace std;
	int AverageEven(int[], int);
	float AverageOdd(int[], int);


int main () {
	int i, a[100], size;
	cout<<"Enter array size (Max:100): ";
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

	float average_Even = AverageEven(a,size);
	float average_odd = AverageOdd(a,size);
	cout<<"\nThe average of even number (values) of the array : "<<average_Even<<endl;
	cout<<"The average of odd number (values) of the array : "<<average_odd;
	
	return 0;	
}
int AverageEven (int arr[], int j) {
	int i, countEven=0,sumEven=0,averageEven;
	for(i=0;i<j;i++){
		if(arr[i]%2==0){
			sumEven+= arr[i];
			countEven++;
		}
	}
	
	averageEven = sumEven/countEven;
	return averageEven;	 
}
float AverageOdd (int arr[], int j) {
	int i,countOdd=0,sumOdd=0;
	for(i=0;i<j;i++){
		if(arr[i]%2==1){
			sumOdd+=arr[i];
			countOdd++;
		}
	}
	float averageOdd,odd;
	odd= sumOdd;
	averageOdd = odd/countOdd;
	return averageOdd;
	
	 
}
