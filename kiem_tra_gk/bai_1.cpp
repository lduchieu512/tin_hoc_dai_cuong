#include <iostream>
using namespace std;

int main () {
    int n,i,sum=1;
	cout << " nhap N: ";
	cin>> n;		
    cout << " inday so tu nhien den so tu nhien thu "<<n<<"\n";
    for (i = n;  i!=0;i--) 
    {
        cout << i << " ";
		sum = sum + i;
    }
     cout << "\n tong cua cac so tu nhien: "<<sum << endl;
    return 0;
}
