#include <iostream>
#include<math.h>

using namespace std;
int main()
{
	double a,b,c,delta,x1,x2;
	cout<<" ax2+bx+c=0. "<<endl;
	cout<<"Enter a ";
	cin>>a;
	cout<<"Enter b ";
	cin>>b;
	cout<<"Enter c ";
	cin>>c;
	delta = (b*b) -(4*a*c);
	if(delta<0){
        x1=x2=0.0;
        cout<<"Phuong trinh da cho vo nghiem";

    }
    else if(delta==0){
        x1 = x2 = -b/(2*a);
        cout<<"Phuong trinh da cho co nghiem kep x=%.4f" << x1;
    
    }
    else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
         cout<<"Phuong trinh da cho co hai nghiem phan biet"<<endl;
        cout<< "x1=" << x1<<endl;
        cout<< "x2=" << x2<<endl;
        
    }
    
		
		
	
	
	


}
