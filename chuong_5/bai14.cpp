#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int menu;
	do{
		cout<<"=====MENU=====\n";
		cout<<"1.Kiem tra so Armstrong \n";
		cout<<"2.Kiem tra so nguyen to \n";
		cout<<"3.Ban co muon thoat (y/n) \n";
		cin>>menu;
		switch(menu){
			case 1:
				{
				
				int a,count=0,x;
				cout<<"Nhap so can kiem tra ";
				cin>>a;
				x=a;
				while(x>0){
  					x/=10;
  					count++;
				}
				int tmp =a, sum =0,last;
				while(tmp>0){
					last = tmp%10;  // lay chu so cuoi cung
					tmp/=10;        // bo chu so cuoi cung
					sum+= pow(last,count);
				}
				if(sum==a){
					cout<<a<<" la so armstrong!\n";
				}else{
					cout<<a<<" khong la so armstrong!\n";
				}
				break;
			}
			case 2:
				{
				
				int b;
				cout<<"Nhap so can kiem tra ";
				cin>>b;
				if(b<2){
					cout<<b<<" is NOT a prime \n";
				}else{
					int j=2;
					bool check=true;
					while(j<=sqrt(b)){
						if(b%j==0){
							check = false;
							break;
						} 
						j++;
					}
					if(check){
						cout<<b<<" is a prime \n";
					}else{
						cout<<b<<" is NOT a prime \n";

					}
				}
				break;
			}
			case 3:{
				char y;
				cout<<"Ban co chac muon thoat chuong trinh (y/n) ";
				cin>>y;
				switch(y){
					case 'y':
						exit(3);
					case 'n':
						break;	
				}
			
				break;
			}
			
		}
		
	}while(true);
	
	
	
	
	
	
	
	
	
}
