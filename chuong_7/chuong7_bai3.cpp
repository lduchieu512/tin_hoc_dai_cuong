#include<iostream>

using namespace std;

int * FindandDelete_Element (int[], int, int);

void List_Elements (int[], int);

int main(){
int i, a[50], pos, size;
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

List_Elements (a,size);

// Enter the position (not index) to delete

cout<<"\n\nEnter position (not index) to delete the element::";
cin>>pos;
if (pos<1 or pos > size){
cout<<"\nThis is out of range.\n";
exit (0);
}
//Call the function to find and delete element

int * New_Array = FindandDelete_Element (a, size, pos);

//List the element’s values of the new array
cout<<"\nThe values in new array are: \n\n";

List_Elements (New_Array,size-1);

return 0;

}

// Function for listing the elements of the array

void List_Elements (int arr[],int j) {
int k;
for (k=0; k<j;k++){
		cout<<" "<<arr[k]<<" ";
	}
}
// Function for deleting the element in array
int * FindandDelete_Element (int arr[], int l,int m)
{
int n;
if(m>l or m<1)
{
cout<<"\nThis is out of range.\n";

exit (0);
}
else
{
--m; //calculate the index = pos -1;

for (n=m;n<=l-1;n++)
{

arr[n]=arr[n+1];
}
}

return (arr);

}

