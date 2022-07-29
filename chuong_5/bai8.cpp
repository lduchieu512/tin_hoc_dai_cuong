#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long temp, n;
  int P = 1;
  do
  {
    cout<<"\nNhap vao so nguyen n lon hon 0: ";
    cin>>n;
    if(n <= 0)
    {
      cout<<"\n So n phai lon hon 0, vui long nhap lai !";
    }
  }while(n <= 0);
  temp = n;
  while(temp != 0)
  {
    P = P * (temp % 10);
    temp = temp / 10;
  }
  cout<<"\nTich cac chu so cua "<<n<<" la: "<< P;
  
}
