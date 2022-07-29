#include <iostream>
using namespace std;
int main()
{
	int n,tong=0;
	do{
		cout<<"Nhap so n ";
		cin>>n;
	}while(n<0);
	for(int i =0;i<=n;i+=2){
		tong += i; 
	}
	cout<<tong<<endl;
}
