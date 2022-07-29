#include<iostream>
nhap(arr[],arr[][]);
average(arr[][],grade[]);
xuat(name[],arr[][],grade[]); 


using namespace std;

int main()
{
	string name[5];
	char grade [5];
	int arr[5][4];
	nhap(name,arr);
	average(arr,grade);
	xuat(name,arr,grade); 
}
void nhapMangTen(){
	char arr[4];
	for(int i=0;i<3;i++){
		cout<<"nhap ten hoc sinh";
		cin>>arr[i];
	}
}
void nhapMangDiemSo(){
	double arr[4];
	for(int i=0;i<3;i++){
		cout<<"nhap ten hoc sinh";
		cin>>arr[i];
	}
}

//void nhapMang(){
//	int arr[4][6];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<6;j++){
//			if(j=1||j=2||j=3||j=4){
//				cout<<"nhap dieem tu 0-100";
//				cin >>arr[i][j];
//			}else if(j=5){
//				int tbc = (arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4])/4;
//				arr[i][j]=kiemTra(int tbc);
//			}else{
//				cout<<"nhap ten hoc sinh";
//				cin >>arr[i][j];
//			}
//		}
//		
//	}
//}
//void inMang(arr[]){
//	for (m=0; m<row; m++)
//	{
//		for(n=0; n<col; n++)
//			cout<<"arr["<<m<<"] ["<<n<<"] = "<<arr[m] [n]<<"   ";
//		cout<<endl;
//	}
//}
//void kiemTra(int a){
//	char b;
//	if(a<=100||a>=90){
//		b = "A";
//	}else if(a<=89||a>=80){
//		b = "B";
//	}else if(a<=79||a>=70){
//		b = "C";
//	}else if(a<=79||a>=60){
//		b = "D";
//	}else if(a<=59||a>=0){
//		b = "F";
//	}
//}
