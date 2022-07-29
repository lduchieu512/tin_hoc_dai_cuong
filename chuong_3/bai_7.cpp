#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
  
using namespace std; 
  
int main(int argc, char *argv[]) 
{ 
    float x; 
    float y; 
    float p; 
    float s; 
    float q; 
    cout<<"Nhap gia tri x: "; 
    cin>>x; 
    cout<<"\n"; 
    cout<<"Nhap gia tri y: "; 
    cin>>y; 
    cout<<"\n"; 
    p=x*y; 
    s=x+y; 
    q=s*s+p*(s-x)*(p+y); 
    cout<<"Gia tri bieu thuc q la: "<<q; 
    cout<<"\n"; 
    
    return 0; 
} 
