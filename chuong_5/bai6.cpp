#include <iostream>
using namespace std;

int main()
{

	int n;
	cout<<"Enter n ";
	cin>>n;
	if(n<1){
		for(int i=n;i<=1;i++){
			cout<<i<<" ";
		}
	}else if(n>1){
		for(int j=n;j>=1;j--){
			cout<<j<<" ";
		}
	}



}
