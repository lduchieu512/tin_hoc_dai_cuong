#include<iostream>
using namespace std;
int main()
{
	int n,a=1,b=1,c,output;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i==1 || i==2){
			a=1;
			b=1;
			output =1;
		}
		
		cout<< "So "<<output <<" la so Fibonacci \n";
		output= a+b;
		a = b ;
        b = output;
	}













}
