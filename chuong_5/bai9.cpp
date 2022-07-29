#include<iostream>
#include <stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,m, count,x ;
do
  {
    cout<<"\nNhap vao so tu nhien n lon hon 0: ";
    cin>>n;
    cout<<"\nNhap vao so tu nhien m lon hon n: ";
    cin>>m;
    if(n < 0 || n>m)
    {
      cout<<"\n So n phai lon hon 0 va so m phai lon hon n \n Vui long nhap lai !";
    }
  }while(n < 0|| n>m);
  
  for(int i = n; i<=m;i++){
  		
  		x=i;
  		count =0;
  		while(x>0){
  			x/=10;
  			count++;
		}
		
		int tmp =i, sum =0,last;
		while(tmp>0){
			last = tmp%10;  // lay chu so cuoi cung
			tmp/=10;        // bo chu so cuoi cung
			sum+= pow(last,count);
		}
		if(sum==i){
			cout<<i<<" la so armstrong!\n";
		}
//		else{
//			cout<<i<<" khong la so armstrong!\n";
//		}	  
	}
  	

}
