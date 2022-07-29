#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int menu;
	do{
		cout<<"=====MENU======\n";
		cout<<"1- Print min, max digit in an integer \n";
		cout<<"2- Processing date data \n";
		cout<<"3- Character data \n";
		cout<<"4- Quit \n";
		cin>>menu;
		switch(menu){
			case 1:
			{
				int a;
				cout<<"input a ";
				cin>>a;
				int tmp = a, last,max = 0,min=9;
				while(tmp>0){
					last = tmp%10;  // lay chu so cuoi cung
					tmp/=10;        // bo chu so cuoi cung
					if(last >max){
						max = last;
					}
					if(last < min){
						min = last;
					}
				}
				cout<<"Maximum digit: "<<max<<endl;
				cout<<"Minimum digit: "<<min<<endl;
				break;
			}
			case 2:
				{
					int day,month,year;
					bool flg = false;
					cout<<"Input day ";
					cin>>day;
					cout<<"Input month ";
					cin>>month;
					cout<<"Input year ";
					cin>>year;
					if(day>0&&day<=31){
						if(month>0&&month<12){
								switch(month){
									case 1:
									case 3:
									case 5:
									case 7:
									case 8:
									case 10:
									case 12:
										if(day>0||day<=31){
											flg =true;
										}
										break;
									case 4:
									case 6:
									case 9:
									case 11:
									if(day>0||day<=30){
										flg =true;
									}			
									break;
									
									case 2:
									if(day>0||day <=29){
										flg =true;
									} 
								}
			
						}
							
					}
					
					if(flg){
						cout<<"Valid day, month, year \n";
					}else{
						cout<<"Invalid day, month, year \n";
					}
					break;
				}		
				
				case 4: 
				exit(4);
				break;
		
		}
	}while(true);
	
	
}
