#include<iostream>

using namespace std;

void Display_Array1 (int[10][10], int, int);
void Row_Sum1 (int[10][10], int, int);
void Col_Sum1 (int[10][10], int, int);
void Row_MaxMin1(int[10][10],int,int);
void Col_MaxMin1(int[10][10],int,int);


int main()
{
	int row, col, i, j, arr[10][10];
	cout<<"Enter the Row Size for Array: ";
	cin>>row;
	cout<<"Enter the Column Size for Array: ";
	cin>>col;
//Kiem tra xem kích thuoc (hàng cung nhu cot) có <1 hay không

	if (row<1 or col<1)
	{
		cout<<"\nThis is out of range.\n";
		exit(0);
	}
	cout<<"Enter "<<i*j<<" Array Elements: \n";
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		cin>>arr[i] [j];
	}
	cout<<"\nArray Elements with its Index:\n";
	Display_Array1 (arr, row, col);

	cout<<"\nCalculate and display the sum of value of elements in each row: \n";
	Row_Sum1 (arr, row, col);

	cout<<"\nCalculate and display the sum of value of elements in each column: \n";
	Col_Sum1 (arr, row, col);
	
	cout<<"\nThe largest and smallest element in row number n: \n";
	Row_MaxMin1(arr, row, col);
	
	cout<<"\nThe largest and smallest element in col number n: \n";
	Col_MaxMin1(arr, row, col);

	return 0;
}
void Display_Array1 (int arr[10][10], int row, int col)
{
	int m,n;
	for (m=0; m<row; m++)
	{
		for(n=0; n<col; n++)
			cout<<"arr["<<m<<"] ["<<n<<"] = "<<arr[m] [n]<<"   ";
		cout<<endl;
	}
	cout<<endl;
}
void Row_Sum1 (int arr[10][10], int row, int col)
{
	int m,n;
	for (m=0; m<row; m++)
	{
		int sumRow=0;
		for (n=0; n<col; n++)
		{
			sumRow += arr[m] [n];
		}

		cout << "\nSum of value of elements in row "<<m<<": " << sumRow<<"\n";
		cout<<endl;
	}
	cout<<endl;
}

void Col_Sum1 (int arr[10][10], int row, int col)
{
	int m,n;
		for (n=0; n<col; n++)
	{
		int sumCol=0;
		for(m=0; m<row; m++)
		{
			sumCol += arr[m] [n];
		}

		cout << "\nSum of value of elements in col "<<n<<":" << sumCol<<"\n";
	
		cout<<endl;
	}
	cout<<endl;
}
void Row_MaxMin1(int arr[10][10],int row,int col)
{
	int m,n;
	for (m=0; m<row; m++)
	{
		int maxRow=arr[m] [0],minRow=arr[m] [0];
		for (n=0; n<col; n++)
		{
			if(arr[m] [n]>maxRow)
			{
				maxRow= arr[m] [n];
			}else if(arr[m] [n]<minRow){
				minRow = arr[m] [n];
			}
		}

		cout << "\nMax of value of elements in row "<<m<<": " << maxRow<<"\n";
		cout << "\nMin of value of elements in row "<<m<<": " << minRow<<"\n";

	cout<<endl;
	}
	cout<<endl;
}

void Col_MaxMin1(int arr[10][10],int row,int col)
{
	int m,n;
	for (n=0; n<col; n++)
	{
		int maxCol= arr[0] [n],minCol= arr[0] [n];
		for(m=0; m<row; m++)
		{
			if(arr[m] [n]>maxCol){
				maxCol= arr[m] [n];
			}else if(arr[m] [n]<minCol){
				minCol= arr[m] [n];
			}
		}

		cout << "\nMax of value of elements in col "<<n<<":" << maxCol<<"\n";
		cout << "\nMin of value of elements in col "<<n<<":" << minCol<<"\n";

		cout<<endl;
	}
	cout<<endl;
}

