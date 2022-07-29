#include <iostream>
using namespace std;
int main()
{

double kt,gk,ck,tb;
cout << " Nhap diem kiem tra \n";
cin>>kt;
cout << " Nhap diem giua ky \n";
cin>>gk;
cout << "Nhap diem cuoi ky\n";
cin>>ck;

tb = (0.2*kt)+(0.3*gk)+(0.5*ck);

if(tb >=8.5){
	cout<<tb<<" Xep loai A";
} else if(tb<8.5|| tb>=7.0){
	cout<<tb<<" Xep loai B";
}else if(tb>=5.5||tb<7.0){
	cout<<tb<<" Xep loai C";
}else if(tb>=4.0|| tb<5.5){
	cout<<tb<<" Xep loai D";
}else if (tb<4.0|| tb>0){
	cout<<tb<<" Xep loai F";
}

return 0;


}
